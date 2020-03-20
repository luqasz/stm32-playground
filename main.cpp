#include "stm32f103xx.h"

#include <stdint.h>

template <typename T>
constexpr T
inverted(T value)
{
    return static_cast<T>(~value);
}

uint32_t volatile &
iomem(uint32_t address)
{
    return *reinterpret_cast<uint32_t volatile *>(address);
}

constexpr uint32_t PC13_MASK = inverted<uint32_t>(SFR::GPIOC_CRH::MODE130 | SFR::GPIOC_CRH::MODE131 | SFR::GPIOC_CRH::CNF130 | SFR::GPIOC_CRH::CNF131);
// Output mode max 50Mhz, push-pull
constexpr uint32_t PC13_MODE = SFR::GPIOC_CRH::MODE130 | SFR::GPIOC_CRH::MODE131;

int
main()
{
    // enable flash prefetch
    iomem(SFR::FLASH_ACR::address) |= SFR::FLASH_ACR::PRFTBE;
    // enable GPIOC
    iomem(SFR::RCC_APB2ENR::address) |= SFR::RCC_APB2ENR::IOPCEN;
    iomem(SFR::GPIOC_CRH::address) = (iomem(SFR::GPIOC_CRH::address) & PC13_MASK) | PC13_MODE;
    iomem(SFR::GPIOC_BRR::address) = SFR::GPIOC_BRR::BR13;

    while (1) {
        int ctr;
        ctr = (8000000 / 3) / 2;
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("nop");
            --ctr;
        }
        iomem(SFR::GPIOC_BRR::address) = SFR::GPIOC_BRR::BR13; // low
        ctr                            = (8000000 / 3) / 2;
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("nop");
            --ctr;
        }
        iomem(SFR::GPIOC_BSRR::address) = SFR::GPIOC_BSRR::BS13; // high
    }
}
