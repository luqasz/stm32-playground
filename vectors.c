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

void (*vectors[])(void) __attribute__((section(".vectors.core"))) = {
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
