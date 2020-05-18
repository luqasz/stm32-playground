#include <stdint.h>

extern "C" void reset(void);

extern "C" void
default_irq_handler()
{
    asm("wfi");
}

void NMI() __attribute__((weak, alias("default_irq_handler")));
void HardFault() __attribute__((weak, alias("default_irq_handler")));
void MemManage() __attribute__((weak, alias("default_irq_handler")));
void BusFault() __attribute__((weak, alias("default_irq_handler")));
void UsageFault() __attribute__((weak, alias("default_irq_handler")));
void SVC() __attribute__((weak, alias("default_irq_handler")));
void DebugMonitor() __attribute__((weak, alias("default_irq_handler")));
void PendSV() __attribute__((weak, alias("default_irq_handler")));
void SysTick() __attribute__((weak, alias("default_irq_handler")));

extern char STACK_START;
extern void (*const vectors[])() __attribute__((section(".vectors"))) = {
    (void (*)()) & STACK_START,
    reset,
    NMI,
    HardFault,
    MemManage,
    BusFault,
    UsageFault,
    0,
    0,
    0,
    0,
    SVC,
    DebugMonitor,
    0,
    PendSV,
    SysTick,
};
