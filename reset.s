  .cfi_sections .debug_frame

  .section .Reset, "ax"
  .global Reset
  .type Reset,%function
  .thumb_func
  .cfi_startproc
Reset:
  # ARMv6-M does not initialise LR, but many tools expect it to be 0xFFFF_FFFF
  # when reaching the first call frame, so we set it at startup.
  # ARMv7-M and above initialise LR to 0xFFFF_FFFF at reset.
  ldr r4,=0xffffffff
  mov lr,r4

  # Initialise .bss memory. `__sbss` and `__ebss` come from the linker script.
  ldr r0,=BSS_START
  ldr r1,=BSS_END
  mov r2,#0
0:
  cmp r1, r0
  beq 1f
  stm r0!, {r2}
  b 0b
1:

  # Initialise .data memory. `__sdata`, `__sidata`, and `__edata` come from the
  # linker script. Copy from r2 into r0 until r0 reaches r1.
  ldr r0,=DATA_START
  ldr r1,=DATA_END
  ldr r2,=DATA_LOAD_ADDRESS
2:
  cmp r1, r0
  beq 3f
  # load 1 word from r2 to r3, inc r2
  ldm r2!, {r3}
  # store 1 word from r3 to r0, inc r0
  stm r0!, {r3}
  b 2b
3:
  # Preserve `lr` and emit debuginfo that lets external tools restore it.
  # This fixes unwinding past the `Reset` handler.
  # See https://sourceware.org/binutils/docs/as/CFI-directives.html for an
  # explanation of the directives.
.cfi_def_cfa sp, 0
  push {lr}
.cfi_offset lr, 0

  # Jump to user main function. We use bl for the extended range, but the
  # user main function may not return.
  bl main

  # Trap on return.
  udf

  .cfi_endproc
  .size Reset, . - Reset
