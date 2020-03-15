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
    } > RAM AT > FLASH
    DATA_SIZE = SIZEOF(.data);
    DATA_END = DATA_START - DATA_SIZE;

    DATA_LOAD_START = LOADADDR(.data);
    DATA_LOAD_END = DATA_LOAD_START + DATA_SIZE;

    .bss (NOLOAD) : ALIGN(4)
    {
        BSS_START = .;
        *(.bss .bss.*);
    } > RAM
    BSS_SIZE = SIZEOF(.bss);
    BSS_END = BSS_START + BSS_SIZE;

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
