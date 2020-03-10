MEMORY {
    FLASH (RX): ORIGIN = 0x08000000, LENGTH = 64K
    SRAM (!RX): ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS {
    .vectors : {
        KEEP(*(.vectors))
    } > FLASH

    .text : {
        *(.text*)
    } > FLASH

    .rodata : {
        *(.rodata*)
    } > FLASH

    .bss : {
        *(.bss*)
    } > SRAM

}

