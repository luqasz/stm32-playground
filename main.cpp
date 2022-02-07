#include "stm32f103xx.h"

#include <stdint.h>

// PA13 SWDIO pin 46
// PA14 SWCLK pin 49
// PA15 TDI pin 50
// PB3 TDO pin 55
// PB4 NJRST
// 7 pin NRST

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

constexpr uint32_t PB11_MASK = inverted<uint32_t>(SFR::GPIOB_CRH::MODE110 | SFR::GPIOB_CRH::MODE111 | SFR::GPIOB_CRH::CNF110 | SFR::GPIOB_CRH::CNF111);
// Output mode max 2Mhz, push-pull
constexpr uint32_t PB11_MODE = SFR::GPIOB_CRH::MODE111;

int
main()
{
    // enable flash prefetch
    // iomem(SFR::FLASH_ACR::address) |= SFR::FLASH_ACR::PRFTBE;
    // enable GPIOB
    iomem(SFR::RCC_APB2ENR::address) |= SFR::RCC_APB2ENR::IOPBEN;
    iomem(SFR::GPIOB_CRH::address) = (iomem(SFR::GPIOB_CRH::address) & PB11_MASK) | PB11_MODE;
    iomem(SFR::GPIOB_BRR::address) = SFR::GPIOB_BRR::BR11;

    while (1) {
        int ctr;
        ctr = (8000000 / 5);
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("nop");
            --ctr;
        }
        iomem(SFR::GPIOB_BSRR::address) = SFR::GPIOB_BSRR::BR11; // low

        ctr = (8000000 / 5);
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("nop");
            --ctr;
        }
        iomem(SFR::GPIOB_BSRR::address) = SFR::GPIOB_BSRR::BS11; // high
    }
}
