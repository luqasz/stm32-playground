MEMORY {
    FLASH (RX): ORIGIN = 0x08000000, LENGTH = 64K
    RAM (!RX): ORIGIN = 0x20000000, LENGTH = 20K
}

EXTERN(Reset)
ENTRY(Reset)

SECTIONS {
    /*
     * Provide default stack start at end of RAM.
     * Stack grows downwards. To lower memory address.
     */
    PROVIDE(STACK_START = ORIGIN(RAM) + LENGTH(RAM));
    .vectors ORIGIN(FLASH) :
    {
        /* Stack pointer (SP) value */
        LONG(STACK_START);
        HIDDEN(core_interrupts_start_address = .);
        KEEP(*(.vectors.core));
        HIDDEN(core_interrupts_end_address = .);
        KEEP(*(.vectors.vendor));
        HIDDEN(vendor_interrupts_end_address = .);
    } > FLASH

    .text : ALIGN(4)
    {
        *(.Reset); /* Reset vector code */
        *(.text .text.*);
    } > FLASH

    .rodata : ALIGN(4)
    {
        . = ALIGN(4);
        *(.rodata .rodata.*);
        . = ALIGN(4);
    } > FLASH

    .data : ALIGN(4)
    {
        . = ALIGN(4);
        DATA_START = .;
        *(.data .data.*);
        . = ALIGN(4);
        DATA_END = ALIGN(4);
    } > RAM AT > FLASH
    DATA_LOAD_ADDRESS = LOADADDR(.data);

    .bss (NOLOAD) : ALIGN(4)
    {
        . = ALIGN(4);
        BSS_START = .;
        *(.bss .bss.*);
        *(COMMON); /* Uninitialized C statics */
        . = ALIGN(4);
        BSS_END = ALIGN(4);
    } > RAM

    /* Keep dynamic relocation section to detect it and raise an error. */
    .got (NOLOAD) :
    {
      KEEP(*(.got .got.*));
    }

    /DISCARD/ :
    {
    /* Unused exception related info that only wastes space */
    *(.ARM.exidx);
    *(.ARM.exidx.*);
    *(.ARM.extab.*);
    }
}

ASSERT(ORIGIN(FLASH) % 4 == 0, "
ERROR: start of FLASH region must be 4-byte aligned");
ASSERT(ORIGIN(RAM) % 4 == 0, "
ERROR: start of RAM region must be 4-byte aligned");
ASSERT(DATA_START % 4 == 0 && DATA_END % 4 == 0, "
ERROR: .data is not 4-byte aligned");
ASSERT(DATA_LOAD_ADDRESS % 4 == 0, "
ERROR: load memory address of .data is not 4-byte aligned");
ASSERT(BSS_START % 4 == 0 && BSS_END % 4 == 0, "
ERROR: .bss is not 4-byte aligned");
/* Core interrupts table should occupy 15 entries. Each address is 4 bytes long. */
ASSERT(core_interrupts_end_address - core_interrupts_start_address == 4*15, "
ERROR: core interrupts table != 15");
ASSERT(SIZEOF(.got) == 0, "
ERROR: .got section detected. Dynamic relocations are not supported.");
ASSERT(SIZEOF(.vectors) > 0x40, "
ERROR: Missing vendor interrupts in .vectors.vendor section.");
