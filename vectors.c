#include <stdint.h>

void DefaultInterruptHandler(void)
{
    __asm__ __volatile__("wfi");
}

#define IRQ(name)  name(void) __attribute__((weak, alias("DefaultInterruptHandler")))

void IRQ(NonMaskableInterrupt);
void IRQ(HardFault);
void IRQ(MemoryManagement);
void IRQ(BusFault);
void IRQ(UsageFault);
void IRQ(SVCall);
void IRQ(DebugMonitor);
void IRQ(PendSV);
void IRQ(SysTick);

extern void Reset(void);

void (*vectors_core[])(void) __attribute__((section(".vectors.core"))) = {
    Reset,
    NonMaskableInterrupt,
    HardFault,
    MemoryManagement,
    BusFault,
    UsageFault,
    0,
    0,
    0,
    0,
    SVCall,
    DebugMonitor,
    0,
    PendSV,
    SysTick,
};

void IRQ(WWDG);
void IRQ(PVD);
void IRQ(TAMPER);
void IRQ(RTC);
void IRQ(FLASH);
void IRQ(RCC);
void IRQ(EXTI0);
void IRQ(EXTI1);
void IRQ(EXTI2);
void IRQ(EXTI3);
void IRQ(EXTI4);
void IRQ(DMA1_CHANNEL1);
void IRQ(DMA1_CHANNEL2);
void IRQ(DMA1_CHANNEL3);
void IRQ(DMA1_CHANNEL4);
void IRQ(DMA1_CHANNEL5);
void IRQ(DMA1_CHANNEL6);
void IRQ(DMA1_CHANNEL7);
void IRQ(ADC1_2);
void IRQ(USB_HP_CAN_TX);
void IRQ(USB_LP_CAN_RX0);
void IRQ(CAN_RX1);
void IRQ(CAN_SCE);
void IRQ(EXTI9_5);
void IRQ(TIM1_BRK);
void IRQ(TIM1_UP);
void IRQ(TIM1_TRG_COM);
void IRQ(TIM1_CC);
void IRQ(TIM2);
void IRQ(TIM3);
void IRQ(TIM4);
void IRQ(I2C1_EV);
void IRQ(I2C1_ER);
void IRQ(I2C2_EV);
void IRQ(I2C2_ER);
void IRQ(SPI1);
void IRQ(SPI2);
void IRQ(USART1);
void IRQ(USART2);
void IRQ(USART3);
void IRQ(EXTI15_10);
void IRQ(RTCALARM);
void IRQ(TIM8_BRK);
void IRQ(TIM8_UP);
void IRQ(TIM8_TRG_COM);
void IRQ(TIM8_CC);
void IRQ(ADC3);
void IRQ(FSMC);
void IRQ(SDIO);
void IRQ(TIM5);
void IRQ(SPI3);
void IRQ(UART4);
void IRQ(UART5);
void IRQ(TIM6);
void IRQ(TIM7);
void IRQ(DMA2_CHANNEL1);
void IRQ(DMA2_CHANNEL2);
void IRQ(DMA2_CHANNEL3);
void IRQ(DMA2_CHANNEL4_5);

void (*vectors_vendor[])(void) __attribute__((section(".vectors.vendor"))) = {
    WWDG,
    PVD,
    TAMPER,
    RTC,
    FLASH,
    RCC,
    EXTI0,
    EXTI1,
    EXTI2,
    EXTI3,
    EXTI4,
    DMA1_CHANNEL1,
    DMA1_CHANNEL2,
    DMA1_CHANNEL3,
    DMA1_CHANNEL4,
    DMA1_CHANNEL5,
    DMA1_CHANNEL6,
    DMA1_CHANNEL7,
    ADC1_2,
    USB_HP_CAN_TX,
    USB_LP_CAN_RX0,
    CAN_RX1,
    CAN_SCE,
    EXTI9_5,
    TIM1_BRK,
    TIM1_UP,
    TIM1_TRG_COM,
    TIM1_CC,
    TIM2,
    TIM3,
    TIM4,
    I2C1_EV,
    I2C1_ER,
    I2C2_EV,
    I2C2_ER,
    SPI1,
    SPI2,
    USART1,
    USART2,
    USART3,
    EXTI15_10,
    RTCALARM,
    TIM8_BRK,
    TIM8_UP,
    TIM8_TRG_COM,
    TIM8_CC,
    ADC3,
    FSMC,
    SDIO,
    TIM5,
    SPI3,
    UART4,
    UART5,
    TIM6,
    TIM7,
    DMA2_CHANNEL1,
    DMA2_CHANNEL2,
    DMA2_CHANNEL3,
    DMA2_CHANNEL4_5,
};
