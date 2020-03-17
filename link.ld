MEMORY {
    FLASH (RX): ORIGIN = 0x08000000, LENGTH = 64K
    RAM (!RX): ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS {
    STACK_START = ORIGIN(RAM) + LENGTH(RAM);
    .vectors ORIGIN(FLASH) :
    {
        KEEP(*(.vectors))
    } > FLASH

    .text : ALIGN(4)
    {
        *(.text .text.*);
    } > FLASH

    .rodata : ALIGN(4)
    {
        *(.rodata .rodata.*);
    } > FLASH

    .data : ALIGN(4)
    {
        DATA_START = .;
        *(.data .data.*);
        DATA_END = ALIGN(4);
    } > RAM AT > FLASH
    DATA_LOAD_ADDRESS = LOADADDR(.data);

    .bss (NOLOAD) : ALIGN(4)
    {
        BSS_START = .;
        *(.bss .bss.*);
        BSS_END = ALIGN(4);
    } > RAM

    /DISCARD/ :
    {
    /* Unused exception related info that only wastes space */
    *(.ARM.exidx);
    *(.ARM.exidx.*);
    *(.ARM.extab.*);
    }
}

/* Alignment checks */
ASSERT(ORIGIN(FLASH) % 4 == 0, "ERROR: the start of the FLASH region must be 4-byte aligned");
ASSERT(ORIGIN(RAM) % 4 == 0, "ERROR: the start of the RAM region must be 4-byte aligned");
