.syntax unified

.section ".text"

.thumb_func
default_irq:
    wfi

.section ".vectors", "ax"

.macro irq name
    .word \name
    .weak \name
    .thumb_set \name, default_irq
.endm

.word STACK_START
.word reset
irq NMI
irq HardFault
irq MemManage
irq BusFault
irq UsageFault
irq reserved_1c
irq reserved_20
irq reserved_24
irq reserved_28
irq SVC
irq DebugMonitor
irq reserved_34
irq PendSV
irq SysTick
irq WWDG
irq PVD
irq Tamper
irq RTC
irq Flash
irq RCC
irq EXTI0
irq EXTI1
irq EXTI2
irq EXTI3
irq EXTI4
irq DMA1_Channel1
irq DMA1_Channel2
irq DMA1_Channel3
irq DMA1_Channel4
irq DMA1_Channel5
irq DMA1_Channel6
irq DMA1_Channel7
irq ADC1_2
irq USB_HP_CAN_TX
irq USB_LP_CAN_RX0
irq CAN_RX1
irq CAN_SCE
irq EXTI9_5
irq TIM1_BRK
irq TIM1_UP
irq TIM1_TRG_COM
irq TIM1_CC
irq TIM2
irq TIM3
irq TIM4
irq I2C1_EV
irq I2C1_ER
irq I2C2_EV
irq I2C2_ER
irq SPI1
irq SPI2
irq USART1
irq USART2
irq USART3
irq EXTI15_10
irq RTC_Alarm
irq USB_Wakeup
irq TIM8_BRK
irq TIM8_UP
irq TIM8_TRG_COM
irq TIM8_CC
irq ADC3
irq FSMC
irq SDIO
irq TIM5
irq SPI3
irq UART4
irq UART5
irq TIM6
irq TIM7
irq DMA2_Channel1
irq DMA2_Channel2
irq DMA2_Channel3
irq DMA2_Channel4_5
