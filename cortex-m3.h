#pragma once

#include <stdint.h>

/*
 * SysTick Control and Status Register.
 *
 * Resets value =
 *      0x00000000
 *      0x00000004 if device does not implement a reference clock.
 */
struct SYST_CSR {
    static constexpr uint32_t address = 0xE000E010;
    enum bits : uint32_t {
        ENABLE    = 0x00000001, // 1 = counter enabled.
        TICKINT   = 0x00000002, // 1 = Enables SysTick exception request
        CLKSOURCE = 0x00000004, // 1 - processor clock, 0 = external clock
        COUNTFLAG = 0x00010000, // 1 = timer counted to 0 since last time this was read.
    };
};

/*
 * SysTick Reload Value Register
 *
 * Can be any value in the range 0x00000001-0x00FFFFFF.
 * A start value of 0 is possible, but has no effect because the SysTick
 * exception request and COUNTFLAG are activated when counting from 1 to 0.
 *
 * Reset value = UNKNOWN
 *
 */
struct SYST_RVR {
    static constexpr uint32_t address = 0xE000E014;
};

/*
 * SysTick Current Value Register
 * Can be any value in the range 0x00000001-0x00FFFFFF.
 *
 * Reset value = UNKNOWN
 */
struct SYST_CVR {
    static constexpr uint32_t address = 0xE000E018;
};

/*
 * SysTick Calibration Value Register
 *
 * Reset value = implementation-defined
 */
struct SYST_CALIB {
    static constexpr uint32_t address = 0xE000E01C;
    /*
     * [23:0] TENMS
     * Reload value for 10ms (100Hz) timing, subject to
     * system clock skew errors. If the value reads as zero,
     * the calibration value is not known.
     */
    enum bits : uint32_t {
        SKEW  = 0x40000000, // 0 = TENMS value is exact, 1 otherwise
        NOREF = 0x80000000, // 0 = reference clock provided, 1 otherwise
    };
};
