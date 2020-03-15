.syntax unified
.section ".vectors", "ax"

.macro handler name
    .word \name
    .weak \name
    .thumb_set \name, default_irq_handler
.endm

.word STACK_START
.word reset
handler NMI
handler HardFault
handler MemManage
handler BusFault
handler UsageFault
handler reserved_1c
handler reserved_20
handler reserved_24
handler reserved_28
handler SVC
handler DebugMonitor
handler reserved_34
handler PendSV
handler SysTick
handler wwdg_irq_handler
handler pvd_irq_handler
handler tamper_irq_handler
handler rtc_irq_handler
handler flash_irq_handler
handler rcc_irq_handler
handler exti0_irq_handler
handler exti1_irq_handler
handler exti2_irq_handler
handler exti3_irq_handler
handler exti4_irq_handler
handler dma1_channel1_irq_handler
handler dma1_channel2_irq_handler
handler dma1_channel3_irq_handler
handler dma1_channel4_irq_handler
handler dma1_channel5_irq_handler
handler dma1_channel6_irq_handler
handler dma1_channel7_irq_handler
handler adc1_2_irq_handler
handler usb_hp_can_tx_irq_handler
handler usb_lp_can_rx0_irq_handler
handler can_rx1_irq_handler
handler can_sce_irq_handler
handler exti9_5_irq_handler
handler tim1_brk_irq_handler
handler tim1_up_irq_handler
handler tim1_trg_com_irq_handler
handler tim1_cc_irq_handler
handler tim2_irq_handler
handler tim3_irq_handler
handler tim4_irq_handler
handler i2c1_ev_irq_handler
handler i2c1_er_irq_handler
handler i2c2_ev_irq_handler
handler i2c2_er_irq_handler
handler spi1_irq_handler
handler spi2_irq_handler
handler usart1_irq_handler
handler usart2_irq_handler
handler usart3_irq_handler
handler exti15_10_irq_handler
handler rtcalarm_irq_handler
handler usbwakeup_irq_handler
handler tim8_brk_irq_handler
handler tim8_up_irq_handler
handler tim8_trg_com_irq_handler
handler tim8_cc_irq_handler
handler adc3_irq_handler
handler fsmc_irq_handler
handler sdio_irq_handler
handler tim5_irq_handler
handler spi3_irq_handler
handler uart4_irq_handler
handler uart5_irq_handler
handler tim6_irq_handler
handler tim7_irq_handler
handler dma2_channel1_irq_handler
handler dma2_channel2_irq_handler
handler dma2_channel3_irq_handler
handler dma2_channel4_5_irq_handler

.section ".text"

.thumb_func
default_irq_handler:
    wfi
    b default_irq_handler
