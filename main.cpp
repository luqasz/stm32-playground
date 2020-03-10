#include <stdint.h>

constexpr uint32_t STACK_START = 0x20000400;

/* Peripheral base address */
constexpr uint32_t PERIPHERAL_START_ADDRESS = 0x40000000;
constexpr uint32_t APB1_START_ADDRESS       = PERIPHERAL_START_ADDRESS;
constexpr uint32_t APB2_START_ADDRESS       = PERIPHERAL_START_ADDRESS + 0x10000;
constexpr uint32_t AHB_START_ADDRESS        = PERIPHERAL_START_ADDRESS + 0x20000;
constexpr uint32_t GPIOC_START_ADDRESS      = APB2_START_ADDRESS + 0x1000;
/*!< I/O port C clock enable */
constexpr uint32_t RCC_APB2ENR_IOPCEN = 1 << 4;
constexpr uint32_t RCC_START_ADDRESS  = AHB_START_ADDRESS + 0x1000;

// Reset and clock count
constexpr uint32_t RCC_CR       = RCC_START_ADDRESS;
constexpr uint32_t RCC_CFGR     = RCC_START_ADDRESS + 4;
constexpr uint32_t RCC_CIR      = RCC_START_ADDRESS + 8;
constexpr uint32_t RCC_APB2RSTR = RCC_START_ADDRESS + 12;
constexpr uint32_t RCC_APB1RSTR = RCC_START_ADDRESS + 16;
constexpr uint32_t RCC_AHBENR   = RCC_START_ADDRESS + 20;
constexpr uint32_t RCC_APB2ENR  = RCC_START_ADDRESS + 24;
constexpr uint32_t RCC_APB1ENR  = RCC_START_ADDRESS + 28;
constexpr uint32_t RCC_BDCR     = RCC_START_ADDRESS + 32;
constexpr uint32_t RCC_CSR      = RCC_START_ADDRESS + 36;

constexpr uint32_t GPIOC_CRL  = GPIOC_START_ADDRESS;
constexpr uint32_t GPIOC_CRH  = GPIOC_START_ADDRESS + 4;
constexpr uint32_t GPIOC_IDR  = GPIOC_START_ADDRESS + 8;
constexpr uint32_t GPIOC_ODR  = GPIOC_START_ADDRESS + 12;
constexpr uint32_t GPIOC_BSRR = GPIOC_START_ADDRESS + 16;
constexpr uint32_t GPIOC_BRR  = GPIOC_START_ADDRESS + 20;
constexpr uint32_t GPIOC_LCKR = GPIOC_START_ADDRESS + 24;

uint32_t volatile &
iomem(uint32_t address)
{
    return *reinterpret_cast<uint32_t volatile *>(address);
}

void
reset()
{
    iomem(RCC_APB2ENR) |= RCC_APB2ENR_IOPCEN;
    // General purpose output push-pull
    // Output mode, max speed 50 MHz
    iomem(GPIOC_CRH) = 0x44344444;
    iomem(GPIOC_BRR) = 1 << 13;

    while (1) {
        int ctr;
        ctr = (8000000 / 3) / 2;
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("");
            --ctr;
        }
        iomem(GPIOC_BRR) = 1 << 13; // low
        ctr              = (8000000 / 3) / 2;
        // each loop iteration takes 3 cycles to execute.
        while (ctr) {
            asm("");
            --ctr;
        }
        iomem(GPIOC_BSRR) = 1 << 13; // high
    }
}

void (*const vectors[])() __attribute__((used, section(".vectors"))) = {
    (void (*)())STACK_START,
    reset,
};

