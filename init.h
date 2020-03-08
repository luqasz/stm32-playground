#include <stdint.h>

// Reset and clock count
typedef struct {
    volatile uint32_t CR;
    volatile uint32_t CFGR;
    volatile uint32_t CIR;
    volatile uint32_t APB2RSTR;
    volatile uint32_t APB1RSTR;
    volatile uint32_t AHBENR;
    volatile uint32_t APB2ENR;
    volatile uint32_t APB1ENR;
    volatile uint32_t BDCR;
    volatile uint32_t CSR;

} RCC_TypeDef;

typedef struct {
    volatile uint32_t CRL;
    volatile uint32_t CRH;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t BRR;
    volatile uint32_t LCKR;
} GPIO_TypeDef;

/* Peripheral base address */
constexpr uint32_t PERIPHERAL_START_ADDRESS = 0x40000000;
constexpr uint32_t APB1_START_ADDRESS       = PERIPHERAL_START_ADDRESS;
constexpr uint32_t APB2_START_ADDRESS       = PERIPHERAL_START_ADDRESS + 0x10000;
constexpr uint32_t AHB_START_ADDRESS        = PERIPHERAL_START_ADDRESS + 0x20000;
constexpr uint32_t RCC_START_ADDRESS        = AHB_START_ADDRESS + 0x1000;
constexpr uint32_t GPIOC_START_ADDRESS      = APB2_START_ADDRESS + 0x1000;

#define PERIPH_BASE \
    ((uint32_t)0x40000000) /*!< Peripheral base address in the alias region */

/*!< Peripheral memory map */
#define APB1PERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE (PERIPH_BASE + 0x20000)

#define RCC_BASE (AHBPERIPH_BASE + 0x1000)

#define RCC ((RCC_TypeDef *)RCC_BASE)

#define RCC_APB2ENR_IOPCEN \
    ((uint32_t)0x00000010) /*!< I/O port C clock enable */

#define GPIOC_BASE (APB2PERIPH_BASE + 0x1000)
#define GPIOC ((GPIO_TypeDef *)GPIOC_BASE)
