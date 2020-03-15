.syntax unified
.cpu    cortex-m3
.global reset

.text
.thumb_func

reset:
    /* .data initialization.
    * Must be ALIGN(4)
    */
    ldr     r1, =DATA_LOAD_START
    ldr     r2, =DATA_START
    ldr     r3, =DATA_END
data_loop:
    cmp     r2, r3
    ittt    lo
    ldrlo   r0, [r1], #4
    strlo   r0, [r2], #4
    blo     data_loop

    /* .bss initialization.
    * Must be ALIGN(4)
    */
    movs    r0, #0
    ldr     r1, =BSS_START
    ldr     r2, =BSS_END
bss_loop:
    cmp     r1, r2
    itt     lo
    strlo   r0, [r1], #4
    blo     bss_loop

    bl      main
