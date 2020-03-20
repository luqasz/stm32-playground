#pragma once

#include <stdint.h>

namespace SFR {

    struct FSMC_BCR1 {
        static constexpr uint32_t address = 0xa0000000;
        enum bits : uint32_t {
            CBURSTRW  = 0x00080000,
            ASYNCWAIT = 0x00008000,
            EXTMOD    = 0x00004000,
            WAITEN    = 0x00002000,
            WREN      = 0x00001000,
            WAITCFG   = 0x00000800,
            WAITPOL   = 0x00000200,
            BURSTEN   = 0x00000100,
            FACCEN    = 0x00000040,
            MWID0     = 0x00000010,
            MWID1     = 0x00000020,
            MTYP0     = 0x00000004,
            MTYP1     = 0x00000008,
            MUXEN     = 0x00000002,
            MBKEN     = 0x00000001,
        };
    };

    struct FSMC_BTR1 {
        static constexpr uint32_t address = 0xa0000004;
        enum bits : uint32_t {
            ACCMOD0  = 0x10000000,
            ACCMOD1  = 0x20000000,
            DATLAT0  = 0x01000000,
            DATLAT1  = 0x02000000,
            DATLAT2  = 0x04000000,
            DATLAT3  = 0x08000000,
            CLKDIV0  = 0x00100000,
            CLKDIV1  = 0x00200000,
            CLKDIV2  = 0x00400000,
            CLKDIV3  = 0x00800000,
            BUSTURN0 = 0x00010000,
            BUSTURN1 = 0x00020000,
            BUSTURN2 = 0x00040000,
            BUSTURN3 = 0x00080000,
            DATAST0  = 0x00000100,
            DATAST1  = 0x00000200,
            DATAST2  = 0x00000400,
            DATAST3  = 0x00000800,
            DATAST4  = 0x00001000,
            DATAST5  = 0x00002000,
            DATAST6  = 0x00004000,
            DATAST7  = 0x00008000,
            ADDHLD0  = 0x00000010,
            ADDHLD1  = 0x00000020,
            ADDHLD2  = 0x00000040,
            ADDHLD3  = 0x00000080,
            ADDSET0  = 0x00000001,
            ADDSET1  = 0x00000002,
            ADDSET2  = 0x00000004,
            ADDSET3  = 0x00000008,
        };
    };

    struct FSMC_BCR2 {
        static constexpr uint32_t address = 0xa0000008;
        enum bits : uint32_t {
            CBURSTRW  = 0x00080000,
            ASYNCWAIT = 0x00008000,
            EXTMOD    = 0x00004000,
            WAITEN    = 0x00002000,
            WREN      = 0x00001000,
            WAITCFG   = 0x00000800,
            WRAPMOD   = 0x00000400,
            WAITPOL   = 0x00000200,
            BURSTEN   = 0x00000100,
            FACCEN    = 0x00000040,
            MWID0     = 0x00000010,
            MWID1     = 0x00000020,
            MTYP0     = 0x00000004,
            MTYP1     = 0x00000008,
            MUXEN     = 0x00000002,
            MBKEN     = 0x00000001,
        };
    };

    struct FSMC_BTR2 {
        static constexpr uint32_t address = 0xa000000c;
        enum bits : uint32_t {
            ACCMOD0  = 0x10000000,
            ACCMOD1  = 0x20000000,
            DATLAT0  = 0x01000000,
            DATLAT1  = 0x02000000,
            DATLAT2  = 0x04000000,
            DATLAT3  = 0x08000000,
            CLKDIV0  = 0x00100000,
            CLKDIV1  = 0x00200000,
            CLKDIV2  = 0x00400000,
            CLKDIV3  = 0x00800000,
            BUSTURN0 = 0x00010000,
            BUSTURN1 = 0x00020000,
            BUSTURN2 = 0x00040000,
            BUSTURN3 = 0x00080000,
            DATAST0  = 0x00000100,
            DATAST1  = 0x00000200,
            DATAST2  = 0x00000400,
            DATAST3  = 0x00000800,
            DATAST4  = 0x00001000,
            DATAST5  = 0x00002000,
            DATAST6  = 0x00004000,
            DATAST7  = 0x00008000,
            ADDHLD0  = 0x00000010,
            ADDHLD1  = 0x00000020,
            ADDHLD2  = 0x00000040,
            ADDHLD3  = 0x00000080,
            ADDSET0  = 0x00000001,
            ADDSET1  = 0x00000002,
            ADDSET2  = 0x00000004,
            ADDSET3  = 0x00000008,
        };
    };

    struct FSMC_BCR3 {
        static constexpr uint32_t address = 0xa0000010;
        enum bits : uint32_t {
            CBURSTRW  = 0x00080000,
            ASYNCWAIT = 0x00008000,
            EXTMOD    = 0x00004000,
            WAITEN    = 0x00002000,
            WREN      = 0x00001000,
            WAITCFG   = 0x00000800,
            WRAPMOD   = 0x00000400,
            WAITPOL   = 0x00000200,
            BURSTEN   = 0x00000100,
            FACCEN    = 0x00000040,
            MWID0     = 0x00000010,
            MWID1     = 0x00000020,
            MTYP0     = 0x00000004,
            MTYP1     = 0x00000008,
            MUXEN     = 0x00000002,
            MBKEN     = 0x00000001,
        };
    };

    struct FSMC_BTR3 {
        static constexpr uint32_t address = 0xa0000014;
        enum bits : uint32_t {
            ACCMOD0  = 0x10000000,
            ACCMOD1  = 0x20000000,
            DATLAT0  = 0x01000000,
            DATLAT1  = 0x02000000,
            DATLAT2  = 0x04000000,
            DATLAT3  = 0x08000000,
            CLKDIV0  = 0x00100000,
            CLKDIV1  = 0x00200000,
            CLKDIV2  = 0x00400000,
            CLKDIV3  = 0x00800000,
            BUSTURN0 = 0x00010000,
            BUSTURN1 = 0x00020000,
            BUSTURN2 = 0x00040000,
            BUSTURN3 = 0x00080000,
            DATAST0  = 0x00000100,
            DATAST1  = 0x00000200,
            DATAST2  = 0x00000400,
            DATAST3  = 0x00000800,
            DATAST4  = 0x00001000,
            DATAST5  = 0x00002000,
            DATAST6  = 0x00004000,
            DATAST7  = 0x00008000,
            ADDHLD0  = 0x00000010,
            ADDHLD1  = 0x00000020,
            ADDHLD2  = 0x00000040,
            ADDHLD3  = 0x00000080,
            ADDSET0  = 0x00000001,
            ADDSET1  = 0x00000002,
            ADDSET2  = 0x00000004,
            ADDSET3  = 0x00000008,
        };
    };

    struct FSMC_BCR4 {
        static constexpr uint32_t address = 0xa0000018;
        enum bits : uint32_t {
            CBURSTRW  = 0x00080000,
            ASYNCWAIT = 0x00008000,
            EXTMOD    = 0x00004000,
            WAITEN    = 0x00002000,
            WREN      = 0x00001000,
            WAITCFG   = 0x00000800,
            WRAPMOD   = 0x00000400,
            WAITPOL   = 0x00000200,
            BURSTEN   = 0x00000100,
            FACCEN    = 0x00000040,
            MWID0     = 0x00000010,
            MWID1     = 0x00000020,
            MTYP0     = 0x00000004,
            MTYP1     = 0x00000008,
            MUXEN     = 0x00000002,
            MBKEN     = 0x00000001,
        };
    };

    struct FSMC_BTR4 {
        static constexpr uint32_t address = 0xa000001c;
        enum bits : uint32_t {
            ACCMOD0  = 0x10000000,
            ACCMOD1  = 0x20000000,
            DATLAT0  = 0x01000000,
            DATLAT1  = 0x02000000,
            DATLAT2  = 0x04000000,
            DATLAT3  = 0x08000000,
            CLKDIV0  = 0x00100000,
            CLKDIV1  = 0x00200000,
            CLKDIV2  = 0x00400000,
            CLKDIV3  = 0x00800000,
            BUSTURN0 = 0x00010000,
            BUSTURN1 = 0x00020000,
            BUSTURN2 = 0x00040000,
            BUSTURN3 = 0x00080000,
            DATAST0  = 0x00000100,
            DATAST1  = 0x00000200,
            DATAST2  = 0x00000400,
            DATAST3  = 0x00000800,
            DATAST4  = 0x00001000,
            DATAST5  = 0x00002000,
            DATAST6  = 0x00004000,
            DATAST7  = 0x00008000,
            ADDHLD0  = 0x00000010,
            ADDHLD1  = 0x00000020,
            ADDHLD2  = 0x00000040,
            ADDHLD3  = 0x00000080,
            ADDSET0  = 0x00000001,
            ADDSET1  = 0x00000002,
            ADDSET2  = 0x00000004,
            ADDSET3  = 0x00000008,
        };
    };

    struct FSMC_PCR2 {
        static constexpr uint32_t address = 0xa0000060;
        enum bits : uint32_t {
            ECCPS0  = 0x00020000,
            ECCPS1  = 0x00040000,
            ECCPS2  = 0x00080000,
            TAR0    = 0x00002000,
            TAR1    = 0x00004000,
            TAR2    = 0x00008000,
            TAR3    = 0x00010000,
            TCLR0   = 0x00000200,
            TCLR1   = 0x00000400,
            TCLR2   = 0x00000800,
            TCLR3   = 0x00001000,
            ECCEN   = 0x00000040,
            PWID0   = 0x00000010,
            PWID1   = 0x00000020,
            PTYP    = 0x00000008,
            PBKEN   = 0x00000004,
            PWAITEN = 0x00000002,
        };
    };

    struct FSMC_SR2 {
        static constexpr uint32_t address = 0xa0000064;
        enum bits : uint32_t {
            FEMPT = 0x00000040,
            IFEN  = 0x00000020,
            ILEN  = 0x00000010,
            IREN  = 0x00000008,
            IFS   = 0x00000004,
            ILS   = 0x00000002,
            IRS   = 0x00000001,
        };
    };

    struct FSMC_PMEM2 {
        static constexpr uint32_t address = 0xa0000068;
        enum bits : uint32_t {
            MEMHIZx0  = 0x01000000,
            MEMHIZx1  = 0x02000000,
            MEMHIZx2  = 0x04000000,
            MEMHIZx3  = 0x08000000,
            MEMHIZx4  = 0x10000000,
            MEMHIZx5  = 0x20000000,
            MEMHIZx6  = 0x40000000,
            MEMHIZx7  = 0x80000000,
            MEMHOLDx0 = 0x00010000,
            MEMHOLDx1 = 0x00020000,
            MEMHOLDx2 = 0x00040000,
            MEMHOLDx3 = 0x00080000,
            MEMHOLDx4 = 0x00100000,
            MEMHOLDx5 = 0x00200000,
            MEMHOLDx6 = 0x00400000,
            MEMHOLDx7 = 0x00800000,
            MEMWAITx0 = 0x00000100,
            MEMWAITx1 = 0x00000200,
            MEMWAITx2 = 0x00000400,
            MEMWAITx3 = 0x00000800,
            MEMWAITx4 = 0x00001000,
            MEMWAITx5 = 0x00002000,
            MEMWAITx6 = 0x00004000,
            MEMWAITx7 = 0x00008000,
            MEMSETx0  = 0x00000001,
            MEMSETx1  = 0x00000002,
            MEMSETx2  = 0x00000004,
            MEMSETx3  = 0x00000008,
            MEMSETx4  = 0x00000010,
            MEMSETx5  = 0x00000020,
            MEMSETx6  = 0x00000040,
            MEMSETx7  = 0x00000080,
        };
    };

    struct FSMC_PATT2 {
        static constexpr uint32_t address = 0xa000006c;
        enum bits : uint32_t {
            ATTHIZx0  = 0x01000000,
            ATTHIZx1  = 0x02000000,
            ATTHIZx2  = 0x04000000,
            ATTHIZx3  = 0x08000000,
            ATTHIZx4  = 0x10000000,
            ATTHIZx5  = 0x20000000,
            ATTHIZx6  = 0x40000000,
            ATTHIZx7  = 0x80000000,
            ATTHOLDx0 = 0x00010000,
            ATTHOLDx1 = 0x00020000,
            ATTHOLDx2 = 0x00040000,
            ATTHOLDx3 = 0x00080000,
            ATTHOLDx4 = 0x00100000,
            ATTHOLDx5 = 0x00200000,
            ATTHOLDx6 = 0x00400000,
            ATTHOLDx7 = 0x00800000,
            ATTWAITx0 = 0x00000100,
            ATTWAITx1 = 0x00000200,
            ATTWAITx2 = 0x00000400,
            ATTWAITx3 = 0x00000800,
            ATTWAITx4 = 0x00001000,
            ATTWAITx5 = 0x00002000,
            ATTWAITx6 = 0x00004000,
            ATTWAITx7 = 0x00008000,
            ATTSETx0  = 0x00000001,
            ATTSETx1  = 0x00000002,
            ATTSETx2  = 0x00000004,
            ATTSETx3  = 0x00000008,
            ATTSETx4  = 0x00000010,
            ATTSETx5  = 0x00000020,
            ATTSETx6  = 0x00000040,
            ATTSETx7  = 0x00000080,
        };
    };

    struct FSMC_ECCR2 {
        static constexpr uint32_t address = 0xa0000074;
        enum bits : uint32_t {
            ECCx0  = 0x00000001,
            ECCx1  = 0x00000002,
            ECCx2  = 0x00000004,
            ECCx3  = 0x00000008,
            ECCx4  = 0x00000010,
            ECCx5  = 0x00000020,
            ECCx6  = 0x00000040,
            ECCx7  = 0x00000080,
            ECCx8  = 0x00000100,
            ECCx9  = 0x00000200,
            ECCx10 = 0x00000400,
            ECCx11 = 0x00000800,
            ECCx12 = 0x00001000,
            ECCx13 = 0x00002000,
            ECCx14 = 0x00004000,
            ECCx15 = 0x00008000,
            ECCx16 = 0x00010000,
            ECCx17 = 0x00020000,
            ECCx18 = 0x00040000,
            ECCx19 = 0x00080000,
            ECCx20 = 0x00100000,
            ECCx21 = 0x00200000,
            ECCx22 = 0x00400000,
            ECCx23 = 0x00800000,
            ECCx24 = 0x01000000,
            ECCx25 = 0x02000000,
            ECCx26 = 0x04000000,
            ECCx27 = 0x08000000,
            ECCx28 = 0x10000000,
            ECCx29 = 0x20000000,
            ECCx30 = 0x40000000,
            ECCx31 = 0x80000000,
        };
    };

    struct FSMC_PCR3 {
        static constexpr uint32_t address = 0xa0000080;
        enum bits : uint32_t {
            ECCPS0  = 0x00020000,
            ECCPS1  = 0x00040000,
            ECCPS2  = 0x00080000,
            TAR0    = 0x00002000,
            TAR1    = 0x00004000,
            TAR2    = 0x00008000,
            TAR3    = 0x00010000,
            TCLR0   = 0x00000200,
            TCLR1   = 0x00000400,
            TCLR2   = 0x00000800,
            TCLR3   = 0x00001000,
            ECCEN   = 0x00000040,
            PWID0   = 0x00000010,
            PWID1   = 0x00000020,
            PTYP    = 0x00000008,
            PBKEN   = 0x00000004,
            PWAITEN = 0x00000002,
        };
    };

    struct FSMC_SR3 {
        static constexpr uint32_t address = 0xa0000084;
        enum bits : uint32_t {
            FEMPT = 0x00000040,
            IFEN  = 0x00000020,
            ILEN  = 0x00000010,
            IREN  = 0x00000008,
            IFS   = 0x00000004,
            ILS   = 0x00000002,
            IRS   = 0x00000001,
        };
    };

    struct FSMC_PMEM3 {
        static constexpr uint32_t address = 0xa0000088;
        enum bits : uint32_t {
            MEMHIZx0  = 0x01000000,
            MEMHIZx1  = 0x02000000,
            MEMHIZx2  = 0x04000000,
            MEMHIZx3  = 0x08000000,
            MEMHIZx4  = 0x10000000,
            MEMHIZx5  = 0x20000000,
            MEMHIZx6  = 0x40000000,
            MEMHIZx7  = 0x80000000,
            MEMHOLDx0 = 0x00010000,
            MEMHOLDx1 = 0x00020000,
            MEMHOLDx2 = 0x00040000,
            MEMHOLDx3 = 0x00080000,
            MEMHOLDx4 = 0x00100000,
            MEMHOLDx5 = 0x00200000,
            MEMHOLDx6 = 0x00400000,
            MEMHOLDx7 = 0x00800000,
            MEMWAITx0 = 0x00000100,
            MEMWAITx1 = 0x00000200,
            MEMWAITx2 = 0x00000400,
            MEMWAITx3 = 0x00000800,
            MEMWAITx4 = 0x00001000,
            MEMWAITx5 = 0x00002000,
            MEMWAITx6 = 0x00004000,
            MEMWAITx7 = 0x00008000,
            MEMSETx0  = 0x00000001,
            MEMSETx1  = 0x00000002,
            MEMSETx2  = 0x00000004,
            MEMSETx3  = 0x00000008,
            MEMSETx4  = 0x00000010,
            MEMSETx5  = 0x00000020,
            MEMSETx6  = 0x00000040,
            MEMSETx7  = 0x00000080,
        };
    };

    struct FSMC_PATT3 {
        static constexpr uint32_t address = 0xa000008c;
        enum bits : uint32_t {
            ATTHIZx0  = 0x01000000,
            ATTHIZx1  = 0x02000000,
            ATTHIZx2  = 0x04000000,
            ATTHIZx3  = 0x08000000,
            ATTHIZx4  = 0x10000000,
            ATTHIZx5  = 0x20000000,
            ATTHIZx6  = 0x40000000,
            ATTHIZx7  = 0x80000000,
            ATTHOLDx0 = 0x00010000,
            ATTHOLDx1 = 0x00020000,
            ATTHOLDx2 = 0x00040000,
            ATTHOLDx3 = 0x00080000,
            ATTHOLDx4 = 0x00100000,
            ATTHOLDx5 = 0x00200000,
            ATTHOLDx6 = 0x00400000,
            ATTHOLDx7 = 0x00800000,
            ATTWAITx0 = 0x00000100,
            ATTWAITx1 = 0x00000200,
            ATTWAITx2 = 0x00000400,
            ATTWAITx3 = 0x00000800,
            ATTWAITx4 = 0x00001000,
            ATTWAITx5 = 0x00002000,
            ATTWAITx6 = 0x00004000,
            ATTWAITx7 = 0x00008000,
            ATTSETx0  = 0x00000001,
            ATTSETx1  = 0x00000002,
            ATTSETx2  = 0x00000004,
            ATTSETx3  = 0x00000008,
            ATTSETx4  = 0x00000010,
            ATTSETx5  = 0x00000020,
            ATTSETx6  = 0x00000040,
            ATTSETx7  = 0x00000080,
        };
    };

    struct FSMC_ECCR3 {
        static constexpr uint32_t address = 0xa0000094;
        enum bits : uint32_t {
            ECCx0  = 0x00000001,
            ECCx1  = 0x00000002,
            ECCx2  = 0x00000004,
            ECCx3  = 0x00000008,
            ECCx4  = 0x00000010,
            ECCx5  = 0x00000020,
            ECCx6  = 0x00000040,
            ECCx7  = 0x00000080,
            ECCx8  = 0x00000100,
            ECCx9  = 0x00000200,
            ECCx10 = 0x00000400,
            ECCx11 = 0x00000800,
            ECCx12 = 0x00001000,
            ECCx13 = 0x00002000,
            ECCx14 = 0x00004000,
            ECCx15 = 0x00008000,
            ECCx16 = 0x00010000,
            ECCx17 = 0x00020000,
            ECCx18 = 0x00040000,
            ECCx19 = 0x00080000,
            ECCx20 = 0x00100000,
            ECCx21 = 0x00200000,
            ECCx22 = 0x00400000,
            ECCx23 = 0x00800000,
            ECCx24 = 0x01000000,
            ECCx25 = 0x02000000,
            ECCx26 = 0x04000000,
            ECCx27 = 0x08000000,
            ECCx28 = 0x10000000,
            ECCx29 = 0x20000000,
            ECCx30 = 0x40000000,
            ECCx31 = 0x80000000,
        };
    };

    struct FSMC_PCR4 {
        static constexpr uint32_t address = 0xa00000a0;
        enum bits : uint32_t {
            ECCPS0  = 0x00020000,
            ECCPS1  = 0x00040000,
            ECCPS2  = 0x00080000,
            TAR0    = 0x00002000,
            TAR1    = 0x00004000,
            TAR2    = 0x00008000,
            TAR3    = 0x00010000,
            TCLR0   = 0x00000200,
            TCLR1   = 0x00000400,
            TCLR2   = 0x00000800,
            TCLR3   = 0x00001000,
            ECCEN   = 0x00000040,
            PWID0   = 0x00000010,
            PWID1   = 0x00000020,
            PTYP    = 0x00000008,
            PBKEN   = 0x00000004,
            PWAITEN = 0x00000002,
        };
    };

    struct FSMC_SR4 {
        static constexpr uint32_t address = 0xa00000a4;
        enum bits : uint32_t {
            FEMPT = 0x00000040,
            IFEN  = 0x00000020,
            ILEN  = 0x00000010,
            IREN  = 0x00000008,
            IFS   = 0x00000004,
            ILS   = 0x00000002,
            IRS   = 0x00000001,
        };
    };

    struct FSMC_PMEM4 {
        static constexpr uint32_t address = 0xa00000a8;
        enum bits : uint32_t {
            MEMHIZx0  = 0x01000000,
            MEMHIZx1  = 0x02000000,
            MEMHIZx2  = 0x04000000,
            MEMHIZx3  = 0x08000000,
            MEMHIZx4  = 0x10000000,
            MEMHIZx5  = 0x20000000,
            MEMHIZx6  = 0x40000000,
            MEMHIZx7  = 0x80000000,
            MEMHOLDx0 = 0x00010000,
            MEMHOLDx1 = 0x00020000,
            MEMHOLDx2 = 0x00040000,
            MEMHOLDx3 = 0x00080000,
            MEMHOLDx4 = 0x00100000,
            MEMHOLDx5 = 0x00200000,
            MEMHOLDx6 = 0x00400000,
            MEMHOLDx7 = 0x00800000,
            MEMWAITx0 = 0x00000100,
            MEMWAITx1 = 0x00000200,
            MEMWAITx2 = 0x00000400,
            MEMWAITx3 = 0x00000800,
            MEMWAITx4 = 0x00001000,
            MEMWAITx5 = 0x00002000,
            MEMWAITx6 = 0x00004000,
            MEMWAITx7 = 0x00008000,
            MEMSETx0  = 0x00000001,
            MEMSETx1  = 0x00000002,
            MEMSETx2  = 0x00000004,
            MEMSETx3  = 0x00000008,
            MEMSETx4  = 0x00000010,
            MEMSETx5  = 0x00000020,
            MEMSETx6  = 0x00000040,
            MEMSETx7  = 0x00000080,
        };
    };

    struct FSMC_PATT4 {
        static constexpr uint32_t address = 0xa00000ac;
        enum bits : uint32_t {
            ATTHIZx0  = 0x01000000,
            ATTHIZx1  = 0x02000000,
            ATTHIZx2  = 0x04000000,
            ATTHIZx3  = 0x08000000,
            ATTHIZx4  = 0x10000000,
            ATTHIZx5  = 0x20000000,
            ATTHIZx6  = 0x40000000,
            ATTHIZx7  = 0x80000000,
            ATTHOLDx0 = 0x00010000,
            ATTHOLDx1 = 0x00020000,
            ATTHOLDx2 = 0x00040000,
            ATTHOLDx3 = 0x00080000,
            ATTHOLDx4 = 0x00100000,
            ATTHOLDx5 = 0x00200000,
            ATTHOLDx6 = 0x00400000,
            ATTHOLDx7 = 0x00800000,
            ATTWAITx0 = 0x00000100,
            ATTWAITx1 = 0x00000200,
            ATTWAITx2 = 0x00000400,
            ATTWAITx3 = 0x00000800,
            ATTWAITx4 = 0x00001000,
            ATTWAITx5 = 0x00002000,
            ATTWAITx6 = 0x00004000,
            ATTWAITx7 = 0x00008000,
            ATTSETx0  = 0x00000001,
            ATTSETx1  = 0x00000002,
            ATTSETx2  = 0x00000004,
            ATTSETx3  = 0x00000008,
            ATTSETx4  = 0x00000010,
            ATTSETx5  = 0x00000020,
            ATTSETx6  = 0x00000040,
            ATTSETx7  = 0x00000080,
        };
    };

    struct FSMC_PIO4 {
        static constexpr uint32_t address = 0xa00000b0;
        enum bits : uint32_t {
            IOHIZx0  = 0x01000000,
            IOHIZx1  = 0x02000000,
            IOHIZx2  = 0x04000000,
            IOHIZx3  = 0x08000000,
            IOHIZx4  = 0x10000000,
            IOHIZx5  = 0x20000000,
            IOHIZx6  = 0x40000000,
            IOHIZx7  = 0x80000000,
            IOHOLDx0 = 0x00010000,
            IOHOLDx1 = 0x00020000,
            IOHOLDx2 = 0x00040000,
            IOHOLDx3 = 0x00080000,
            IOHOLDx4 = 0x00100000,
            IOHOLDx5 = 0x00200000,
            IOHOLDx6 = 0x00400000,
            IOHOLDx7 = 0x00800000,
            IOWAITx0 = 0x00000100,
            IOWAITx1 = 0x00000200,
            IOWAITx2 = 0x00000400,
            IOWAITx3 = 0x00000800,
            IOWAITx4 = 0x00001000,
            IOWAITx5 = 0x00002000,
            IOWAITx6 = 0x00004000,
            IOWAITx7 = 0x00008000,
            IOSETx0  = 0x00000001,
            IOSETx1  = 0x00000002,
            IOSETx2  = 0x00000004,
            IOSETx3  = 0x00000008,
            IOSETx4  = 0x00000010,
            IOSETx5  = 0x00000020,
            IOSETx6  = 0x00000040,
            IOSETx7  = 0x00000080,
        };
    };

    struct FSMC_BWTR1 {
        static constexpr uint32_t address = 0xa0000104;
        enum bits : uint32_t {
            ACCMOD0 = 0x10000000,
            ACCMOD1 = 0x20000000,
            DATLAT0 = 0x01000000,
            DATLAT1 = 0x02000000,
            DATLAT2 = 0x04000000,
            DATLAT3 = 0x08000000,
            CLKDIV0 = 0x00100000,
            CLKDIV1 = 0x00200000,
            CLKDIV2 = 0x00400000,
            CLKDIV3 = 0x00800000,
            DATAST0 = 0x00000100,
            DATAST1 = 0x00000200,
            DATAST2 = 0x00000400,
            DATAST3 = 0x00000800,
            DATAST4 = 0x00001000,
            DATAST5 = 0x00002000,
            DATAST6 = 0x00004000,
            DATAST7 = 0x00008000,
            ADDHLD0 = 0x00000010,
            ADDHLD1 = 0x00000020,
            ADDHLD2 = 0x00000040,
            ADDHLD3 = 0x00000080,
            ADDSET0 = 0x00000001,
            ADDSET1 = 0x00000002,
            ADDSET2 = 0x00000004,
            ADDSET3 = 0x00000008,
        };
    };

    struct FSMC_BWTR2 {
        static constexpr uint32_t address = 0xa000010c;
        enum bits : uint32_t {
            ACCMOD0 = 0x10000000,
            ACCMOD1 = 0x20000000,
            DATLAT0 = 0x01000000,
            DATLAT1 = 0x02000000,
            DATLAT2 = 0x04000000,
            DATLAT3 = 0x08000000,
            CLKDIV0 = 0x00100000,
            CLKDIV1 = 0x00200000,
            CLKDIV2 = 0x00400000,
            CLKDIV3 = 0x00800000,
            DATAST0 = 0x00000100,
            DATAST1 = 0x00000200,
            DATAST2 = 0x00000400,
            DATAST3 = 0x00000800,
            DATAST4 = 0x00001000,
            DATAST5 = 0x00002000,
            DATAST6 = 0x00004000,
            DATAST7 = 0x00008000,
            ADDHLD0 = 0x00000010,
            ADDHLD1 = 0x00000020,
            ADDHLD2 = 0x00000040,
            ADDHLD3 = 0x00000080,
            ADDSET0 = 0x00000001,
            ADDSET1 = 0x00000002,
            ADDSET2 = 0x00000004,
            ADDSET3 = 0x00000008,
        };
    };

    struct FSMC_BWTR3 {
        static constexpr uint32_t address = 0xa0000114;
        enum bits : uint32_t {
            ACCMOD0 = 0x10000000,
            ACCMOD1 = 0x20000000,
            DATLAT0 = 0x01000000,
            DATLAT1 = 0x02000000,
            DATLAT2 = 0x04000000,
            DATLAT3 = 0x08000000,
            CLKDIV0 = 0x00100000,
            CLKDIV1 = 0x00200000,
            CLKDIV2 = 0x00400000,
            CLKDIV3 = 0x00800000,
            DATAST0 = 0x00000100,
            DATAST1 = 0x00000200,
            DATAST2 = 0x00000400,
            DATAST3 = 0x00000800,
            DATAST4 = 0x00001000,
            DATAST5 = 0x00002000,
            DATAST6 = 0x00004000,
            DATAST7 = 0x00008000,
            ADDHLD0 = 0x00000010,
            ADDHLD1 = 0x00000020,
            ADDHLD2 = 0x00000040,
            ADDHLD3 = 0x00000080,
            ADDSET0 = 0x00000001,
            ADDSET1 = 0x00000002,
            ADDSET2 = 0x00000004,
            ADDSET3 = 0x00000008,
        };
    };

    struct FSMC_BWTR4 {
        static constexpr uint32_t address = 0xa000011c;
        enum bits : uint32_t {
            ACCMOD0 = 0x10000000,
            ACCMOD1 = 0x20000000,
            DATLAT0 = 0x01000000,
            DATLAT1 = 0x02000000,
            DATLAT2 = 0x04000000,
            DATLAT3 = 0x08000000,
            CLKDIV0 = 0x00100000,
            CLKDIV1 = 0x00200000,
            CLKDIV2 = 0x00400000,
            CLKDIV3 = 0x00800000,
            DATAST0 = 0x00000100,
            DATAST1 = 0x00000200,
            DATAST2 = 0x00000400,
            DATAST3 = 0x00000800,
            DATAST4 = 0x00001000,
            DATAST5 = 0x00002000,
            DATAST6 = 0x00004000,
            DATAST7 = 0x00008000,
            ADDHLD0 = 0x00000010,
            ADDHLD1 = 0x00000020,
            ADDHLD2 = 0x00000040,
            ADDHLD3 = 0x00000080,
            ADDSET0 = 0x00000001,
            ADDSET1 = 0x00000002,
            ADDSET2 = 0x00000004,
            ADDSET3 = 0x00000008,
        };
    };

    struct PWR_CR {
        static constexpr uint32_t address = 0x40007000;
        enum bits : uint32_t {
            LPDS = 0x00000001,
            PDDS = 0x00000002,
            CWUF = 0x00000004,
            CSBF = 0x00000008,
            PVDE = 0x00000010,
            PLS0 = 0x00000020,
            PLS1 = 0x00000040,
            PLS2 = 0x00000080,
            DBP  = 0x00000100,
        };
    };

    struct PWR_CSR {
        static constexpr uint32_t address = 0x40007004;
        enum bits : uint32_t {
            WUF  = 0x00000001,
            SBF  = 0x00000002,
            PVDO = 0x00000004,
            EWUP = 0x00000100,
        };
    };

    struct RCC_CR {
        static constexpr uint32_t address = 0x40021000;
        enum bits : uint32_t {
            HSION    = 0x00000001,
            HSIRDY   = 0x00000002,
            HSITRIM0 = 0x00000008,
            HSITRIM1 = 0x00000010,
            HSITRIM2 = 0x00000020,
            HSITRIM3 = 0x00000040,
            HSITRIM4 = 0x00000080,
            HSICAL0  = 0x00000100,
            HSICAL1  = 0x00000200,
            HSICAL2  = 0x00000400,
            HSICAL3  = 0x00000800,
            HSICAL4  = 0x00001000,
            HSICAL5  = 0x00002000,
            HSICAL6  = 0x00004000,
            HSICAL7  = 0x00008000,
            HSEON    = 0x00010000,
            HSERDY   = 0x00020000,
            HSEBYP   = 0x00040000,
            CSSON    = 0x00080000,
            PLLON    = 0x01000000,
            PLLRDY   = 0x02000000,
        };
    };

    struct RCC_CFGR {
        static constexpr uint32_t address = 0x40021004;
        enum bits : uint32_t {
            SW0      = 0x00000001,
            SW1      = 0x00000002,
            SWS0     = 0x00000004,
            SWS1     = 0x00000008,
            HPRE0    = 0x00000010,
            HPRE1    = 0x00000020,
            HPRE2    = 0x00000040,
            HPRE3    = 0x00000080,
            PPRE10   = 0x00000100,
            PPRE11   = 0x00000200,
            PPRE12   = 0x00000400,
            PPRE20   = 0x00000800,
            PPRE21   = 0x00001000,
            PPRE22   = 0x00002000,
            ADCPRE0  = 0x00004000,
            ADCPRE1  = 0x00008000,
            PLLSRC   = 0x00010000,
            PLLXTPRE = 0x00020000,
            PLLMUL0  = 0x00040000,
            PLLMUL1  = 0x00080000,
            PLLMUL2  = 0x00100000,
            PLLMUL3  = 0x00200000,
            OTGFSPRE = 0x00400000,
            MCO0     = 0x01000000,
            MCO1     = 0x02000000,
            MCO2     = 0x04000000,
        };
    };

    struct RCC_CIR {
        static constexpr uint32_t address = 0x40021008;
        enum bits : uint32_t {
            LSIRDYF  = 0x00000001,
            LSERDYF  = 0x00000002,
            HSIRDYF  = 0x00000004,
            HSERDYF  = 0x00000008,
            PLLRDYF  = 0x00000010,
            CSSF     = 0x00000080,
            LSIRDYIE = 0x00000100,
            LSERDYIE = 0x00000200,
            HSIRDYIE = 0x00000400,
            HSERDYIE = 0x00000800,
            PLLRDYIE = 0x00001000,
            LSIRDYC  = 0x00010000,
            LSERDYC  = 0x00020000,
            HSIRDYC  = 0x00040000,
            HSERDYC  = 0x00080000,
            PLLRDYC  = 0x00100000,
            CSSC     = 0x00800000,
        };
    };

    struct RCC_APB2RSTR {
        static constexpr uint32_t address = 0x4002100c;
        enum bits : uint32_t {
            AFIORST   = 0x00000001,
            IOPARST   = 0x00000004,
            IOPBRST   = 0x00000008,
            IOPCRST   = 0x00000010,
            IOPDRST   = 0x00000020,
            IOPERST   = 0x00000040,
            IOPFRST   = 0x00000080,
            IOPGRST   = 0x00000100,
            ADC1RST   = 0x00000200,
            ADC2RST   = 0x00000400,
            TIM1RST   = 0x00000800,
            SPI1RST   = 0x00001000,
            TIM8RST   = 0x00002000,
            USART1RST = 0x00004000,
            ADC3RST   = 0x00008000,
            TIM9RST   = 0x00080000,
            TIM10RST  = 0x00100000,
            TIM11RST  = 0x00200000,
        };
    };

    struct RCC_APB1RSTR {
        static constexpr uint32_t address = 0x40021010;
        enum bits : uint32_t {
            TIM2RST   = 0x00000001,
            TIM3RST   = 0x00000002,
            TIM4RST   = 0x00000004,
            TIM5RST   = 0x00000008,
            TIM6RST   = 0x00000010,
            TIM7RST   = 0x00000020,
            TIM12RST  = 0x00000040,
            TIM13RST  = 0x00000080,
            TIM14RST  = 0x00000100,
            WWDGRST   = 0x00000800,
            SPI2RST   = 0x00004000,
            SPI3RST   = 0x00008000,
            USART2RST = 0x00020000,
            USART3RST = 0x00040000,
            UART4RST  = 0x00080000,
            UART5RST  = 0x00100000,
            I2C1RST   = 0x00200000,
            I2C2RST   = 0x00400000,
            USBRST    = 0x00800000,
            CANRST    = 0x02000000,
            BKPRST    = 0x08000000,
            PWRRST    = 0x10000000,
            DACRST    = 0x20000000,
        };
    };

    struct RCC_AHBENR {
        static constexpr uint32_t address = 0x40021014;
        enum bits : uint32_t {
            DMA1EN  = 0x00000001,
            DMA2EN  = 0x00000002,
            SRAMEN  = 0x00000004,
            FLITFEN = 0x00000010,
            CRCEN   = 0x00000040,
            FSMCEN  = 0x00000100,
            SDIOEN  = 0x00000400,
        };
    };

    struct RCC_APB2ENR {
        static constexpr uint32_t address = 0x40021018;
        enum bits : uint32_t {
            AFIOEN   = 0x00000001,
            IOPAEN   = 0x00000004,
            IOPBEN   = 0x00000008,
            IOPCEN   = 0x00000010,
            IOPDEN   = 0x00000020,
            IOPEEN   = 0x00000040,
            IOPFEN   = 0x00000080,
            IOPGEN   = 0x00000100,
            ADC1EN   = 0x00000200,
            ADC2EN   = 0x00000400,
            TIM1EN   = 0x00000800,
            SPI1EN   = 0x00001000,
            TIM8EN   = 0x00002000,
            USART1EN = 0x00004000,
            ADC3EN   = 0x00008000,
            TIM9EN   = 0x00080000,
            TIM10EN  = 0x00100000,
            TIM11EN  = 0x00200000,
        };
    };

    struct RCC_APB1ENR {
        static constexpr uint32_t address = 0x4002101c;
        enum bits : uint32_t {
            TIM2EN   = 0x00000001,
            TIM3EN   = 0x00000002,
            TIM4EN   = 0x00000004,
            TIM5EN   = 0x00000008,
            TIM6EN   = 0x00000010,
            TIM7EN   = 0x00000020,
            TIM12EN  = 0x00000040,
            TIM13EN  = 0x00000080,
            TIM14EN  = 0x00000100,
            WWDGEN   = 0x00000800,
            SPI2EN   = 0x00004000,
            SPI3EN   = 0x00008000,
            USART2EN = 0x00020000,
            USART3EN = 0x00040000,
            UART4EN  = 0x00080000,
            UART5EN  = 0x00100000,
            I2C1EN   = 0x00200000,
            I2C2EN   = 0x00400000,
            USBEN    = 0x00800000,
            CANEN    = 0x02000000,
            BKPEN    = 0x08000000,
            PWREN    = 0x10000000,
            DACEN    = 0x20000000,
        };
    };

    struct RCC_BDCR {
        static constexpr uint32_t address = 0x40021020;
        enum bits : uint32_t {
            LSEON   = 0x00000001,
            LSERDY  = 0x00000002,
            LSEBYP  = 0x00000004,
            RTCSEL0 = 0x00000100,
            RTCSEL1 = 0x00000200,
            RTCEN   = 0x00008000,
            BDRST   = 0x00010000,
        };
    };

    struct RCC_CSR {
        static constexpr uint32_t address = 0x40021024;
        enum bits : uint32_t {
            LSION    = 0x00000001,
            LSIRDY   = 0x00000002,
            RMVF     = 0x01000000,
            PINRSTF  = 0x04000000,
            PORRSTF  = 0x08000000,
            SFTRSTF  = 0x10000000,
            IWDGRSTF = 0x20000000,
            WWDGRSTF = 0x40000000,
            LPWRRSTF = 0x80000000,
        };
    };

    struct GPIOA_CRL {
        static constexpr uint32_t address = 0x40010800;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOA_CRH {
        static constexpr uint32_t address = 0x40010804;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOA_IDR {
        static constexpr uint32_t address = 0x40010808;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOA_ODR {
        static constexpr uint32_t address = 0x4001080c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOA_BSRR {
        static constexpr uint32_t address = 0x40010810;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOA_BRR {
        static constexpr uint32_t address = 0x40010814;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOA_LCKR {
        static constexpr uint32_t address = 0x40010818;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOB_CRL {
        static constexpr uint32_t address = 0x40010c00;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOB_CRH {
        static constexpr uint32_t address = 0x40010c04;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOB_IDR {
        static constexpr uint32_t address = 0x40010c08;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOB_ODR {
        static constexpr uint32_t address = 0x40010c0c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOB_BSRR {
        static constexpr uint32_t address = 0x40010c10;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOB_BRR {
        static constexpr uint32_t address = 0x40010c14;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOB_LCKR {
        static constexpr uint32_t address = 0x40010c18;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOC_CRL {
        static constexpr uint32_t address = 0x40011000;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOC_CRH {
        static constexpr uint32_t address = 0x40011004;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOC_IDR {
        static constexpr uint32_t address = 0x40011008;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOC_ODR {
        static constexpr uint32_t address = 0x4001100c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOC_BSRR {
        static constexpr uint32_t address = 0x40011010;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOC_BRR {
        static constexpr uint32_t address = 0x40011014;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOC_LCKR {
        static constexpr uint32_t address = 0x40011018;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOD_CRL {
        static constexpr uint32_t address = 0x40011400;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOD_CRH {
        static constexpr uint32_t address = 0x40011404;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOD_IDR {
        static constexpr uint32_t address = 0x40011408;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOD_ODR {
        static constexpr uint32_t address = 0x4001140c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOD_BSRR {
        static constexpr uint32_t address = 0x40011410;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOD_BRR {
        static constexpr uint32_t address = 0x40011414;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOD_LCKR {
        static constexpr uint32_t address = 0x40011418;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOE_CRL {
        static constexpr uint32_t address = 0x40011800;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOE_CRH {
        static constexpr uint32_t address = 0x40011804;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOE_IDR {
        static constexpr uint32_t address = 0x40011808;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOE_ODR {
        static constexpr uint32_t address = 0x4001180c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOE_BSRR {
        static constexpr uint32_t address = 0x40011810;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOE_BRR {
        static constexpr uint32_t address = 0x40011814;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOE_LCKR {
        static constexpr uint32_t address = 0x40011818;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOF_CRL {
        static constexpr uint32_t address = 0x40011c00;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOF_CRH {
        static constexpr uint32_t address = 0x40011c04;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOF_IDR {
        static constexpr uint32_t address = 0x40011c08;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOF_ODR {
        static constexpr uint32_t address = 0x40011c0c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOF_BSRR {
        static constexpr uint32_t address = 0x40011c10;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOF_BRR {
        static constexpr uint32_t address = 0x40011c14;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOF_LCKR {
        static constexpr uint32_t address = 0x40011c18;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct GPIOG_CRL {
        static constexpr uint32_t address = 0x40012000;
        enum bits : uint32_t {
            MODE00 = 0x00000001,
            MODE01 = 0x00000002,
            CNF00  = 0x00000004,
            CNF01  = 0x00000008,
            MODE10 = 0x00000010,
            MODE11 = 0x00000020,
            CNF10  = 0x00000040,
            CNF11  = 0x00000080,
            MODE20 = 0x00000100,
            MODE21 = 0x00000200,
            CNF20  = 0x00000400,
            CNF21  = 0x00000800,
            MODE30 = 0x00001000,
            MODE31 = 0x00002000,
            CNF30  = 0x00004000,
            CNF31  = 0x00008000,
            MODE40 = 0x00010000,
            MODE41 = 0x00020000,
            CNF40  = 0x00040000,
            CNF41  = 0x00080000,
            MODE50 = 0x00100000,
            MODE51 = 0x00200000,
            CNF50  = 0x00400000,
            CNF51  = 0x00800000,
            MODE60 = 0x01000000,
            MODE61 = 0x02000000,
            CNF60  = 0x04000000,
            CNF61  = 0x08000000,
            MODE70 = 0x10000000,
            MODE71 = 0x20000000,
            CNF70  = 0x40000000,
            CNF71  = 0x80000000,
        };
    };

    struct GPIOG_CRH {
        static constexpr uint32_t address = 0x40012004;
        enum bits : uint32_t {
            MODE80  = 0x00000001,
            MODE81  = 0x00000002,
            CNF80   = 0x00000004,
            CNF81   = 0x00000008,
            MODE90  = 0x00000010,
            MODE91  = 0x00000020,
            CNF90   = 0x00000040,
            CNF91   = 0x00000080,
            MODE100 = 0x00000100,
            MODE101 = 0x00000200,
            CNF100  = 0x00000400,
            CNF101  = 0x00000800,
            MODE110 = 0x00001000,
            MODE111 = 0x00002000,
            CNF110  = 0x00004000,
            CNF111  = 0x00008000,
            MODE120 = 0x00010000,
            MODE121 = 0x00020000,
            CNF120  = 0x00040000,
            CNF121  = 0x00080000,
            MODE130 = 0x00100000,
            MODE131 = 0x00200000,
            CNF130  = 0x00400000,
            CNF131  = 0x00800000,
            MODE140 = 0x01000000,
            MODE141 = 0x02000000,
            CNF140  = 0x04000000,
            CNF141  = 0x08000000,
            MODE150 = 0x10000000,
            MODE151 = 0x20000000,
            CNF150  = 0x40000000,
            CNF151  = 0x80000000,
        };
    };

    struct GPIOG_IDR {
        static constexpr uint32_t address = 0x40012008;
        enum bits : uint32_t {
            IDR0  = 0x00000001,
            IDR1  = 0x00000002,
            IDR2  = 0x00000004,
            IDR3  = 0x00000008,
            IDR4  = 0x00000010,
            IDR5  = 0x00000020,
            IDR6  = 0x00000040,
            IDR7  = 0x00000080,
            IDR8  = 0x00000100,
            IDR9  = 0x00000200,
            IDR10 = 0x00000400,
            IDR11 = 0x00000800,
            IDR12 = 0x00001000,
            IDR13 = 0x00002000,
            IDR14 = 0x00004000,
            IDR15 = 0x00008000,
        };
    };

    struct GPIOG_ODR {
        static constexpr uint32_t address = 0x4001200c;
        enum bits : uint32_t {
            ODR0  = 0x00000001,
            ODR1  = 0x00000002,
            ODR2  = 0x00000004,
            ODR3  = 0x00000008,
            ODR4  = 0x00000010,
            ODR5  = 0x00000020,
            ODR6  = 0x00000040,
            ODR7  = 0x00000080,
            ODR8  = 0x00000100,
            ODR9  = 0x00000200,
            ODR10 = 0x00000400,
            ODR11 = 0x00000800,
            ODR12 = 0x00001000,
            ODR13 = 0x00002000,
            ODR14 = 0x00004000,
            ODR15 = 0x00008000,
        };
    };

    struct GPIOG_BSRR {
        static constexpr uint32_t address = 0x40012010;
        enum bits : uint32_t {
            BS0  = 0x00000001,
            BS1  = 0x00000002,
            BS2  = 0x00000004,
            BS3  = 0x00000008,
            BS4  = 0x00000010,
            BS5  = 0x00000020,
            BS6  = 0x00000040,
            BS7  = 0x00000080,
            BS8  = 0x00000100,
            BS9  = 0x00000200,
            BS10 = 0x00000400,
            BS11 = 0x00000800,
            BS12 = 0x00001000,
            BS13 = 0x00002000,
            BS14 = 0x00004000,
            BS15 = 0x00008000,
            BR0  = 0x00010000,
            BR1  = 0x00020000,
            BR2  = 0x00040000,
            BR3  = 0x00080000,
            BR4  = 0x00100000,
            BR5  = 0x00200000,
            BR6  = 0x00400000,
            BR7  = 0x00800000,
            BR8  = 0x01000000,
            BR9  = 0x02000000,
            BR10 = 0x04000000,
            BR11 = 0x08000000,
            BR12 = 0x10000000,
            BR13 = 0x20000000,
            BR14 = 0x40000000,
            BR15 = 0x80000000,
        };
    };

    struct GPIOG_BRR {
        static constexpr uint32_t address = 0x40012014;
        enum bits : uint32_t {
            BR0  = 0x00000001,
            BR1  = 0x00000002,
            BR2  = 0x00000004,
            BR3  = 0x00000008,
            BR4  = 0x00000010,
            BR5  = 0x00000020,
            BR6  = 0x00000040,
            BR7  = 0x00000080,
            BR8  = 0x00000100,
            BR9  = 0x00000200,
            BR10 = 0x00000400,
            BR11 = 0x00000800,
            BR12 = 0x00001000,
            BR13 = 0x00002000,
            BR14 = 0x00004000,
            BR15 = 0x00008000,
        };
    };

    struct GPIOG_LCKR {
        static constexpr uint32_t address = 0x40012018;
        enum bits : uint32_t {
            LCK0  = 0x00000001,
            LCK1  = 0x00000002,
            LCK2  = 0x00000004,
            LCK3  = 0x00000008,
            LCK4  = 0x00000010,
            LCK5  = 0x00000020,
            LCK6  = 0x00000040,
            LCK7  = 0x00000080,
            LCK8  = 0x00000100,
            LCK9  = 0x00000200,
            LCK10 = 0x00000400,
            LCK11 = 0x00000800,
            LCK12 = 0x00001000,
            LCK13 = 0x00002000,
            LCK14 = 0x00004000,
            LCK15 = 0x00008000,
            LCKK  = 0x00010000,
        };
    };

    struct AFIO_EVCR {
        static constexpr uint32_t address = 0x40010000;
        enum bits : uint32_t {
            PIN0  = 0x00000001,
            PIN1  = 0x00000002,
            PIN2  = 0x00000004,
            PIN3  = 0x00000008,
            PORT0 = 0x00000010,
            PORT1 = 0x00000020,
            PORT2 = 0x00000040,
            EVOE  = 0x00000080,
        };
    };

    struct AFIO_MAPR {
        static constexpr uint32_t address = 0x40010004;
        enum bits : uint32_t {
            SPI1_REMAP         = 0x00000001,
            I2C1_REMAP         = 0x00000002,
            USART1_REMAP       = 0x00000004,
            USART2_REMAP       = 0x00000008,
            USART3_REMAP0      = 0x00000010,
            USART3_REMAP1      = 0x00000020,
            TIM1_REMAP0        = 0x00000040,
            TIM1_REMAP1        = 0x00000080,
            TIM2_REMAP0        = 0x00000100,
            TIM2_REMAP1        = 0x00000200,
            TIM3_REMAP0        = 0x00000400,
            TIM3_REMAP1        = 0x00000800,
            TIM4_REMAP         = 0x00001000,
            CAN_REMAP0         = 0x00002000,
            CAN_REMAP1         = 0x00004000,
            PD01_REMAP         = 0x00008000,
            TIM5CH4_IREMAP     = 0x00010000,
            ADC1_ETRGINJ_REMAP = 0x00020000,
            ADC1_ETRGREG_REMAP = 0x00040000,
            ADC2_ETRGINJ_REMAP = 0x00080000,
            ADC2_ETRGREG_REMAP = 0x00100000,
            SWJ_CFG0           = 0x01000000,
            SWJ_CFG1           = 0x02000000,
            SWJ_CFG2           = 0x04000000,
        };
    };

    struct AFIO_EXTICR1 {
        static constexpr uint32_t address = 0x40010008;
        enum bits : uint32_t {
            EXTI00 = 0x00000001,
            EXTI01 = 0x00000002,
            EXTI02 = 0x00000004,
            EXTI03 = 0x00000008,
            EXTI10 = 0x00000010,
            EXTI11 = 0x00000020,
            EXTI12 = 0x00000040,
            EXTI13 = 0x00000080,
            EXTI20 = 0x00000100,
            EXTI21 = 0x00000200,
            EXTI22 = 0x00000400,
            EXTI23 = 0x00000800,
            EXTI30 = 0x00001000,
            EXTI31 = 0x00002000,
            EXTI32 = 0x00004000,
            EXTI33 = 0x00008000,
        };
    };

    struct AFIO_EXTICR2 {
        static constexpr uint32_t address = 0x4001000c;
        enum bits : uint32_t {
            EXTI40 = 0x00000001,
            EXTI41 = 0x00000002,
            EXTI42 = 0x00000004,
            EXTI43 = 0x00000008,
            EXTI50 = 0x00000010,
            EXTI51 = 0x00000020,
            EXTI52 = 0x00000040,
            EXTI53 = 0x00000080,
            EXTI60 = 0x00000100,
            EXTI61 = 0x00000200,
            EXTI62 = 0x00000400,
            EXTI63 = 0x00000800,
            EXTI70 = 0x00001000,
            EXTI71 = 0x00002000,
            EXTI72 = 0x00004000,
            EXTI73 = 0x00008000,
        };
    };

    struct AFIO_EXTICR3 {
        static constexpr uint32_t address = 0x40010010;
        enum bits : uint32_t {
            EXTI80  = 0x00000001,
            EXTI81  = 0x00000002,
            EXTI82  = 0x00000004,
            EXTI83  = 0x00000008,
            EXTI90  = 0x00000010,
            EXTI91  = 0x00000020,
            EXTI92  = 0x00000040,
            EXTI93  = 0x00000080,
            EXTI100 = 0x00000100,
            EXTI101 = 0x00000200,
            EXTI102 = 0x00000400,
            EXTI103 = 0x00000800,
            EXTI110 = 0x00001000,
            EXTI111 = 0x00002000,
            EXTI112 = 0x00004000,
            EXTI113 = 0x00008000,
        };
    };

    struct AFIO_EXTICR4 {
        static constexpr uint32_t address = 0x40010014;
        enum bits : uint32_t {
            EXTI120 = 0x00000001,
            EXTI121 = 0x00000002,
            EXTI122 = 0x00000004,
            EXTI123 = 0x00000008,
            EXTI130 = 0x00000010,
            EXTI131 = 0x00000020,
            EXTI132 = 0x00000040,
            EXTI133 = 0x00000080,
            EXTI140 = 0x00000100,
            EXTI141 = 0x00000200,
            EXTI142 = 0x00000400,
            EXTI143 = 0x00000800,
            EXTI150 = 0x00001000,
            EXTI151 = 0x00002000,
            EXTI152 = 0x00004000,
            EXTI153 = 0x00008000,
        };
    };

    struct AFIO_MAPR2 {
        static constexpr uint32_t address = 0x4001001c;
        enum bits : uint32_t {
            TIM9_REMAP  = 0x00000020,
            TIM10_REMAP = 0x00000040,
            TIM11_REMAP = 0x00000080,
            TIM13_REMAP = 0x00000100,
            TIM14_REMAP = 0x00000200,
            FSMC_NADV   = 0x00000400,
        };
    };

    struct EXTI_IMR {
        static constexpr uint32_t address = 0x40010400;
        enum bits : uint32_t {
            MR0  = 0x00000001,
            MR1  = 0x00000002,
            MR2  = 0x00000004,
            MR3  = 0x00000008,
            MR4  = 0x00000010,
            MR5  = 0x00000020,
            MR6  = 0x00000040,
            MR7  = 0x00000080,
            MR8  = 0x00000100,
            MR9  = 0x00000200,
            MR10 = 0x00000400,
            MR11 = 0x00000800,
            MR12 = 0x00001000,
            MR13 = 0x00002000,
            MR14 = 0x00004000,
            MR15 = 0x00008000,
            MR16 = 0x00010000,
            MR17 = 0x00020000,
            MR18 = 0x00040000,
        };
    };

    struct EXTI_EMR {
        static constexpr uint32_t address = 0x40010404;
        enum bits : uint32_t {
            MR0  = 0x00000001,
            MR1  = 0x00000002,
            MR2  = 0x00000004,
            MR3  = 0x00000008,
            MR4  = 0x00000010,
            MR5  = 0x00000020,
            MR6  = 0x00000040,
            MR7  = 0x00000080,
            MR8  = 0x00000100,
            MR9  = 0x00000200,
            MR10 = 0x00000400,
            MR11 = 0x00000800,
            MR12 = 0x00001000,
            MR13 = 0x00002000,
            MR14 = 0x00004000,
            MR15 = 0x00008000,
            MR16 = 0x00010000,
            MR17 = 0x00020000,
            MR18 = 0x00040000,
        };
    };

    struct EXTI_RTSR {
        static constexpr uint32_t address = 0x40010408;
        enum bits : uint32_t {
            TR0  = 0x00000001,
            TR1  = 0x00000002,
            TR2  = 0x00000004,
            TR3  = 0x00000008,
            TR4  = 0x00000010,
            TR5  = 0x00000020,
            TR6  = 0x00000040,
            TR7  = 0x00000080,
            TR8  = 0x00000100,
            TR9  = 0x00000200,
            TR10 = 0x00000400,
            TR11 = 0x00000800,
            TR12 = 0x00001000,
            TR13 = 0x00002000,
            TR14 = 0x00004000,
            TR15 = 0x00008000,
            TR16 = 0x00010000,
            TR17 = 0x00020000,
            TR18 = 0x00040000,
        };
    };

    struct EXTI_FTSR {
        static constexpr uint32_t address = 0x4001040c;
        enum bits : uint32_t {
            TR0  = 0x00000001,
            TR1  = 0x00000002,
            TR2  = 0x00000004,
            TR3  = 0x00000008,
            TR4  = 0x00000010,
            TR5  = 0x00000020,
            TR6  = 0x00000040,
            TR7  = 0x00000080,
            TR8  = 0x00000100,
            TR9  = 0x00000200,
            TR10 = 0x00000400,
            TR11 = 0x00000800,
            TR12 = 0x00001000,
            TR13 = 0x00002000,
            TR14 = 0x00004000,
            TR15 = 0x00008000,
            TR16 = 0x00010000,
            TR17 = 0x00020000,
            TR18 = 0x00040000,
        };
    };

    struct EXTI_SWIER {
        static constexpr uint32_t address = 0x40010410;
        enum bits : uint32_t {
            SWIER0  = 0x00000001,
            SWIER1  = 0x00000002,
            SWIER2  = 0x00000004,
            SWIER3  = 0x00000008,
            SWIER4  = 0x00000010,
            SWIER5  = 0x00000020,
            SWIER6  = 0x00000040,
            SWIER7  = 0x00000080,
            SWIER8  = 0x00000100,
            SWIER9  = 0x00000200,
            SWIER10 = 0x00000400,
            SWIER11 = 0x00000800,
            SWIER12 = 0x00001000,
            SWIER13 = 0x00002000,
            SWIER14 = 0x00004000,
            SWIER15 = 0x00008000,
            SWIER16 = 0x00010000,
            SWIER17 = 0x00020000,
            SWIER18 = 0x00040000,
        };
    };

    struct EXTI_PR {
        static constexpr uint32_t address = 0x40010414;
        enum bits : uint32_t {
            PR0  = 0x00000001,
            PR1  = 0x00000002,
            PR2  = 0x00000004,
            PR3  = 0x00000008,
            PR4  = 0x00000010,
            PR5  = 0x00000020,
            PR6  = 0x00000040,
            PR7  = 0x00000080,
            PR8  = 0x00000100,
            PR9  = 0x00000200,
            PR10 = 0x00000400,
            PR11 = 0x00000800,
            PR12 = 0x00001000,
            PR13 = 0x00002000,
            PR14 = 0x00004000,
            PR15 = 0x00008000,
            PR16 = 0x00010000,
            PR17 = 0x00020000,
            PR18 = 0x00040000,
        };
    };

    struct DMA1_ISR {
        static constexpr uint32_t address = 0x40020000;
        enum bits : uint32_t {
            GIF1  = 0x00000001,
            TCIF1 = 0x00000002,
            HTIF1 = 0x00000004,
            TEIF1 = 0x00000008,
            GIF2  = 0x00000010,
            TCIF2 = 0x00000020,
            HTIF2 = 0x00000040,
            TEIF2 = 0x00000080,
            GIF3  = 0x00000100,
            TCIF3 = 0x00000200,
            HTIF3 = 0x00000400,
            TEIF3 = 0x00000800,
            GIF4  = 0x00001000,
            TCIF4 = 0x00002000,
            HTIF4 = 0x00004000,
            TEIF4 = 0x00008000,
            GIF5  = 0x00010000,
            TCIF5 = 0x00020000,
            HTIF5 = 0x00040000,
            TEIF5 = 0x00080000,
            GIF6  = 0x00100000,
            TCIF6 = 0x00200000,
            HTIF6 = 0x00400000,
            TEIF6 = 0x00800000,
            GIF7  = 0x01000000,
            TCIF7 = 0x02000000,
            HTIF7 = 0x04000000,
            TEIF7 = 0x08000000,
        };
    };

    struct DMA1_IFCR {
        static constexpr uint32_t address = 0x40020004;
        enum bits : uint32_t {
            CGIF1  = 0x00000001,
            CGIF2  = 0x00000010,
            CGIF3  = 0x00000100,
            CGIF4  = 0x00001000,
            CGIF5  = 0x00010000,
            CGIF6  = 0x00100000,
            CGIF7  = 0x01000000,
            CTCIF1 = 0x00000002,
            CTCIF2 = 0x00000020,
            CTCIF3 = 0x00000200,
            CTCIF4 = 0x00002000,
            CTCIF5 = 0x00020000,
            CTCIF6 = 0x00200000,
            CTCIF7 = 0x02000000,
            CHTIF1 = 0x00000004,
            CHTIF2 = 0x00000040,
            CHTIF3 = 0x00000400,
            CHTIF4 = 0x00004000,
            CHTIF5 = 0x00040000,
            CHTIF6 = 0x00400000,
            CHTIF7 = 0x04000000,
            CTEIF1 = 0x00000008,
            CTEIF2 = 0x00000080,
            CTEIF3 = 0x00000800,
            CTEIF4 = 0x00008000,
            CTEIF5 = 0x00080000,
            CTEIF6 = 0x00800000,
            CTEIF7 = 0x08000000,
        };
    };

    struct DMA1_CCR1 {
        static constexpr uint32_t address = 0x40020008;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR1 {
        static constexpr uint32_t address = 0x4002000c;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR1 {
        static constexpr uint32_t address = 0x40020010;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR1 {
        static constexpr uint32_t address = 0x40020014;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR2 {
        static constexpr uint32_t address = 0x4002001c;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR2 {
        static constexpr uint32_t address = 0x40020020;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR2 {
        static constexpr uint32_t address = 0x40020024;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR2 {
        static constexpr uint32_t address = 0x40020028;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR3 {
        static constexpr uint32_t address = 0x40020030;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR3 {
        static constexpr uint32_t address = 0x40020034;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR3 {
        static constexpr uint32_t address = 0x40020038;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR3 {
        static constexpr uint32_t address = 0x4002003c;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR4 {
        static constexpr uint32_t address = 0x40020044;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR4 {
        static constexpr uint32_t address = 0x40020048;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR4 {
        static constexpr uint32_t address = 0x4002004c;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR4 {
        static constexpr uint32_t address = 0x40020050;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR5 {
        static constexpr uint32_t address = 0x40020058;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR5 {
        static constexpr uint32_t address = 0x4002005c;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR5 {
        static constexpr uint32_t address = 0x40020060;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR5 {
        static constexpr uint32_t address = 0x40020064;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR6 {
        static constexpr uint32_t address = 0x4002006c;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR6 {
        static constexpr uint32_t address = 0x40020070;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR6 {
        static constexpr uint32_t address = 0x40020074;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR6 {
        static constexpr uint32_t address = 0x40020078;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA1_CCR7 {
        static constexpr uint32_t address = 0x40020080;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA1_CNDTR7 {
        static constexpr uint32_t address = 0x40020084;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA1_CPAR7 {
        static constexpr uint32_t address = 0x40020088;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA1_CMAR7 {
        static constexpr uint32_t address = 0x4002008c;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_ISR {
        static constexpr uint32_t address = 0x40020400;
        enum bits : uint32_t {
            GIF1  = 0x00000001,
            TCIF1 = 0x00000002,
            HTIF1 = 0x00000004,
            TEIF1 = 0x00000008,
            GIF2  = 0x00000010,
            TCIF2 = 0x00000020,
            HTIF2 = 0x00000040,
            TEIF2 = 0x00000080,
            GIF3  = 0x00000100,
            TCIF3 = 0x00000200,
            HTIF3 = 0x00000400,
            TEIF3 = 0x00000800,
            GIF4  = 0x00001000,
            TCIF4 = 0x00002000,
            HTIF4 = 0x00004000,
            TEIF4 = 0x00008000,
            GIF5  = 0x00010000,
            TCIF5 = 0x00020000,
            HTIF5 = 0x00040000,
            TEIF5 = 0x00080000,
            GIF6  = 0x00100000,
            TCIF6 = 0x00200000,
            HTIF6 = 0x00400000,
            TEIF6 = 0x00800000,
            GIF7  = 0x01000000,
            TCIF7 = 0x02000000,
            HTIF7 = 0x04000000,
            TEIF7 = 0x08000000,
        };
    };

    struct DMA2_IFCR {
        static constexpr uint32_t address = 0x40020404;
        enum bits : uint32_t {
            CGIF1  = 0x00000001,
            CGIF2  = 0x00000010,
            CGIF3  = 0x00000100,
            CGIF4  = 0x00001000,
            CGIF5  = 0x00010000,
            CGIF6  = 0x00100000,
            CGIF7  = 0x01000000,
            CTCIF1 = 0x00000002,
            CTCIF2 = 0x00000020,
            CTCIF3 = 0x00000200,
            CTCIF4 = 0x00002000,
            CTCIF5 = 0x00020000,
            CTCIF6 = 0x00200000,
            CTCIF7 = 0x02000000,
            CHTIF1 = 0x00000004,
            CHTIF2 = 0x00000040,
            CHTIF3 = 0x00000400,
            CHTIF4 = 0x00004000,
            CHTIF5 = 0x00040000,
            CHTIF6 = 0x00400000,
            CHTIF7 = 0x04000000,
            CTEIF1 = 0x00000008,
            CTEIF2 = 0x00000080,
            CTEIF3 = 0x00000800,
            CTEIF4 = 0x00008000,
            CTEIF5 = 0x00080000,
            CTEIF6 = 0x00800000,
            CTEIF7 = 0x08000000,
        };
    };

    struct DMA2_CCR1 {
        static constexpr uint32_t address = 0x40020408;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR1 {
        static constexpr uint32_t address = 0x4002040c;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR1 {
        static constexpr uint32_t address = 0x40020410;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR1 {
        static constexpr uint32_t address = 0x40020414;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR2 {
        static constexpr uint32_t address = 0x4002041c;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR2 {
        static constexpr uint32_t address = 0x40020420;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR2 {
        static constexpr uint32_t address = 0x40020424;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR2 {
        static constexpr uint32_t address = 0x40020428;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR3 {
        static constexpr uint32_t address = 0x40020430;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR3 {
        static constexpr uint32_t address = 0x40020434;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR3 {
        static constexpr uint32_t address = 0x40020438;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR3 {
        static constexpr uint32_t address = 0x4002043c;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR4 {
        static constexpr uint32_t address = 0x40020444;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR4 {
        static constexpr uint32_t address = 0x40020448;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR4 {
        static constexpr uint32_t address = 0x4002044c;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR4 {
        static constexpr uint32_t address = 0x40020450;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR5 {
        static constexpr uint32_t address = 0x40020458;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR5 {
        static constexpr uint32_t address = 0x4002045c;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR5 {
        static constexpr uint32_t address = 0x40020460;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR5 {
        static constexpr uint32_t address = 0x40020464;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR6 {
        static constexpr uint32_t address = 0x4002046c;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR6 {
        static constexpr uint32_t address = 0x40020470;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR6 {
        static constexpr uint32_t address = 0x40020474;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR6 {
        static constexpr uint32_t address = 0x40020478;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct DMA2_CCR7 {
        static constexpr uint32_t address = 0x40020480;
        enum bits : uint32_t {
            EN      = 0x00000001,
            TCIE    = 0x00000002,
            HTIE    = 0x00000004,
            TEIE    = 0x00000008,
            DIR     = 0x00000010,
            CIRC    = 0x00000020,
            PINC    = 0x00000040,
            MINC    = 0x00000080,
            PSIZE0  = 0x00000100,
            PSIZE1  = 0x00000200,
            MSIZE0  = 0x00000400,
            MSIZE1  = 0x00000800,
            PL0     = 0x00001000,
            PL1     = 0x00002000,
            MEM2MEM = 0x00004000,
        };
    };

    struct DMA2_CNDTR7 {
        static constexpr uint32_t address = 0x40020484;
        enum bits : uint32_t {
            NDT0  = 0x00000001,
            NDT1  = 0x00000002,
            NDT2  = 0x00000004,
            NDT3  = 0x00000008,
            NDT4  = 0x00000010,
            NDT5  = 0x00000020,
            NDT6  = 0x00000040,
            NDT7  = 0x00000080,
            NDT8  = 0x00000100,
            NDT9  = 0x00000200,
            NDT10 = 0x00000400,
            NDT11 = 0x00000800,
            NDT12 = 0x00001000,
            NDT13 = 0x00002000,
            NDT14 = 0x00004000,
            NDT15 = 0x00008000,
        };
    };

    struct DMA2_CPAR7 {
        static constexpr uint32_t address = 0x40020488;
        enum bits : uint32_t {
            PA0  = 0x00000001,
            PA1  = 0x00000002,
            PA2  = 0x00000004,
            PA3  = 0x00000008,
            PA4  = 0x00000010,
            PA5  = 0x00000020,
            PA6  = 0x00000040,
            PA7  = 0x00000080,
            PA8  = 0x00000100,
            PA9  = 0x00000200,
            PA10 = 0x00000400,
            PA11 = 0x00000800,
            PA12 = 0x00001000,
            PA13 = 0x00002000,
            PA14 = 0x00004000,
            PA15 = 0x00008000,
            PA16 = 0x00010000,
            PA17 = 0x00020000,
            PA18 = 0x00040000,
            PA19 = 0x00080000,
            PA20 = 0x00100000,
            PA21 = 0x00200000,
            PA22 = 0x00400000,
            PA23 = 0x00800000,
            PA24 = 0x01000000,
            PA25 = 0x02000000,
            PA26 = 0x04000000,
            PA27 = 0x08000000,
            PA28 = 0x10000000,
            PA29 = 0x20000000,
            PA30 = 0x40000000,
            PA31 = 0x80000000,
        };
    };

    struct DMA2_CMAR7 {
        static constexpr uint32_t address = 0x4002048c;
        enum bits : uint32_t {
            MA0  = 0x00000001,
            MA1  = 0x00000002,
            MA2  = 0x00000004,
            MA3  = 0x00000008,
            MA4  = 0x00000010,
            MA5  = 0x00000020,
            MA6  = 0x00000040,
            MA7  = 0x00000080,
            MA8  = 0x00000100,
            MA9  = 0x00000200,
            MA10 = 0x00000400,
            MA11 = 0x00000800,
            MA12 = 0x00001000,
            MA13 = 0x00002000,
            MA14 = 0x00004000,
            MA15 = 0x00008000,
            MA16 = 0x00010000,
            MA17 = 0x00020000,
            MA18 = 0x00040000,
            MA19 = 0x00080000,
            MA20 = 0x00100000,
            MA21 = 0x00200000,
            MA22 = 0x00400000,
            MA23 = 0x00800000,
            MA24 = 0x01000000,
            MA25 = 0x02000000,
            MA26 = 0x04000000,
            MA27 = 0x08000000,
            MA28 = 0x10000000,
            MA29 = 0x20000000,
            MA30 = 0x40000000,
            MA31 = 0x80000000,
        };
    };

    struct SDIO_POWER {
        static constexpr uint32_t address = 0x40018000;
        enum bits : uint32_t {
            PWRCTRL0 = 0x00000001,
            PWRCTRL1 = 0x00000002,
        };
    };

    struct SDIO_CLKCR {
        static constexpr uint32_t address = 0x40018004;
        enum bits : uint32_t {
            CLKDIV0 = 0x00000001,
            CLKDIV1 = 0x00000002,
            CLKDIV2 = 0x00000004,
            CLKDIV3 = 0x00000008,
            CLKDIV4 = 0x00000010,
            CLKDIV5 = 0x00000020,
            CLKDIV6 = 0x00000040,
            CLKDIV7 = 0x00000080,
            CLKEN   = 0x00000100,
            PWRSAV  = 0x00000200,
            BYPASS  = 0x00000400,
            WIDBUS0 = 0x00000800,
            WIDBUS1 = 0x00001000,
            NEGEDGE = 0x00002000,
            HWFC_EN = 0x00004000,
        };
    };

    struct SDIO_ARG {
        static constexpr uint32_t address = 0x40018008;
        enum bits : uint32_t {
            CMDARG0  = 0x00000001,
            CMDARG1  = 0x00000002,
            CMDARG2  = 0x00000004,
            CMDARG3  = 0x00000008,
            CMDARG4  = 0x00000010,
            CMDARG5  = 0x00000020,
            CMDARG6  = 0x00000040,
            CMDARG7  = 0x00000080,
            CMDARG8  = 0x00000100,
            CMDARG9  = 0x00000200,
            CMDARG10 = 0x00000400,
            CMDARG11 = 0x00000800,
            CMDARG12 = 0x00001000,
            CMDARG13 = 0x00002000,
            CMDARG14 = 0x00004000,
            CMDARG15 = 0x00008000,
            CMDARG16 = 0x00010000,
            CMDARG17 = 0x00020000,
            CMDARG18 = 0x00040000,
            CMDARG19 = 0x00080000,
            CMDARG20 = 0x00100000,
            CMDARG21 = 0x00200000,
            CMDARG22 = 0x00400000,
            CMDARG23 = 0x00800000,
            CMDARG24 = 0x01000000,
            CMDARG25 = 0x02000000,
            CMDARG26 = 0x04000000,
            CMDARG27 = 0x08000000,
            CMDARG28 = 0x10000000,
            CMDARG29 = 0x20000000,
            CMDARG30 = 0x40000000,
            CMDARG31 = 0x80000000,
        };
    };

    struct SDIO_CMD {
        static constexpr uint32_t address = 0x4001800c;
        enum bits : uint32_t {
            CMDINDEX0   = 0x00000001,
            CMDINDEX1   = 0x00000002,
            CMDINDEX2   = 0x00000004,
            CMDINDEX3   = 0x00000008,
            CMDINDEX4   = 0x00000010,
            CMDINDEX5   = 0x00000020,
            WAITRESP0   = 0x00000040,
            WAITRESP1   = 0x00000080,
            WAITINT     = 0x00000100,
            WAITPEND    = 0x00000200,
            CPSMEN      = 0x00000400,
            SDIOSuspend = 0x00000800,
            ENCMDcompl  = 0x00001000,
            nIEN        = 0x00002000,
            CE_ATACMD   = 0x00004000,
        };
    };

    struct SDIO_RESPCMD {
        static constexpr uint32_t address = 0x40018010;
        enum bits : uint32_t {
            RESPCMD0 = 0x00000001,
            RESPCMD1 = 0x00000002,
            RESPCMD2 = 0x00000004,
            RESPCMD3 = 0x00000008,
            RESPCMD4 = 0x00000010,
            RESPCMD5 = 0x00000020,
        };
    };

    struct SDIO_RESPI1 {
        static constexpr uint32_t address = 0x40018014;
        enum bits : uint32_t {
            CARDSTATUS10  = 0x00000001,
            CARDSTATUS11  = 0x00000002,
            CARDSTATUS12  = 0x00000004,
            CARDSTATUS13  = 0x00000008,
            CARDSTATUS14  = 0x00000010,
            CARDSTATUS15  = 0x00000020,
            CARDSTATUS16  = 0x00000040,
            CARDSTATUS17  = 0x00000080,
            CARDSTATUS18  = 0x00000100,
            CARDSTATUS19  = 0x00000200,
            CARDSTATUS110 = 0x00000400,
            CARDSTATUS111 = 0x00000800,
            CARDSTATUS112 = 0x00001000,
            CARDSTATUS113 = 0x00002000,
            CARDSTATUS114 = 0x00004000,
            CARDSTATUS115 = 0x00008000,
            CARDSTATUS116 = 0x00010000,
            CARDSTATUS117 = 0x00020000,
            CARDSTATUS118 = 0x00040000,
            CARDSTATUS119 = 0x00080000,
            CARDSTATUS120 = 0x00100000,
            CARDSTATUS121 = 0x00200000,
            CARDSTATUS122 = 0x00400000,
            CARDSTATUS123 = 0x00800000,
            CARDSTATUS124 = 0x01000000,
            CARDSTATUS125 = 0x02000000,
            CARDSTATUS126 = 0x04000000,
            CARDSTATUS127 = 0x08000000,
            CARDSTATUS128 = 0x10000000,
            CARDSTATUS129 = 0x20000000,
            CARDSTATUS130 = 0x40000000,
            CARDSTATUS131 = 0x80000000,
        };
    };

    struct SDIO_RESP2 {
        static constexpr uint32_t address = 0x40018018;
        enum bits : uint32_t {
            CARDSTATUS20  = 0x00000001,
            CARDSTATUS21  = 0x00000002,
            CARDSTATUS22  = 0x00000004,
            CARDSTATUS23  = 0x00000008,
            CARDSTATUS24  = 0x00000010,
            CARDSTATUS25  = 0x00000020,
            CARDSTATUS26  = 0x00000040,
            CARDSTATUS27  = 0x00000080,
            CARDSTATUS28  = 0x00000100,
            CARDSTATUS29  = 0x00000200,
            CARDSTATUS210 = 0x00000400,
            CARDSTATUS211 = 0x00000800,
            CARDSTATUS212 = 0x00001000,
            CARDSTATUS213 = 0x00002000,
            CARDSTATUS214 = 0x00004000,
            CARDSTATUS215 = 0x00008000,
            CARDSTATUS216 = 0x00010000,
            CARDSTATUS217 = 0x00020000,
            CARDSTATUS218 = 0x00040000,
            CARDSTATUS219 = 0x00080000,
            CARDSTATUS220 = 0x00100000,
            CARDSTATUS221 = 0x00200000,
            CARDSTATUS222 = 0x00400000,
            CARDSTATUS223 = 0x00800000,
            CARDSTATUS224 = 0x01000000,
            CARDSTATUS225 = 0x02000000,
            CARDSTATUS226 = 0x04000000,
            CARDSTATUS227 = 0x08000000,
            CARDSTATUS228 = 0x10000000,
            CARDSTATUS229 = 0x20000000,
            CARDSTATUS230 = 0x40000000,
            CARDSTATUS231 = 0x80000000,
        };
    };

    struct SDIO_RESP3 {
        static constexpr uint32_t address = 0x4001801c;
        enum bits : uint32_t {
            CARDSTATUS30  = 0x00000001,
            CARDSTATUS31  = 0x00000002,
            CARDSTATUS32  = 0x00000004,
            CARDSTATUS33  = 0x00000008,
            CARDSTATUS34  = 0x00000010,
            CARDSTATUS35  = 0x00000020,
            CARDSTATUS36  = 0x00000040,
            CARDSTATUS37  = 0x00000080,
            CARDSTATUS38  = 0x00000100,
            CARDSTATUS39  = 0x00000200,
            CARDSTATUS310 = 0x00000400,
            CARDSTATUS311 = 0x00000800,
            CARDSTATUS312 = 0x00001000,
            CARDSTATUS313 = 0x00002000,
            CARDSTATUS314 = 0x00004000,
            CARDSTATUS315 = 0x00008000,
            CARDSTATUS316 = 0x00010000,
            CARDSTATUS317 = 0x00020000,
            CARDSTATUS318 = 0x00040000,
            CARDSTATUS319 = 0x00080000,
            CARDSTATUS320 = 0x00100000,
            CARDSTATUS321 = 0x00200000,
            CARDSTATUS322 = 0x00400000,
            CARDSTATUS323 = 0x00800000,
            CARDSTATUS324 = 0x01000000,
            CARDSTATUS325 = 0x02000000,
            CARDSTATUS326 = 0x04000000,
            CARDSTATUS327 = 0x08000000,
            CARDSTATUS328 = 0x10000000,
            CARDSTATUS329 = 0x20000000,
            CARDSTATUS330 = 0x40000000,
            CARDSTATUS331 = 0x80000000,
        };
    };

    struct SDIO_RESP4 {
        static constexpr uint32_t address = 0x40018020;
        enum bits : uint32_t {
            CARDSTATUS40  = 0x00000001,
            CARDSTATUS41  = 0x00000002,
            CARDSTATUS42  = 0x00000004,
            CARDSTATUS43  = 0x00000008,
            CARDSTATUS44  = 0x00000010,
            CARDSTATUS45  = 0x00000020,
            CARDSTATUS46  = 0x00000040,
            CARDSTATUS47  = 0x00000080,
            CARDSTATUS48  = 0x00000100,
            CARDSTATUS49  = 0x00000200,
            CARDSTATUS410 = 0x00000400,
            CARDSTATUS411 = 0x00000800,
            CARDSTATUS412 = 0x00001000,
            CARDSTATUS413 = 0x00002000,
            CARDSTATUS414 = 0x00004000,
            CARDSTATUS415 = 0x00008000,
            CARDSTATUS416 = 0x00010000,
            CARDSTATUS417 = 0x00020000,
            CARDSTATUS418 = 0x00040000,
            CARDSTATUS419 = 0x00080000,
            CARDSTATUS420 = 0x00100000,
            CARDSTATUS421 = 0x00200000,
            CARDSTATUS422 = 0x00400000,
            CARDSTATUS423 = 0x00800000,
            CARDSTATUS424 = 0x01000000,
            CARDSTATUS425 = 0x02000000,
            CARDSTATUS426 = 0x04000000,
            CARDSTATUS427 = 0x08000000,
            CARDSTATUS428 = 0x10000000,
            CARDSTATUS429 = 0x20000000,
            CARDSTATUS430 = 0x40000000,
            CARDSTATUS431 = 0x80000000,
        };
    };

    struct SDIO_DTIMER {
        static constexpr uint32_t address = 0x40018024;
        enum bits : uint32_t {
            DATATIME0  = 0x00000001,
            DATATIME1  = 0x00000002,
            DATATIME2  = 0x00000004,
            DATATIME3  = 0x00000008,
            DATATIME4  = 0x00000010,
            DATATIME5  = 0x00000020,
            DATATIME6  = 0x00000040,
            DATATIME7  = 0x00000080,
            DATATIME8  = 0x00000100,
            DATATIME9  = 0x00000200,
            DATATIME10 = 0x00000400,
            DATATIME11 = 0x00000800,
            DATATIME12 = 0x00001000,
            DATATIME13 = 0x00002000,
            DATATIME14 = 0x00004000,
            DATATIME15 = 0x00008000,
            DATATIME16 = 0x00010000,
            DATATIME17 = 0x00020000,
            DATATIME18 = 0x00040000,
            DATATIME19 = 0x00080000,
            DATATIME20 = 0x00100000,
            DATATIME21 = 0x00200000,
            DATATIME22 = 0x00400000,
            DATATIME23 = 0x00800000,
            DATATIME24 = 0x01000000,
            DATATIME25 = 0x02000000,
            DATATIME26 = 0x04000000,
            DATATIME27 = 0x08000000,
            DATATIME28 = 0x10000000,
            DATATIME29 = 0x20000000,
            DATATIME30 = 0x40000000,
            DATATIME31 = 0x80000000,
        };
    };

    struct SDIO_DLEN {
        static constexpr uint32_t address = 0x40018028;
        enum bits : uint32_t {
            DATALENGTH0  = 0x00000001,
            DATALENGTH1  = 0x00000002,
            DATALENGTH2  = 0x00000004,
            DATALENGTH3  = 0x00000008,
            DATALENGTH4  = 0x00000010,
            DATALENGTH5  = 0x00000020,
            DATALENGTH6  = 0x00000040,
            DATALENGTH7  = 0x00000080,
            DATALENGTH8  = 0x00000100,
            DATALENGTH9  = 0x00000200,
            DATALENGTH10 = 0x00000400,
            DATALENGTH11 = 0x00000800,
            DATALENGTH12 = 0x00001000,
            DATALENGTH13 = 0x00002000,
            DATALENGTH14 = 0x00004000,
            DATALENGTH15 = 0x00008000,
            DATALENGTH16 = 0x00010000,
            DATALENGTH17 = 0x00020000,
            DATALENGTH18 = 0x00040000,
            DATALENGTH19 = 0x00080000,
            DATALENGTH20 = 0x00100000,
            DATALENGTH21 = 0x00200000,
            DATALENGTH22 = 0x00400000,
            DATALENGTH23 = 0x00800000,
            DATALENGTH24 = 0x01000000,
        };
    };

    struct SDIO_DCTRL {
        static constexpr uint32_t address = 0x4001802c;
        enum bits : uint32_t {
            DTEN        = 0x00000001,
            DTDIR       = 0x00000002,
            DTMODE      = 0x00000004,
            DMAEN       = 0x00000008,
            DBLOCKSIZE0 = 0x00000010,
            DBLOCKSIZE1 = 0x00000020,
            DBLOCKSIZE2 = 0x00000040,
            DBLOCKSIZE3 = 0x00000080,
            PWSTART     = 0x00000100,
            PWSTOP      = 0x00000200,
            RWMOD       = 0x00000400,
            SDIOEN      = 0x00000800,
        };
    };

    struct SDIO_DCOUNT {
        static constexpr uint32_t address = 0x40018030;
        enum bits : uint32_t {
            DATACOUNT0  = 0x00000001,
            DATACOUNT1  = 0x00000002,
            DATACOUNT2  = 0x00000004,
            DATACOUNT3  = 0x00000008,
            DATACOUNT4  = 0x00000010,
            DATACOUNT5  = 0x00000020,
            DATACOUNT6  = 0x00000040,
            DATACOUNT7  = 0x00000080,
            DATACOUNT8  = 0x00000100,
            DATACOUNT9  = 0x00000200,
            DATACOUNT10 = 0x00000400,
            DATACOUNT11 = 0x00000800,
            DATACOUNT12 = 0x00001000,
            DATACOUNT13 = 0x00002000,
            DATACOUNT14 = 0x00004000,
            DATACOUNT15 = 0x00008000,
            DATACOUNT16 = 0x00010000,
            DATACOUNT17 = 0x00020000,
            DATACOUNT18 = 0x00040000,
            DATACOUNT19 = 0x00080000,
            DATACOUNT20 = 0x00100000,
            DATACOUNT21 = 0x00200000,
            DATACOUNT22 = 0x00400000,
            DATACOUNT23 = 0x00800000,
            DATACOUNT24 = 0x01000000,
        };
    };

    struct SDIO_STA {
        static constexpr uint32_t address = 0x40018034;
        enum bits : uint32_t {
            CCRCFAIL = 0x00000001,
            DCRCFAIL = 0x00000002,
            CTIMEOUT = 0x00000004,
            DTIMEOUT = 0x00000008,
            TXUNDERR = 0x00000010,
            RXOVERR  = 0x00000020,
            CMDREND  = 0x00000040,
            CMDSENT  = 0x00000080,
            DATAEND  = 0x00000100,
            STBITERR = 0x00000200,
            DBCKEND  = 0x00000400,
            CMDACT   = 0x00000800,
            TXACT    = 0x00001000,
            RXACT    = 0x00002000,
            TXFIFOHE = 0x00004000,
            RXFIFOHF = 0x00008000,
            TXFIFOF  = 0x00010000,
            RXFIFOF  = 0x00020000,
            TXFIFOE  = 0x00040000,
            RXFIFOE  = 0x00080000,
            TXDAVL   = 0x00100000,
            RXDAVL   = 0x00200000,
            SDIOIT   = 0x00400000,
            CEATAEND = 0x00800000,
        };
    };

    struct SDIO_ICR {
        static constexpr uint32_t address = 0x40018038;
        enum bits : uint32_t {
            CCRCFAILC = 0x00000001,
            DCRCFAILC = 0x00000002,
            CTIMEOUTC = 0x00000004,
            DTIMEOUTC = 0x00000008,
            TXUNDERRC = 0x00000010,
            RXOVERRC  = 0x00000020,
            CMDRENDC  = 0x00000040,
            CMDSENTC  = 0x00000080,
            DATAENDC  = 0x00000100,
            STBITERRC = 0x00000200,
            DBCKENDC  = 0x00000400,
            SDIOITC   = 0x00400000,
            CEATAENDC = 0x00800000,
        };
    };

    struct SDIO_MASK {
        static constexpr uint32_t address = 0x4001803c;
        enum bits : uint32_t {
            CCRCFAILIE = 0x00000001,
            DCRCFAILIE = 0x00000002,
            CTIMEOUTIE = 0x00000004,
            DTIMEOUTIE = 0x00000008,
            TXUNDERRIE = 0x00000010,
            RXOVERRIE  = 0x00000020,
            CMDRENDIE  = 0x00000040,
            CMDSENTIE  = 0x00000080,
            DATAENDIE  = 0x00000100,
            STBITERRIE = 0x00000200,
            DBACKENDIE = 0x00000400,
            CMDACTIE   = 0x00000800,
            TXACTIE    = 0x00001000,
            RXACTIE    = 0x00002000,
            TXFIFOHEIE = 0x00004000,
            RXFIFOHFIE = 0x00008000,
            TXFIFOFIE  = 0x00010000,
            RXFIFOFIE  = 0x00020000,
            TXFIFOEIE  = 0x00040000,
            RXFIFOEIE  = 0x00080000,
            TXDAVLIE   = 0x00100000,
            RXDAVLIE   = 0x00200000,
            SDIOITIE   = 0x00400000,
            CEATENDIE  = 0x00800000,
        };
    };

    struct SDIO_FIFOCNT {
        static constexpr uint32_t address = 0x40018048;
        enum bits : uint32_t {
            FIF0COUNT0  = 0x00000001,
            FIF0COUNT1  = 0x00000002,
            FIF0COUNT2  = 0x00000004,
            FIF0COUNT3  = 0x00000008,
            FIF0COUNT4  = 0x00000010,
            FIF0COUNT5  = 0x00000020,
            FIF0COUNT6  = 0x00000040,
            FIF0COUNT7  = 0x00000080,
            FIF0COUNT8  = 0x00000100,
            FIF0COUNT9  = 0x00000200,
            FIF0COUNT10 = 0x00000400,
            FIF0COUNT11 = 0x00000800,
            FIF0COUNT12 = 0x00001000,
            FIF0COUNT13 = 0x00002000,
            FIF0COUNT14 = 0x00004000,
            FIF0COUNT15 = 0x00008000,
            FIF0COUNT16 = 0x00010000,
            FIF0COUNT17 = 0x00020000,
            FIF0COUNT18 = 0x00040000,
            FIF0COUNT19 = 0x00080000,
            FIF0COUNT20 = 0x00100000,
            FIF0COUNT21 = 0x00200000,
            FIF0COUNT22 = 0x00400000,
            FIF0COUNT23 = 0x00800000,
        };
    };

    struct SDIO_FIFO {
        static constexpr uint32_t address = 0x40018080;
        enum bits : uint32_t {
            FIFOData0  = 0x00000001,
            FIFOData1  = 0x00000002,
            FIFOData2  = 0x00000004,
            FIFOData3  = 0x00000008,
            FIFOData4  = 0x00000010,
            FIFOData5  = 0x00000020,
            FIFOData6  = 0x00000040,
            FIFOData7  = 0x00000080,
            FIFOData8  = 0x00000100,
            FIFOData9  = 0x00000200,
            FIFOData10 = 0x00000400,
            FIFOData11 = 0x00000800,
            FIFOData12 = 0x00001000,
            FIFOData13 = 0x00002000,
            FIFOData14 = 0x00004000,
            FIFOData15 = 0x00008000,
            FIFOData16 = 0x00010000,
            FIFOData17 = 0x00020000,
            FIFOData18 = 0x00040000,
            FIFOData19 = 0x00080000,
            FIFOData20 = 0x00100000,
            FIFOData21 = 0x00200000,
            FIFOData22 = 0x00400000,
            FIFOData23 = 0x00800000,
            FIFOData24 = 0x01000000,
            FIFOData25 = 0x02000000,
            FIFOData26 = 0x04000000,
            FIFOData27 = 0x08000000,
            FIFOData28 = 0x10000000,
            FIFOData29 = 0x20000000,
            FIFOData30 = 0x40000000,
            FIFOData31 = 0x80000000,
        };
    };

    struct RTC_CRH {
        static constexpr uint32_t address = 0x40002800;
        enum bits : uint32_t {
            SECIE = 0x00000001,
            ALRIE = 0x00000002,
            OWIE  = 0x00000004,
        };
    };

    struct RTC_CRL {
        static constexpr uint32_t address = 0x40002804;
        enum bits : uint32_t {
            SECF  = 0x00000001,
            ALRF  = 0x00000002,
            OWF   = 0x00000004,
            RSF   = 0x00000008,
            CNF   = 0x00000010,
            RTOFF = 0x00000020,
        };
    };

    struct RTC_PRLH {
        static constexpr uint32_t address = 0x40002808;
        enum bits : uint32_t {
            PRLH0 = 0x00000001,
            PRLH1 = 0x00000002,
            PRLH2 = 0x00000004,
            PRLH3 = 0x00000008,
        };
    };

    struct RTC_PRLL {
        static constexpr uint32_t address = 0x4000280c;
        enum bits : uint32_t {
            PRLL0  = 0x00000001,
            PRLL1  = 0x00000002,
            PRLL2  = 0x00000004,
            PRLL3  = 0x00000008,
            PRLL4  = 0x00000010,
            PRLL5  = 0x00000020,
            PRLL6  = 0x00000040,
            PRLL7  = 0x00000080,
            PRLL8  = 0x00000100,
            PRLL9  = 0x00000200,
            PRLL10 = 0x00000400,
            PRLL11 = 0x00000800,
            PRLL12 = 0x00001000,
            PRLL13 = 0x00002000,
            PRLL14 = 0x00004000,
            PRLL15 = 0x00008000,
        };
    };

    struct RTC_DIVH {
        static constexpr uint32_t address = 0x40002810;
        enum bits : uint32_t {
            DIVH0 = 0x00000001,
            DIVH1 = 0x00000002,
            DIVH2 = 0x00000004,
            DIVH3 = 0x00000008,
        };
    };

    struct RTC_DIVL {
        static constexpr uint32_t address = 0x40002814;
        enum bits : uint32_t {
            DIVL0  = 0x00000001,
            DIVL1  = 0x00000002,
            DIVL2  = 0x00000004,
            DIVL3  = 0x00000008,
            DIVL4  = 0x00000010,
            DIVL5  = 0x00000020,
            DIVL6  = 0x00000040,
            DIVL7  = 0x00000080,
            DIVL8  = 0x00000100,
            DIVL9  = 0x00000200,
            DIVL10 = 0x00000400,
            DIVL11 = 0x00000800,
            DIVL12 = 0x00001000,
            DIVL13 = 0x00002000,
            DIVL14 = 0x00004000,
            DIVL15 = 0x00008000,
        };
    };

    struct RTC_CNTH {
        static constexpr uint32_t address = 0x40002818;
        enum bits : uint32_t {
            CNTH0  = 0x00000001,
            CNTH1  = 0x00000002,
            CNTH2  = 0x00000004,
            CNTH3  = 0x00000008,
            CNTH4  = 0x00000010,
            CNTH5  = 0x00000020,
            CNTH6  = 0x00000040,
            CNTH7  = 0x00000080,
            CNTH8  = 0x00000100,
            CNTH9  = 0x00000200,
            CNTH10 = 0x00000400,
            CNTH11 = 0x00000800,
            CNTH12 = 0x00001000,
            CNTH13 = 0x00002000,
            CNTH14 = 0x00004000,
            CNTH15 = 0x00008000,
        };
    };

    struct RTC_CNTL {
        static constexpr uint32_t address = 0x4000281c;
        enum bits : uint32_t {
            CNTL0  = 0x00000001,
            CNTL1  = 0x00000002,
            CNTL2  = 0x00000004,
            CNTL3  = 0x00000008,
            CNTL4  = 0x00000010,
            CNTL5  = 0x00000020,
            CNTL6  = 0x00000040,
            CNTL7  = 0x00000080,
            CNTL8  = 0x00000100,
            CNTL9  = 0x00000200,
            CNTL10 = 0x00000400,
            CNTL11 = 0x00000800,
            CNTL12 = 0x00001000,
            CNTL13 = 0x00002000,
            CNTL14 = 0x00004000,
            CNTL15 = 0x00008000,
        };
    };

    struct RTC_ALRH {
        static constexpr uint32_t address = 0x40002820;
        enum bits : uint32_t {
            ALRH0  = 0x00000001,
            ALRH1  = 0x00000002,
            ALRH2  = 0x00000004,
            ALRH3  = 0x00000008,
            ALRH4  = 0x00000010,
            ALRH5  = 0x00000020,
            ALRH6  = 0x00000040,
            ALRH7  = 0x00000080,
            ALRH8  = 0x00000100,
            ALRH9  = 0x00000200,
            ALRH10 = 0x00000400,
            ALRH11 = 0x00000800,
            ALRH12 = 0x00001000,
            ALRH13 = 0x00002000,
            ALRH14 = 0x00004000,
            ALRH15 = 0x00008000,
        };
    };

    struct RTC_ALRL {
        static constexpr uint32_t address = 0x40002824;
        enum bits : uint32_t {
            ALRL0  = 0x00000001,
            ALRL1  = 0x00000002,
            ALRL2  = 0x00000004,
            ALRL3  = 0x00000008,
            ALRL4  = 0x00000010,
            ALRL5  = 0x00000020,
            ALRL6  = 0x00000040,
            ALRL7  = 0x00000080,
            ALRL8  = 0x00000100,
            ALRL9  = 0x00000200,
            ALRL10 = 0x00000400,
            ALRL11 = 0x00000800,
            ALRL12 = 0x00001000,
            ALRL13 = 0x00002000,
            ALRL14 = 0x00004000,
            ALRL15 = 0x00008000,
        };
    };

    struct BKP_DR1 {
        static constexpr uint32_t address = 0x40006c00;
        enum bits : uint32_t {
            D10  = 0x00000001,
            D11  = 0x00000002,
            D12  = 0x00000004,
            D13  = 0x00000008,
            D14  = 0x00000010,
            D15  = 0x00000020,
            D16  = 0x00000040,
            D17  = 0x00000080,
            D18  = 0x00000100,
            D19  = 0x00000200,
            D110 = 0x00000400,
            D111 = 0x00000800,
            D112 = 0x00001000,
            D113 = 0x00002000,
            D114 = 0x00004000,
            D115 = 0x00008000,
        };
    };

    struct BKP_DR2 {
        static constexpr uint32_t address = 0x40006c04;
        enum bits : uint32_t {
            D20  = 0x00000001,
            D21  = 0x00000002,
            D22  = 0x00000004,
            D23  = 0x00000008,
            D24  = 0x00000010,
            D25  = 0x00000020,
            D26  = 0x00000040,
            D27  = 0x00000080,
            D28  = 0x00000100,
            D29  = 0x00000200,
            D210 = 0x00000400,
            D211 = 0x00000800,
            D212 = 0x00001000,
            D213 = 0x00002000,
            D214 = 0x00004000,
            D215 = 0x00008000,
        };
    };

    struct BKP_DR3 {
        static constexpr uint32_t address = 0x40006c08;
        enum bits : uint32_t {
            D30  = 0x00000001,
            D31  = 0x00000002,
            D32  = 0x00000004,
            D33  = 0x00000008,
            D34  = 0x00000010,
            D35  = 0x00000020,
            D36  = 0x00000040,
            D37  = 0x00000080,
            D38  = 0x00000100,
            D39  = 0x00000200,
            D310 = 0x00000400,
            D311 = 0x00000800,
            D312 = 0x00001000,
            D313 = 0x00002000,
            D314 = 0x00004000,
            D315 = 0x00008000,
        };
    };

    struct BKP_DR4 {
        static constexpr uint32_t address = 0x40006c0c;
        enum bits : uint32_t {
            D40  = 0x00000001,
            D41  = 0x00000002,
            D42  = 0x00000004,
            D43  = 0x00000008,
            D44  = 0x00000010,
            D45  = 0x00000020,
            D46  = 0x00000040,
            D47  = 0x00000080,
            D48  = 0x00000100,
            D49  = 0x00000200,
            D410 = 0x00000400,
            D411 = 0x00000800,
            D412 = 0x00001000,
            D413 = 0x00002000,
            D414 = 0x00004000,
            D415 = 0x00008000,
        };
    };

    struct BKP_DR5 {
        static constexpr uint32_t address = 0x40006c10;
        enum bits : uint32_t {
            D50  = 0x00000001,
            D51  = 0x00000002,
            D52  = 0x00000004,
            D53  = 0x00000008,
            D54  = 0x00000010,
            D55  = 0x00000020,
            D56  = 0x00000040,
            D57  = 0x00000080,
            D58  = 0x00000100,
            D59  = 0x00000200,
            D510 = 0x00000400,
            D511 = 0x00000800,
            D512 = 0x00001000,
            D513 = 0x00002000,
            D514 = 0x00004000,
            D515 = 0x00008000,
        };
    };

    struct BKP_DR6 {
        static constexpr uint32_t address = 0x40006c14;
        enum bits : uint32_t {
            D60  = 0x00000001,
            D61  = 0x00000002,
            D62  = 0x00000004,
            D63  = 0x00000008,
            D64  = 0x00000010,
            D65  = 0x00000020,
            D66  = 0x00000040,
            D67  = 0x00000080,
            D68  = 0x00000100,
            D69  = 0x00000200,
            D610 = 0x00000400,
            D611 = 0x00000800,
            D612 = 0x00001000,
            D613 = 0x00002000,
            D614 = 0x00004000,
            D615 = 0x00008000,
        };
    };

    struct BKP_DR7 {
        static constexpr uint32_t address = 0x40006c18;
        enum bits : uint32_t {
            D70  = 0x00000001,
            D71  = 0x00000002,
            D72  = 0x00000004,
            D73  = 0x00000008,
            D74  = 0x00000010,
            D75  = 0x00000020,
            D76  = 0x00000040,
            D77  = 0x00000080,
            D78  = 0x00000100,
            D79  = 0x00000200,
            D710 = 0x00000400,
            D711 = 0x00000800,
            D712 = 0x00001000,
            D713 = 0x00002000,
            D714 = 0x00004000,
            D715 = 0x00008000,
        };
    };

    struct BKP_DR8 {
        static constexpr uint32_t address = 0x40006c1c;
        enum bits : uint32_t {
            D80  = 0x00000001,
            D81  = 0x00000002,
            D82  = 0x00000004,
            D83  = 0x00000008,
            D84  = 0x00000010,
            D85  = 0x00000020,
            D86  = 0x00000040,
            D87  = 0x00000080,
            D88  = 0x00000100,
            D89  = 0x00000200,
            D810 = 0x00000400,
            D811 = 0x00000800,
            D812 = 0x00001000,
            D813 = 0x00002000,
            D814 = 0x00004000,
            D815 = 0x00008000,
        };
    };

    struct BKP_DR9 {
        static constexpr uint32_t address = 0x40006c20;
        enum bits : uint32_t {
            D90  = 0x00000001,
            D91  = 0x00000002,
            D92  = 0x00000004,
            D93  = 0x00000008,
            D94  = 0x00000010,
            D95  = 0x00000020,
            D96  = 0x00000040,
            D97  = 0x00000080,
            D98  = 0x00000100,
            D99  = 0x00000200,
            D910 = 0x00000400,
            D911 = 0x00000800,
            D912 = 0x00001000,
            D913 = 0x00002000,
            D914 = 0x00004000,
            D915 = 0x00008000,
        };
    };

    struct BKP_DR10 {
        static constexpr uint32_t address = 0x40006c24;
        enum bits : uint32_t {
            D100  = 0x00000001,
            D101  = 0x00000002,
            D102  = 0x00000004,
            D103  = 0x00000008,
            D104  = 0x00000010,
            D105  = 0x00000020,
            D106  = 0x00000040,
            D107  = 0x00000080,
            D108  = 0x00000100,
            D109  = 0x00000200,
            D1010 = 0x00000400,
            D1011 = 0x00000800,
            D1012 = 0x00001000,
            D1013 = 0x00002000,
            D1014 = 0x00004000,
            D1015 = 0x00008000,
        };
    };

    struct BKP_DR11 {
        static constexpr uint32_t address = 0x40006c3c;
        enum bits : uint32_t {
            DR110  = 0x00000001,
            DR111  = 0x00000002,
            DR112  = 0x00000004,
            DR113  = 0x00000008,
            DR114  = 0x00000010,
            DR115  = 0x00000020,
            DR116  = 0x00000040,
            DR117  = 0x00000080,
            DR118  = 0x00000100,
            DR119  = 0x00000200,
            DR1110 = 0x00000400,
            DR1111 = 0x00000800,
            DR1112 = 0x00001000,
            DR1113 = 0x00002000,
            DR1114 = 0x00004000,
            DR1115 = 0x00008000,
        };
    };

    struct BKP_DR12 {
        static constexpr uint32_t address = 0x40006c40;
        enum bits : uint32_t {
            DR120  = 0x00000001,
            DR121  = 0x00000002,
            DR122  = 0x00000004,
            DR123  = 0x00000008,
            DR124  = 0x00000010,
            DR125  = 0x00000020,
            DR126  = 0x00000040,
            DR127  = 0x00000080,
            DR128  = 0x00000100,
            DR129  = 0x00000200,
            DR1210 = 0x00000400,
            DR1211 = 0x00000800,
            DR1212 = 0x00001000,
            DR1213 = 0x00002000,
            DR1214 = 0x00004000,
            DR1215 = 0x00008000,
        };
    };

    struct BKP_DR13 {
        static constexpr uint32_t address = 0x40006c44;
        enum bits : uint32_t {
            DR130  = 0x00000001,
            DR131  = 0x00000002,
            DR132  = 0x00000004,
            DR133  = 0x00000008,
            DR134  = 0x00000010,
            DR135  = 0x00000020,
            DR136  = 0x00000040,
            DR137  = 0x00000080,
            DR138  = 0x00000100,
            DR139  = 0x00000200,
            DR1310 = 0x00000400,
            DR1311 = 0x00000800,
            DR1312 = 0x00001000,
            DR1313 = 0x00002000,
            DR1314 = 0x00004000,
            DR1315 = 0x00008000,
        };
    };

    struct BKP_DR14 {
        static constexpr uint32_t address = 0x40006c48;
        enum bits : uint32_t {
            D140  = 0x00000001,
            D141  = 0x00000002,
            D142  = 0x00000004,
            D143  = 0x00000008,
            D144  = 0x00000010,
            D145  = 0x00000020,
            D146  = 0x00000040,
            D147  = 0x00000080,
            D148  = 0x00000100,
            D149  = 0x00000200,
            D1410 = 0x00000400,
            D1411 = 0x00000800,
            D1412 = 0x00001000,
            D1413 = 0x00002000,
            D1414 = 0x00004000,
            D1415 = 0x00008000,
        };
    };

    struct BKP_DR15 {
        static constexpr uint32_t address = 0x40006c4c;
        enum bits : uint32_t {
            D150  = 0x00000001,
            D151  = 0x00000002,
            D152  = 0x00000004,
            D153  = 0x00000008,
            D154  = 0x00000010,
            D155  = 0x00000020,
            D156  = 0x00000040,
            D157  = 0x00000080,
            D158  = 0x00000100,
            D159  = 0x00000200,
            D1510 = 0x00000400,
            D1511 = 0x00000800,
            D1512 = 0x00001000,
            D1513 = 0x00002000,
            D1514 = 0x00004000,
            D1515 = 0x00008000,
        };
    };

    struct BKP_DR16 {
        static constexpr uint32_t address = 0x40006c50;
        enum bits : uint32_t {
            D160  = 0x00000001,
            D161  = 0x00000002,
            D162  = 0x00000004,
            D163  = 0x00000008,
            D164  = 0x00000010,
            D165  = 0x00000020,
            D166  = 0x00000040,
            D167  = 0x00000080,
            D168  = 0x00000100,
            D169  = 0x00000200,
            D1610 = 0x00000400,
            D1611 = 0x00000800,
            D1612 = 0x00001000,
            D1613 = 0x00002000,
            D1614 = 0x00004000,
            D1615 = 0x00008000,
        };
    };

    struct BKP_DR17 {
        static constexpr uint32_t address = 0x40006c54;
        enum bits : uint32_t {
            D170  = 0x00000001,
            D171  = 0x00000002,
            D172  = 0x00000004,
            D173  = 0x00000008,
            D174  = 0x00000010,
            D175  = 0x00000020,
            D176  = 0x00000040,
            D177  = 0x00000080,
            D178  = 0x00000100,
            D179  = 0x00000200,
            D1710 = 0x00000400,
            D1711 = 0x00000800,
            D1712 = 0x00001000,
            D1713 = 0x00002000,
            D1714 = 0x00004000,
            D1715 = 0x00008000,
        };
    };

    struct BKP_DR18 {
        static constexpr uint32_t address = 0x40006c58;
        enum bits : uint32_t {
            D180  = 0x00000001,
            D181  = 0x00000002,
            D182  = 0x00000004,
            D183  = 0x00000008,
            D184  = 0x00000010,
            D185  = 0x00000020,
            D186  = 0x00000040,
            D187  = 0x00000080,
            D188  = 0x00000100,
            D189  = 0x00000200,
            D1810 = 0x00000400,
            D1811 = 0x00000800,
            D1812 = 0x00001000,
            D1813 = 0x00002000,
            D1814 = 0x00004000,
            D1815 = 0x00008000,
        };
    };

    struct BKP_DR19 {
        static constexpr uint32_t address = 0x40006c5c;
        enum bits : uint32_t {
            D190  = 0x00000001,
            D191  = 0x00000002,
            D192  = 0x00000004,
            D193  = 0x00000008,
            D194  = 0x00000010,
            D195  = 0x00000020,
            D196  = 0x00000040,
            D197  = 0x00000080,
            D198  = 0x00000100,
            D199  = 0x00000200,
            D1910 = 0x00000400,
            D1911 = 0x00000800,
            D1912 = 0x00001000,
            D1913 = 0x00002000,
            D1914 = 0x00004000,
            D1915 = 0x00008000,
        };
    };

    struct BKP_DR20 {
        static constexpr uint32_t address = 0x40006c60;
        enum bits : uint32_t {
            D200  = 0x00000001,
            D201  = 0x00000002,
            D202  = 0x00000004,
            D203  = 0x00000008,
            D204  = 0x00000010,
            D205  = 0x00000020,
            D206  = 0x00000040,
            D207  = 0x00000080,
            D208  = 0x00000100,
            D209  = 0x00000200,
            D2010 = 0x00000400,
            D2011 = 0x00000800,
            D2012 = 0x00001000,
            D2013 = 0x00002000,
            D2014 = 0x00004000,
            D2015 = 0x00008000,
        };
    };

    struct BKP_DR21 {
        static constexpr uint32_t address = 0x40006c64;
        enum bits : uint32_t {
            D210  = 0x00000001,
            D211  = 0x00000002,
            D212  = 0x00000004,
            D213  = 0x00000008,
            D214  = 0x00000010,
            D215  = 0x00000020,
            D216  = 0x00000040,
            D217  = 0x00000080,
            D218  = 0x00000100,
            D219  = 0x00000200,
            D2110 = 0x00000400,
            D2111 = 0x00000800,
            D2112 = 0x00001000,
            D2113 = 0x00002000,
            D2114 = 0x00004000,
            D2115 = 0x00008000,
        };
    };

    struct BKP_DR22 {
        static constexpr uint32_t address = 0x40006c68;
        enum bits : uint32_t {
            D220  = 0x00000001,
            D221  = 0x00000002,
            D222  = 0x00000004,
            D223  = 0x00000008,
            D224  = 0x00000010,
            D225  = 0x00000020,
            D226  = 0x00000040,
            D227  = 0x00000080,
            D228  = 0x00000100,
            D229  = 0x00000200,
            D2210 = 0x00000400,
            D2211 = 0x00000800,
            D2212 = 0x00001000,
            D2213 = 0x00002000,
            D2214 = 0x00004000,
            D2215 = 0x00008000,
        };
    };

    struct BKP_DR23 {
        static constexpr uint32_t address = 0x40006c6c;
        enum bits : uint32_t {
            D230  = 0x00000001,
            D231  = 0x00000002,
            D232  = 0x00000004,
            D233  = 0x00000008,
            D234  = 0x00000010,
            D235  = 0x00000020,
            D236  = 0x00000040,
            D237  = 0x00000080,
            D238  = 0x00000100,
            D239  = 0x00000200,
            D2310 = 0x00000400,
            D2311 = 0x00000800,
            D2312 = 0x00001000,
            D2313 = 0x00002000,
            D2314 = 0x00004000,
            D2315 = 0x00008000,
        };
    };

    struct BKP_DR24 {
        static constexpr uint32_t address = 0x40006c70;
        enum bits : uint32_t {
            D240  = 0x00000001,
            D241  = 0x00000002,
            D242  = 0x00000004,
            D243  = 0x00000008,
            D244  = 0x00000010,
            D245  = 0x00000020,
            D246  = 0x00000040,
            D247  = 0x00000080,
            D248  = 0x00000100,
            D249  = 0x00000200,
            D2410 = 0x00000400,
            D2411 = 0x00000800,
            D2412 = 0x00001000,
            D2413 = 0x00002000,
            D2414 = 0x00004000,
            D2415 = 0x00008000,
        };
    };

    struct BKP_DR25 {
        static constexpr uint32_t address = 0x40006c74;
        enum bits : uint32_t {
            D250  = 0x00000001,
            D251  = 0x00000002,
            D252  = 0x00000004,
            D253  = 0x00000008,
            D254  = 0x00000010,
            D255  = 0x00000020,
            D256  = 0x00000040,
            D257  = 0x00000080,
            D258  = 0x00000100,
            D259  = 0x00000200,
            D2510 = 0x00000400,
            D2511 = 0x00000800,
            D2512 = 0x00001000,
            D2513 = 0x00002000,
            D2514 = 0x00004000,
            D2515 = 0x00008000,
        };
    };

    struct BKP_DR26 {
        static constexpr uint32_t address = 0x40006c78;
        enum bits : uint32_t {
            D260  = 0x00000001,
            D261  = 0x00000002,
            D262  = 0x00000004,
            D263  = 0x00000008,
            D264  = 0x00000010,
            D265  = 0x00000020,
            D266  = 0x00000040,
            D267  = 0x00000080,
            D268  = 0x00000100,
            D269  = 0x00000200,
            D2610 = 0x00000400,
            D2611 = 0x00000800,
            D2612 = 0x00001000,
            D2613 = 0x00002000,
            D2614 = 0x00004000,
            D2615 = 0x00008000,
        };
    };

    struct BKP_DR27 {
        static constexpr uint32_t address = 0x40006c7c;
        enum bits : uint32_t {
            D270  = 0x00000001,
            D271  = 0x00000002,
            D272  = 0x00000004,
            D273  = 0x00000008,
            D274  = 0x00000010,
            D275  = 0x00000020,
            D276  = 0x00000040,
            D277  = 0x00000080,
            D278  = 0x00000100,
            D279  = 0x00000200,
            D2710 = 0x00000400,
            D2711 = 0x00000800,
            D2712 = 0x00001000,
            D2713 = 0x00002000,
            D2714 = 0x00004000,
            D2715 = 0x00008000,
        };
    };

    struct BKP_DR28 {
        static constexpr uint32_t address = 0x40006c80;
        enum bits : uint32_t {
            D280  = 0x00000001,
            D281  = 0x00000002,
            D282  = 0x00000004,
            D283  = 0x00000008,
            D284  = 0x00000010,
            D285  = 0x00000020,
            D286  = 0x00000040,
            D287  = 0x00000080,
            D288  = 0x00000100,
            D289  = 0x00000200,
            D2810 = 0x00000400,
            D2811 = 0x00000800,
            D2812 = 0x00001000,
            D2813 = 0x00002000,
            D2814 = 0x00004000,
            D2815 = 0x00008000,
        };
    };

    struct BKP_DR29 {
        static constexpr uint32_t address = 0x40006c84;
        enum bits : uint32_t {
            D290  = 0x00000001,
            D291  = 0x00000002,
            D292  = 0x00000004,
            D293  = 0x00000008,
            D294  = 0x00000010,
            D295  = 0x00000020,
            D296  = 0x00000040,
            D297  = 0x00000080,
            D298  = 0x00000100,
            D299  = 0x00000200,
            D2910 = 0x00000400,
            D2911 = 0x00000800,
            D2912 = 0x00001000,
            D2913 = 0x00002000,
            D2914 = 0x00004000,
            D2915 = 0x00008000,
        };
    };

    struct BKP_DR30 {
        static constexpr uint32_t address = 0x40006c88;
        enum bits : uint32_t {
            D300  = 0x00000001,
            D301  = 0x00000002,
            D302  = 0x00000004,
            D303  = 0x00000008,
            D304  = 0x00000010,
            D305  = 0x00000020,
            D306  = 0x00000040,
            D307  = 0x00000080,
            D308  = 0x00000100,
            D309  = 0x00000200,
            D3010 = 0x00000400,
            D3011 = 0x00000800,
            D3012 = 0x00001000,
            D3013 = 0x00002000,
            D3014 = 0x00004000,
            D3015 = 0x00008000,
        };
    };

    struct BKP_DR31 {
        static constexpr uint32_t address = 0x40006c8c;
        enum bits : uint32_t {
            D310  = 0x00000001,
            D311  = 0x00000002,
            D312  = 0x00000004,
            D313  = 0x00000008,
            D314  = 0x00000010,
            D315  = 0x00000020,
            D316  = 0x00000040,
            D317  = 0x00000080,
            D318  = 0x00000100,
            D319  = 0x00000200,
            D3110 = 0x00000400,
            D3111 = 0x00000800,
            D3112 = 0x00001000,
            D3113 = 0x00002000,
            D3114 = 0x00004000,
            D3115 = 0x00008000,
        };
    };

    struct BKP_DR32 {
        static constexpr uint32_t address = 0x40006c90;
        enum bits : uint32_t {
            D320  = 0x00000001,
            D321  = 0x00000002,
            D322  = 0x00000004,
            D323  = 0x00000008,
            D324  = 0x00000010,
            D325  = 0x00000020,
            D326  = 0x00000040,
            D327  = 0x00000080,
            D328  = 0x00000100,
            D329  = 0x00000200,
            D3210 = 0x00000400,
            D3211 = 0x00000800,
            D3212 = 0x00001000,
            D3213 = 0x00002000,
            D3214 = 0x00004000,
            D3215 = 0x00008000,
        };
    };

    struct BKP_DR33 {
        static constexpr uint32_t address = 0x40006c94;
        enum bits : uint32_t {
            D330  = 0x00000001,
            D331  = 0x00000002,
            D332  = 0x00000004,
            D333  = 0x00000008,
            D334  = 0x00000010,
            D335  = 0x00000020,
            D336  = 0x00000040,
            D337  = 0x00000080,
            D338  = 0x00000100,
            D339  = 0x00000200,
            D3310 = 0x00000400,
            D3311 = 0x00000800,
            D3312 = 0x00001000,
            D3313 = 0x00002000,
            D3314 = 0x00004000,
            D3315 = 0x00008000,
        };
    };

    struct BKP_DR34 {
        static constexpr uint32_t address = 0x40006c98;
        enum bits : uint32_t {
            D340  = 0x00000001,
            D341  = 0x00000002,
            D342  = 0x00000004,
            D343  = 0x00000008,
            D344  = 0x00000010,
            D345  = 0x00000020,
            D346  = 0x00000040,
            D347  = 0x00000080,
            D348  = 0x00000100,
            D349  = 0x00000200,
            D3410 = 0x00000400,
            D3411 = 0x00000800,
            D3412 = 0x00001000,
            D3413 = 0x00002000,
            D3414 = 0x00004000,
            D3415 = 0x00008000,
        };
    };

    struct BKP_DR35 {
        static constexpr uint32_t address = 0x40006c9c;
        enum bits : uint32_t {
            D350  = 0x00000001,
            D351  = 0x00000002,
            D352  = 0x00000004,
            D353  = 0x00000008,
            D354  = 0x00000010,
            D355  = 0x00000020,
            D356  = 0x00000040,
            D357  = 0x00000080,
            D358  = 0x00000100,
            D359  = 0x00000200,
            D3510 = 0x00000400,
            D3511 = 0x00000800,
            D3512 = 0x00001000,
            D3513 = 0x00002000,
            D3514 = 0x00004000,
            D3515 = 0x00008000,
        };
    };

    struct BKP_DR36 {
        static constexpr uint32_t address = 0x40006ca0;
        enum bits : uint32_t {
            D360  = 0x00000001,
            D361  = 0x00000002,
            D362  = 0x00000004,
            D363  = 0x00000008,
            D364  = 0x00000010,
            D365  = 0x00000020,
            D366  = 0x00000040,
            D367  = 0x00000080,
            D368  = 0x00000100,
            D369  = 0x00000200,
            D3610 = 0x00000400,
            D3611 = 0x00000800,
            D3612 = 0x00001000,
            D3613 = 0x00002000,
            D3614 = 0x00004000,
            D3615 = 0x00008000,
        };
    };

    struct BKP_DR37 {
        static constexpr uint32_t address = 0x40006ca4;
        enum bits : uint32_t {
            D370  = 0x00000001,
            D371  = 0x00000002,
            D372  = 0x00000004,
            D373  = 0x00000008,
            D374  = 0x00000010,
            D375  = 0x00000020,
            D376  = 0x00000040,
            D377  = 0x00000080,
            D378  = 0x00000100,
            D379  = 0x00000200,
            D3710 = 0x00000400,
            D3711 = 0x00000800,
            D3712 = 0x00001000,
            D3713 = 0x00002000,
            D3714 = 0x00004000,
            D3715 = 0x00008000,
        };
    };

    struct BKP_DR38 {
        static constexpr uint32_t address = 0x40006ca8;
        enum bits : uint32_t {
            D380  = 0x00000001,
            D381  = 0x00000002,
            D382  = 0x00000004,
            D383  = 0x00000008,
            D384  = 0x00000010,
            D385  = 0x00000020,
            D386  = 0x00000040,
            D387  = 0x00000080,
            D388  = 0x00000100,
            D389  = 0x00000200,
            D3810 = 0x00000400,
            D3811 = 0x00000800,
            D3812 = 0x00001000,
            D3813 = 0x00002000,
            D3814 = 0x00004000,
            D3815 = 0x00008000,
        };
    };

    struct BKP_DR39 {
        static constexpr uint32_t address = 0x40006cac;
        enum bits : uint32_t {
            D390  = 0x00000001,
            D391  = 0x00000002,
            D392  = 0x00000004,
            D393  = 0x00000008,
            D394  = 0x00000010,
            D395  = 0x00000020,
            D396  = 0x00000040,
            D397  = 0x00000080,
            D398  = 0x00000100,
            D399  = 0x00000200,
            D3910 = 0x00000400,
            D3911 = 0x00000800,
            D3912 = 0x00001000,
            D3913 = 0x00002000,
            D3914 = 0x00004000,
            D3915 = 0x00008000,
        };
    };

    struct BKP_DR40 {
        static constexpr uint32_t address = 0x40006cb0;
        enum bits : uint32_t {
            D400  = 0x00000001,
            D401  = 0x00000002,
            D402  = 0x00000004,
            D403  = 0x00000008,
            D404  = 0x00000010,
            D405  = 0x00000020,
            D406  = 0x00000040,
            D407  = 0x00000080,
            D408  = 0x00000100,
            D409  = 0x00000200,
            D4010 = 0x00000400,
            D4011 = 0x00000800,
            D4012 = 0x00001000,
            D4013 = 0x00002000,
            D4014 = 0x00004000,
            D4015 = 0x00008000,
        };
    };

    struct BKP_DR41 {
        static constexpr uint32_t address = 0x40006cb4;
        enum bits : uint32_t {
            D410  = 0x00000001,
            D411  = 0x00000002,
            D412  = 0x00000004,
            D413  = 0x00000008,
            D414  = 0x00000010,
            D415  = 0x00000020,
            D416  = 0x00000040,
            D417  = 0x00000080,
            D418  = 0x00000100,
            D419  = 0x00000200,
            D4110 = 0x00000400,
            D4111 = 0x00000800,
            D4112 = 0x00001000,
            D4113 = 0x00002000,
            D4114 = 0x00004000,
            D4115 = 0x00008000,
        };
    };

    struct BKP_DR42 {
        static constexpr uint32_t address = 0x40006cb8;
        enum bits : uint32_t {
            D420  = 0x00000001,
            D421  = 0x00000002,
            D422  = 0x00000004,
            D423  = 0x00000008,
            D424  = 0x00000010,
            D425  = 0x00000020,
            D426  = 0x00000040,
            D427  = 0x00000080,
            D428  = 0x00000100,
            D429  = 0x00000200,
            D4210 = 0x00000400,
            D4211 = 0x00000800,
            D4212 = 0x00001000,
            D4213 = 0x00002000,
            D4214 = 0x00004000,
            D4215 = 0x00008000,
        };
    };

    struct BKP_RTCCR {
        static constexpr uint32_t address = 0x40006c28;
        enum bits : uint32_t {
            CAL0 = 0x00000001,
            CAL1 = 0x00000002,
            CAL2 = 0x00000004,
            CAL3 = 0x00000008,
            CAL4 = 0x00000010,
            CAL5 = 0x00000020,
            CAL6 = 0x00000040,
            CCO  = 0x00000080,
            ASOE = 0x00000100,
            ASOS = 0x00000200,
        };
    };

    struct BKP_CR {
        static constexpr uint32_t address = 0x40006c2c;
        enum bits : uint32_t {
            TPE  = 0x00000001,
            TPAL = 0x00000002,
        };
    };

    struct BKP_CSR {
        static constexpr uint32_t address = 0x40006c30;
        enum bits : uint32_t {
            CTE  = 0x00000001,
            CTI  = 0x00000002,
            TPIE = 0x00000004,
            TEF  = 0x00000100,
            TIF  = 0x00000200,
        };
    };

    struct IWDG_KR {
        static constexpr uint32_t address = 0x40003000;
        enum bits : uint32_t {
            KEY0  = 0x00000001,
            KEY1  = 0x00000002,
            KEY2  = 0x00000004,
            KEY3  = 0x00000008,
            KEY4  = 0x00000010,
            KEY5  = 0x00000020,
            KEY6  = 0x00000040,
            KEY7  = 0x00000080,
            KEY8  = 0x00000100,
            KEY9  = 0x00000200,
            KEY10 = 0x00000400,
            KEY11 = 0x00000800,
            KEY12 = 0x00001000,
            KEY13 = 0x00002000,
            KEY14 = 0x00004000,
            KEY15 = 0x00008000,
        };
    };

    struct IWDG_PR {
        static constexpr uint32_t address = 0x40003004;
        enum bits : uint32_t {
            PR0 = 0x00000001,
            PR1 = 0x00000002,
            PR2 = 0x00000004,
        };
    };

    struct IWDG_RLR {
        static constexpr uint32_t address = 0x40003008;
        enum bits : uint32_t {
            RL0  = 0x00000001,
            RL1  = 0x00000002,
            RL2  = 0x00000004,
            RL3  = 0x00000008,
            RL4  = 0x00000010,
            RL5  = 0x00000020,
            RL6  = 0x00000040,
            RL7  = 0x00000080,
            RL8  = 0x00000100,
            RL9  = 0x00000200,
            RL10 = 0x00000400,
            RL11 = 0x00000800,
        };
    };

    struct IWDG_SR {
        static constexpr uint32_t address = 0x4000300c;
        enum bits : uint32_t {
            PVU = 0x00000001,
            RVU = 0x00000002,
        };
    };

    struct WWDG_CR {
        static constexpr uint32_t address = 0x40002c00;
        enum bits : uint32_t {
            T0   = 0x00000001,
            T1   = 0x00000002,
            T2   = 0x00000004,
            T3   = 0x00000008,
            T4   = 0x00000010,
            T5   = 0x00000020,
            T6   = 0x00000040,
            WDGA = 0x00000080,
        };
    };

    struct WWDG_CFR {
        static constexpr uint32_t address = 0x40002c04;
        enum bits : uint32_t {
            W0     = 0x00000001,
            W1     = 0x00000002,
            W2     = 0x00000004,
            W3     = 0x00000008,
            W4     = 0x00000010,
            W5     = 0x00000020,
            W6     = 0x00000040,
            WDGTB0 = 0x00000080,
            WDGTB1 = 0x00000100,
            EWI    = 0x00000200,
        };
    };

    struct WWDG_SR {
        static constexpr uint32_t address = 0x40002c08;
        enum bits : uint32_t {
            EWI = 0x00000001,
        };
    };

    struct TIM1_CR1 {
        static constexpr uint32_t address = 0x40012c00;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM1_CR2 {
        static constexpr uint32_t address = 0x40012c04;
        enum bits : uint32_t {
            OIS4  = 0x00004000,
            OIS3N = 0x00002000,
            OIS3  = 0x00001000,
            OIS2N = 0x00000800,
            OIS2  = 0x00000400,
            OIS1N = 0x00000200,
            OIS1  = 0x00000100,
            TI1S  = 0x00000080,
            MMS0  = 0x00000010,
            MMS1  = 0x00000020,
            MMS2  = 0x00000040,
            CCDS  = 0x00000008,
            CCUS  = 0x00000004,
            CCPC  = 0x00000001,
        };
    };

    struct TIM1_SMCR {
        static constexpr uint32_t address = 0x40012c08;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM1_DIER {
        static constexpr uint32_t address = 0x40012c0c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            COMDE = 0x00002000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
            BIE   = 0x00000080,
            COMIE = 0x00000020,
        };
    };

    struct TIM1_SR {
        static constexpr uint32_t address = 0x40012c10;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            BIF   = 0x00000080,
            TIF   = 0x00000040,
            COMIF = 0x00000020,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM1_EGR {
        static constexpr uint32_t address = 0x40012c14;
        enum bits : uint32_t {
            BG   = 0x00000080,
            TG   = 0x00000040,
            COMG = 0x00000020,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM1_CCMR1_Output {
        static constexpr uint32_t address = 0x40012c18;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM1_CCMR1_Input {
        static constexpr uint32_t address = 0x40012c18;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PCS0 = 0x00000400,
            IC2PCS1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            ICPCS0  = 0x00000004,
            ICPCS1  = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM1_CCMR2_Output {
        static constexpr uint32_t address = 0x40012c1c;
        enum bits : uint32_t {
            OC4CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM1_CCMR2_Input {
        static constexpr uint32_t address = 0x40012c1c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM1_CCER {
        static constexpr uint32_t address = 0x40012c20;
        enum bits : uint32_t {
            CC4P  = 0x00002000,
            CC4E  = 0x00001000,
            CC3NP = 0x00000800,
            CC3NE = 0x00000400,
            CC3P  = 0x00000200,
            CC3E  = 0x00000100,
            CC2NP = 0x00000080,
            CC2NE = 0x00000040,
            CC2P  = 0x00000020,
            CC2E  = 0x00000010,
            CC1NP = 0x00000008,
            CC1NE = 0x00000004,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM1_CNT {
        static constexpr uint32_t address = 0x40012c24;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM1_PSC {
        static constexpr uint32_t address = 0x40012c28;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM1_ARR {
        static constexpr uint32_t address = 0x40012c2c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM1_CCR1 {
        static constexpr uint32_t address = 0x40012c34;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM1_CCR2 {
        static constexpr uint32_t address = 0x40012c38;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM1_CCR3 {
        static constexpr uint32_t address = 0x40012c3c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM1_CCR4 {
        static constexpr uint32_t address = 0x40012c40;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM1_DCR {
        static constexpr uint32_t address = 0x40012c48;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM1_DMAR {
        static constexpr uint32_t address = 0x40012c4c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM1_RCR {
        static constexpr uint32_t address = 0x40012c30;
        enum bits : uint32_t {
            REP0 = 0x00000001,
            REP1 = 0x00000002,
            REP2 = 0x00000004,
            REP3 = 0x00000008,
            REP4 = 0x00000010,
            REP5 = 0x00000020,
            REP6 = 0x00000040,
            REP7 = 0x00000080,
        };
    };

    struct TIM1_BDTR {
        static constexpr uint32_t address = 0x40012c44;
        enum bits : uint32_t {
            MOE   = 0x00008000,
            AOE   = 0x00004000,
            BKP   = 0x00002000,
            BKE   = 0x00001000,
            OSSR  = 0x00000800,
            OSSI  = 0x00000400,
            LOCK0 = 0x00000100,
            LOCK1 = 0x00000200,
            DTG0  = 0x00000001,
            DTG1  = 0x00000002,
            DTG2  = 0x00000004,
            DTG3  = 0x00000008,
            DTG4  = 0x00000010,
            DTG5  = 0x00000020,
            DTG6  = 0x00000040,
            DTG7  = 0x00000080,
        };
    };

    struct TIM8_CR1 {
        static constexpr uint32_t address = 0x40013400;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM8_CR2 {
        static constexpr uint32_t address = 0x40013404;
        enum bits : uint32_t {
            OIS4  = 0x00004000,
            OIS3N = 0x00002000,
            OIS3  = 0x00001000,
            OIS2N = 0x00000800,
            OIS2  = 0x00000400,
            OIS1N = 0x00000200,
            OIS1  = 0x00000100,
            TI1S  = 0x00000080,
            MMS0  = 0x00000010,
            MMS1  = 0x00000020,
            MMS2  = 0x00000040,
            CCDS  = 0x00000008,
            CCUS  = 0x00000004,
            CCPC  = 0x00000001,
        };
    };

    struct TIM8_SMCR {
        static constexpr uint32_t address = 0x40013408;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM8_DIER {
        static constexpr uint32_t address = 0x4001340c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            COMDE = 0x00002000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
            BIE   = 0x00000080,
            COMIE = 0x00000020,
        };
    };

    struct TIM8_SR {
        static constexpr uint32_t address = 0x40013410;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            BIF   = 0x00000080,
            TIF   = 0x00000040,
            COMIF = 0x00000020,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM8_EGR {
        static constexpr uint32_t address = 0x40013414;
        enum bits : uint32_t {
            BG   = 0x00000080,
            TG   = 0x00000040,
            COMG = 0x00000020,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM8_CCMR1_Output {
        static constexpr uint32_t address = 0x40013418;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM8_CCMR1_Input {
        static constexpr uint32_t address = 0x40013418;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PCS0 = 0x00000400,
            IC2PCS1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            ICPCS0  = 0x00000004,
            ICPCS1  = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM8_CCMR2_Output {
        static constexpr uint32_t address = 0x4001341c;
        enum bits : uint32_t {
            OC4CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM8_CCMR2_Input {
        static constexpr uint32_t address = 0x4001341c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM8_CCER {
        static constexpr uint32_t address = 0x40013420;
        enum bits : uint32_t {
            CC4P  = 0x00002000,
            CC4E  = 0x00001000,
            CC3NP = 0x00000800,
            CC3NE = 0x00000400,
            CC3P  = 0x00000200,
            CC3E  = 0x00000100,
            CC2NP = 0x00000080,
            CC2NE = 0x00000040,
            CC2P  = 0x00000020,
            CC2E  = 0x00000010,
            CC1NP = 0x00000008,
            CC1NE = 0x00000004,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM8_CNT {
        static constexpr uint32_t address = 0x40013424;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM8_PSC {
        static constexpr uint32_t address = 0x40013428;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM8_ARR {
        static constexpr uint32_t address = 0x4001342c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM8_CCR1 {
        static constexpr uint32_t address = 0x40013434;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM8_CCR2 {
        static constexpr uint32_t address = 0x40013438;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM8_CCR3 {
        static constexpr uint32_t address = 0x4001343c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM8_CCR4 {
        static constexpr uint32_t address = 0x40013440;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM8_DCR {
        static constexpr uint32_t address = 0x40013448;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM8_DMAR {
        static constexpr uint32_t address = 0x4001344c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM8_RCR {
        static constexpr uint32_t address = 0x40013430;
        enum bits : uint32_t {
            REP0 = 0x00000001,
            REP1 = 0x00000002,
            REP2 = 0x00000004,
            REP3 = 0x00000008,
            REP4 = 0x00000010,
            REP5 = 0x00000020,
            REP6 = 0x00000040,
            REP7 = 0x00000080,
        };
    };

    struct TIM8_BDTR {
        static constexpr uint32_t address = 0x40013444;
        enum bits : uint32_t {
            MOE   = 0x00008000,
            AOE   = 0x00004000,
            BKP   = 0x00002000,
            BKE   = 0x00001000,
            OSSR  = 0x00000800,
            OSSI  = 0x00000400,
            LOCK0 = 0x00000100,
            LOCK1 = 0x00000200,
            DTG0  = 0x00000001,
            DTG1  = 0x00000002,
            DTG2  = 0x00000004,
            DTG3  = 0x00000008,
            DTG4  = 0x00000010,
            DTG5  = 0x00000020,
            DTG6  = 0x00000040,
            DTG7  = 0x00000080,
        };
    };

    struct TIM2_CR1 {
        static constexpr uint32_t address = 0x40000000;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM2_CR2 {
        static constexpr uint32_t address = 0x40000004;
        enum bits : uint32_t {
            TI1S = 0x00000080,
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
            CCDS = 0x00000008,
        };
    };

    struct TIM2_SMCR {
        static constexpr uint32_t address = 0x40000008;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM2_DIER {
        static constexpr uint32_t address = 0x4000000c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM2_SR {
        static constexpr uint32_t address = 0x40000010;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM2_EGR {
        static constexpr uint32_t address = 0x40000014;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM2_CCMR1_Output {
        static constexpr uint32_t address = 0x40000018;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM2_CCMR1_Input {
        static constexpr uint32_t address = 0x40000018;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM2_CCMR2_Output {
        static constexpr uint32_t address = 0x4000001c;
        enum bits : uint32_t {
            O24CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM2_CCMR2_Input {
        static constexpr uint32_t address = 0x4000001c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM2_CCER {
        static constexpr uint32_t address = 0x40000020;
        enum bits : uint32_t {
            CC4P = 0x00002000,
            CC4E = 0x00001000,
            CC3P = 0x00000200,
            CC3E = 0x00000100,
            CC2P = 0x00000020,
            CC2E = 0x00000010,
            CC1P = 0x00000002,
            CC1E = 0x00000001,
        };
    };

    struct TIM2_CNT {
        static constexpr uint32_t address = 0x40000024;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM2_PSC {
        static constexpr uint32_t address = 0x40000028;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM2_ARR {
        static constexpr uint32_t address = 0x4000002c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM2_CCR1 {
        static constexpr uint32_t address = 0x40000034;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM2_CCR2 {
        static constexpr uint32_t address = 0x40000038;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM2_CCR3 {
        static constexpr uint32_t address = 0x4000003c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM2_CCR4 {
        static constexpr uint32_t address = 0x40000040;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM2_DCR {
        static constexpr uint32_t address = 0x40000048;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM2_DMAR {
        static constexpr uint32_t address = 0x4000004c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM3_CR1 {
        static constexpr uint32_t address = 0x40000400;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM3_CR2 {
        static constexpr uint32_t address = 0x40000404;
        enum bits : uint32_t {
            TI1S = 0x00000080,
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
            CCDS = 0x00000008,
        };
    };

    struct TIM3_SMCR {
        static constexpr uint32_t address = 0x40000408;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM3_DIER {
        static constexpr uint32_t address = 0x4000040c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM3_SR {
        static constexpr uint32_t address = 0x40000410;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM3_EGR {
        static constexpr uint32_t address = 0x40000414;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM3_CCMR1_Output {
        static constexpr uint32_t address = 0x40000418;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM3_CCMR1_Input {
        static constexpr uint32_t address = 0x40000418;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM3_CCMR2_Output {
        static constexpr uint32_t address = 0x4000041c;
        enum bits : uint32_t {
            O24CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM3_CCMR2_Input {
        static constexpr uint32_t address = 0x4000041c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM3_CCER {
        static constexpr uint32_t address = 0x40000420;
        enum bits : uint32_t {
            CC4P = 0x00002000,
            CC4E = 0x00001000,
            CC3P = 0x00000200,
            CC3E = 0x00000100,
            CC2P = 0x00000020,
            CC2E = 0x00000010,
            CC1P = 0x00000002,
            CC1E = 0x00000001,
        };
    };

    struct TIM3_CNT {
        static constexpr uint32_t address = 0x40000424;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM3_PSC {
        static constexpr uint32_t address = 0x40000428;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM3_ARR {
        static constexpr uint32_t address = 0x4000042c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM3_CCR1 {
        static constexpr uint32_t address = 0x40000434;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM3_CCR2 {
        static constexpr uint32_t address = 0x40000438;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM3_CCR3 {
        static constexpr uint32_t address = 0x4000043c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM3_CCR4 {
        static constexpr uint32_t address = 0x40000440;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM3_DCR {
        static constexpr uint32_t address = 0x40000448;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM3_DMAR {
        static constexpr uint32_t address = 0x4000044c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM4_CR1 {
        static constexpr uint32_t address = 0x40000800;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM4_CR2 {
        static constexpr uint32_t address = 0x40000804;
        enum bits : uint32_t {
            TI1S = 0x00000080,
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
            CCDS = 0x00000008,
        };
    };

    struct TIM4_SMCR {
        static constexpr uint32_t address = 0x40000808;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM4_DIER {
        static constexpr uint32_t address = 0x4000080c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM4_SR {
        static constexpr uint32_t address = 0x40000810;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM4_EGR {
        static constexpr uint32_t address = 0x40000814;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM4_CCMR1_Output {
        static constexpr uint32_t address = 0x40000818;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM4_CCMR1_Input {
        static constexpr uint32_t address = 0x40000818;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM4_CCMR2_Output {
        static constexpr uint32_t address = 0x4000081c;
        enum bits : uint32_t {
            O24CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM4_CCMR2_Input {
        static constexpr uint32_t address = 0x4000081c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM4_CCER {
        static constexpr uint32_t address = 0x40000820;
        enum bits : uint32_t {
            CC4P = 0x00002000,
            CC4E = 0x00001000,
            CC3P = 0x00000200,
            CC3E = 0x00000100,
            CC2P = 0x00000020,
            CC2E = 0x00000010,
            CC1P = 0x00000002,
            CC1E = 0x00000001,
        };
    };

    struct TIM4_CNT {
        static constexpr uint32_t address = 0x40000824;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM4_PSC {
        static constexpr uint32_t address = 0x40000828;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM4_ARR {
        static constexpr uint32_t address = 0x4000082c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM4_CCR1 {
        static constexpr uint32_t address = 0x40000834;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM4_CCR2 {
        static constexpr uint32_t address = 0x40000838;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM4_CCR3 {
        static constexpr uint32_t address = 0x4000083c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM4_CCR4 {
        static constexpr uint32_t address = 0x40000840;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM4_DCR {
        static constexpr uint32_t address = 0x40000848;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM4_DMAR {
        static constexpr uint32_t address = 0x4000084c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM5_CR1 {
        static constexpr uint32_t address = 0x40000c00;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            CMS0 = 0x00000020,
            CMS1 = 0x00000040,
            DIR  = 0x00000010,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM5_CR2 {
        static constexpr uint32_t address = 0x40000c04;
        enum bits : uint32_t {
            TI1S = 0x00000080,
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
            CCDS = 0x00000008,
        };
    };

    struct TIM5_SMCR {
        static constexpr uint32_t address = 0x40000c08;
        enum bits : uint32_t {
            ETP   = 0x00008000,
            ECE   = 0x00004000,
            ETPS0 = 0x00001000,
            ETPS1 = 0x00002000,
            ETF0  = 0x00000100,
            ETF1  = 0x00000200,
            ETF2  = 0x00000400,
            ETF3  = 0x00000800,
            MSM   = 0x00000080,
            TS0   = 0x00000010,
            TS1   = 0x00000020,
            TS2   = 0x00000040,
            SMS0  = 0x00000001,
            SMS1  = 0x00000002,
            SMS2  = 0x00000004,
        };
    };

    struct TIM5_DIER {
        static constexpr uint32_t address = 0x40000c0c;
        enum bits : uint32_t {
            TDE   = 0x00004000,
            CC4DE = 0x00001000,
            CC3DE = 0x00000800,
            CC2DE = 0x00000400,
            CC1DE = 0x00000200,
            UDE   = 0x00000100,
            TIE   = 0x00000040,
            CC4IE = 0x00000010,
            CC3IE = 0x00000008,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM5_SR {
        static constexpr uint32_t address = 0x40000c10;
        enum bits : uint32_t {
            CC4OF = 0x00001000,
            CC3OF = 0x00000800,
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC4IF = 0x00000010,
            CC3IF = 0x00000008,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM5_EGR {
        static constexpr uint32_t address = 0x40000c14;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC4G = 0x00000010,
            CC3G = 0x00000008,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM5_CCMR1_Output {
        static constexpr uint32_t address = 0x40000c18;
        enum bits : uint32_t {
            OC2CE = 0x00008000,
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1CE = 0x00000080,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM5_CCMR1_Input {
        static constexpr uint32_t address = 0x40000c18;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM5_CCMR2_Output {
        static constexpr uint32_t address = 0x40000c1c;
        enum bits : uint32_t {
            O24CE = 0x00008000,
            OC4M0 = 0x00001000,
            OC4M1 = 0x00002000,
            OC4M2 = 0x00004000,
            OC4PE = 0x00000800,
            OC4FE = 0x00000400,
            CC4S0 = 0x00000100,
            CC4S1 = 0x00000200,
            OC3CE = 0x00000080,
            OC3M0 = 0x00000010,
            OC3M1 = 0x00000020,
            OC3M2 = 0x00000040,
            OC3PE = 0x00000008,
            OC3FE = 0x00000004,
            CC3S0 = 0x00000001,
            CC3S1 = 0x00000002,
        };
    };

    struct TIM5_CCMR2_Input {
        static constexpr uint32_t address = 0x40000c1c;
        enum bits : uint32_t {
            IC4F0   = 0x00001000,
            IC4F1   = 0x00002000,
            IC4F2   = 0x00004000,
            IC4F3   = 0x00008000,
            IC4PSC0 = 0x00000400,
            IC4PSC1 = 0x00000800,
            CC4S0   = 0x00000100,
            CC4S1   = 0x00000200,
            IC3F0   = 0x00000010,
            IC3F1   = 0x00000020,
            IC3F2   = 0x00000040,
            IC3F3   = 0x00000080,
            IC3PSC0 = 0x00000004,
            IC3PSC1 = 0x00000008,
            CC3S0   = 0x00000001,
            CC3S1   = 0x00000002,
        };
    };

    struct TIM5_CCER {
        static constexpr uint32_t address = 0x40000c20;
        enum bits : uint32_t {
            CC4P = 0x00002000,
            CC4E = 0x00001000,
            CC3P = 0x00000200,
            CC3E = 0x00000100,
            CC2P = 0x00000020,
            CC2E = 0x00000010,
            CC1P = 0x00000002,
            CC1E = 0x00000001,
        };
    };

    struct TIM5_CNT {
        static constexpr uint32_t address = 0x40000c24;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM5_PSC {
        static constexpr uint32_t address = 0x40000c28;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM5_ARR {
        static constexpr uint32_t address = 0x40000c2c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM5_CCR1 {
        static constexpr uint32_t address = 0x40000c34;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM5_CCR2 {
        static constexpr uint32_t address = 0x40000c38;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM5_CCR3 {
        static constexpr uint32_t address = 0x40000c3c;
        enum bits : uint32_t {
            CCR30  = 0x00000001,
            CCR31  = 0x00000002,
            CCR32  = 0x00000004,
            CCR33  = 0x00000008,
            CCR34  = 0x00000010,
            CCR35  = 0x00000020,
            CCR36  = 0x00000040,
            CCR37  = 0x00000080,
            CCR38  = 0x00000100,
            CCR39  = 0x00000200,
            CCR310 = 0x00000400,
            CCR311 = 0x00000800,
            CCR312 = 0x00001000,
            CCR313 = 0x00002000,
            CCR314 = 0x00004000,
            CCR315 = 0x00008000,
        };
    };

    struct TIM5_CCR4 {
        static constexpr uint32_t address = 0x40000c40;
        enum bits : uint32_t {
            CCR40  = 0x00000001,
            CCR41  = 0x00000002,
            CCR42  = 0x00000004,
            CCR43  = 0x00000008,
            CCR44  = 0x00000010,
            CCR45  = 0x00000020,
            CCR46  = 0x00000040,
            CCR47  = 0x00000080,
            CCR48  = 0x00000100,
            CCR49  = 0x00000200,
            CCR410 = 0x00000400,
            CCR411 = 0x00000800,
            CCR412 = 0x00001000,
            CCR413 = 0x00002000,
            CCR414 = 0x00004000,
            CCR415 = 0x00008000,
        };
    };

    struct TIM5_DCR {
        static constexpr uint32_t address = 0x40000c48;
        enum bits : uint32_t {
            DBL0 = 0x00000100,
            DBL1 = 0x00000200,
            DBL2 = 0x00000400,
            DBL3 = 0x00000800,
            DBL4 = 0x00001000,
            DBA0 = 0x00000001,
            DBA1 = 0x00000002,
            DBA2 = 0x00000004,
            DBA3 = 0x00000008,
            DBA4 = 0x00000010,
        };
    };

    struct TIM5_DMAR {
        static constexpr uint32_t address = 0x40000c4c;
        enum bits : uint32_t {
            DMAB0  = 0x00000001,
            DMAB1  = 0x00000002,
            DMAB2  = 0x00000004,
            DMAB3  = 0x00000008,
            DMAB4  = 0x00000010,
            DMAB5  = 0x00000020,
            DMAB6  = 0x00000040,
            DMAB7  = 0x00000080,
            DMAB8  = 0x00000100,
            DMAB9  = 0x00000200,
            DMAB10 = 0x00000400,
            DMAB11 = 0x00000800,
            DMAB12 = 0x00001000,
            DMAB13 = 0x00002000,
            DMAB14 = 0x00004000,
            DMAB15 = 0x00008000,
        };
    };

    struct TIM9_CR1 {
        static constexpr uint32_t address = 0x40014c00;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM9_CR2 {
        static constexpr uint32_t address = 0x40014c04;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM9_SMCR {
        static constexpr uint32_t address = 0x40014c08;
        enum bits : uint32_t {
            MSM  = 0x00000080,
            TS0  = 0x00000010,
            TS1  = 0x00000020,
            TS2  = 0x00000040,
            SMS0 = 0x00000001,
            SMS1 = 0x00000002,
            SMS2 = 0x00000004,
        };
    };

    struct TIM9_DIER {
        static constexpr uint32_t address = 0x40014c0c;
        enum bits : uint32_t {
            TIE   = 0x00000040,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM9_SR {
        static constexpr uint32_t address = 0x40014c10;
        enum bits : uint32_t {
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM9_EGR {
        static constexpr uint32_t address = 0x40014c14;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM9_CCMR1_Output {
        static constexpr uint32_t address = 0x40014c18;
        enum bits : uint32_t {
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM9_CCMR1_Input {
        static constexpr uint32_t address = 0x40014c18;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM9_CCER {
        static constexpr uint32_t address = 0x40014c20;
        enum bits : uint32_t {
            CC2NP = 0x00000080,
            CC2P  = 0x00000020,
            CC2E  = 0x00000010,
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM9_CNT {
        static constexpr uint32_t address = 0x40014c24;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM9_PSC {
        static constexpr uint32_t address = 0x40014c28;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM9_ARR {
        static constexpr uint32_t address = 0x40014c2c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM9_CCR1 {
        static constexpr uint32_t address = 0x40014c34;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM9_CCR2 {
        static constexpr uint32_t address = 0x40014c38;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM12_CR1 {
        static constexpr uint32_t address = 0x40001800;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM12_CR2 {
        static constexpr uint32_t address = 0x40001804;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM12_SMCR {
        static constexpr uint32_t address = 0x40001808;
        enum bits : uint32_t {
            MSM  = 0x00000080,
            TS0  = 0x00000010,
            TS1  = 0x00000020,
            TS2  = 0x00000040,
            SMS0 = 0x00000001,
            SMS1 = 0x00000002,
            SMS2 = 0x00000004,
        };
    };

    struct TIM12_DIER {
        static constexpr uint32_t address = 0x4000180c;
        enum bits : uint32_t {
            TIE   = 0x00000040,
            CC2IE = 0x00000004,
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM12_SR {
        static constexpr uint32_t address = 0x40001810;
        enum bits : uint32_t {
            CC2OF = 0x00000400,
            CC1OF = 0x00000200,
            TIF   = 0x00000040,
            CC2IF = 0x00000004,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM12_EGR {
        static constexpr uint32_t address = 0x40001814;
        enum bits : uint32_t {
            TG   = 0x00000040,
            CC2G = 0x00000004,
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM12_CCMR1_Output {
        static constexpr uint32_t address = 0x40001818;
        enum bits : uint32_t {
            OC2M0 = 0x00001000,
            OC2M1 = 0x00002000,
            OC2M2 = 0x00004000,
            OC2PE = 0x00000800,
            OC2FE = 0x00000400,
            CC2S0 = 0x00000100,
            CC2S1 = 0x00000200,
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            OC1FE = 0x00000004,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM12_CCMR1_Input {
        static constexpr uint32_t address = 0x40001818;
        enum bits : uint32_t {
            IC2F0   = 0x00001000,
            IC2F1   = 0x00002000,
            IC2F2   = 0x00004000,
            IC2F3   = 0x00008000,
            IC2PSC0 = 0x00000400,
            IC2PSC1 = 0x00000800,
            CC2S0   = 0x00000100,
            CC2S1   = 0x00000200,
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM12_CCER {
        static constexpr uint32_t address = 0x40001820;
        enum bits : uint32_t {
            CC2NP = 0x00000080,
            CC2P  = 0x00000020,
            CC2E  = 0x00000010,
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM12_CNT {
        static constexpr uint32_t address = 0x40001824;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM12_PSC {
        static constexpr uint32_t address = 0x40001828;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM12_ARR {
        static constexpr uint32_t address = 0x4000182c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM12_CCR1 {
        static constexpr uint32_t address = 0x40001834;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM12_CCR2 {
        static constexpr uint32_t address = 0x40001838;
        enum bits : uint32_t {
            CCR20  = 0x00000001,
            CCR21  = 0x00000002,
            CCR22  = 0x00000004,
            CCR23  = 0x00000008,
            CCR24  = 0x00000010,
            CCR25  = 0x00000020,
            CCR26  = 0x00000040,
            CCR27  = 0x00000080,
            CCR28  = 0x00000100,
            CCR29  = 0x00000200,
            CCR210 = 0x00000400,
            CCR211 = 0x00000800,
            CCR212 = 0x00001000,
            CCR213 = 0x00002000,
            CCR214 = 0x00004000,
            CCR215 = 0x00008000,
        };
    };

    struct TIM10_CR1 {
        static constexpr uint32_t address = 0x40015000;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM10_CR2 {
        static constexpr uint32_t address = 0x40015004;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM10_DIER {
        static constexpr uint32_t address = 0x4001500c;
        enum bits : uint32_t {
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM10_SR {
        static constexpr uint32_t address = 0x40015010;
        enum bits : uint32_t {
            CC1OF = 0x00000200,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM10_EGR {
        static constexpr uint32_t address = 0x40015014;
        enum bits : uint32_t {
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM10_CCMR1_Output {
        static constexpr uint32_t address = 0x40015018;
        enum bits : uint32_t {
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM10_CCMR1_Input {
        static constexpr uint32_t address = 0x40015018;
        enum bits : uint32_t {
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM10_CCER {
        static constexpr uint32_t address = 0x40015020;
        enum bits : uint32_t {
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM10_CNT {
        static constexpr uint32_t address = 0x40015024;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM10_PSC {
        static constexpr uint32_t address = 0x40015028;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM10_ARR {
        static constexpr uint32_t address = 0x4001502c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM10_CCR1 {
        static constexpr uint32_t address = 0x40015034;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM11_CR1 {
        static constexpr uint32_t address = 0x40015400;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM11_CR2 {
        static constexpr uint32_t address = 0x40015404;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM11_DIER {
        static constexpr uint32_t address = 0x4001540c;
        enum bits : uint32_t {
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM11_SR {
        static constexpr uint32_t address = 0x40015410;
        enum bits : uint32_t {
            CC1OF = 0x00000200,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM11_EGR {
        static constexpr uint32_t address = 0x40015414;
        enum bits : uint32_t {
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM11_CCMR1_Output {
        static constexpr uint32_t address = 0x40015418;
        enum bits : uint32_t {
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM11_CCMR1_Input {
        static constexpr uint32_t address = 0x40015418;
        enum bits : uint32_t {
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM11_CCER {
        static constexpr uint32_t address = 0x40015420;
        enum bits : uint32_t {
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM11_CNT {
        static constexpr uint32_t address = 0x40015424;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM11_PSC {
        static constexpr uint32_t address = 0x40015428;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM11_ARR {
        static constexpr uint32_t address = 0x4001542c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM11_CCR1 {
        static constexpr uint32_t address = 0x40015434;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM13_CR1 {
        static constexpr uint32_t address = 0x40001c00;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM13_CR2 {
        static constexpr uint32_t address = 0x40001c04;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM13_DIER {
        static constexpr uint32_t address = 0x40001c0c;
        enum bits : uint32_t {
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM13_SR {
        static constexpr uint32_t address = 0x40001c10;
        enum bits : uint32_t {
            CC1OF = 0x00000200,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM13_EGR {
        static constexpr uint32_t address = 0x40001c14;
        enum bits : uint32_t {
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM13_CCMR1_Output {
        static constexpr uint32_t address = 0x40001c18;
        enum bits : uint32_t {
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM13_CCMR1_Input {
        static constexpr uint32_t address = 0x40001c18;
        enum bits : uint32_t {
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM13_CCER {
        static constexpr uint32_t address = 0x40001c20;
        enum bits : uint32_t {
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM13_CNT {
        static constexpr uint32_t address = 0x40001c24;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM13_PSC {
        static constexpr uint32_t address = 0x40001c28;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM13_ARR {
        static constexpr uint32_t address = 0x40001c2c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM13_CCR1 {
        static constexpr uint32_t address = 0x40001c34;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM14_CR1 {
        static constexpr uint32_t address = 0x40002000;
        enum bits : uint32_t {
            CKD0 = 0x00000100,
            CKD1 = 0x00000200,
            ARPE = 0x00000080,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM14_CR2 {
        static constexpr uint32_t address = 0x40002004;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM14_DIER {
        static constexpr uint32_t address = 0x4000200c;
        enum bits : uint32_t {
            CC1IE = 0x00000002,
            UIE   = 0x00000001,
        };
    };

    struct TIM14_SR {
        static constexpr uint32_t address = 0x40002010;
        enum bits : uint32_t {
            CC1OF = 0x00000200,
            CC1IF = 0x00000002,
            UIF   = 0x00000001,
        };
    };

    struct TIM14_EGR {
        static constexpr uint32_t address = 0x40002014;
        enum bits : uint32_t {
            CC1G = 0x00000002,
            UG   = 0x00000001,
        };
    };

    struct TIM14_CCMR1_Output {
        static constexpr uint32_t address = 0x40002018;
        enum bits : uint32_t {
            OC1M0 = 0x00000010,
            OC1M1 = 0x00000020,
            OC1M2 = 0x00000040,
            OC1PE = 0x00000008,
            CC1S0 = 0x00000001,
            CC1S1 = 0x00000002,
        };
    };

    struct TIM14_CCMR1_Input {
        static constexpr uint32_t address = 0x40002018;
        enum bits : uint32_t {
            IC1F0   = 0x00000010,
            IC1F1   = 0x00000020,
            IC1F2   = 0x00000040,
            IC1F3   = 0x00000080,
            IC1PSC0 = 0x00000004,
            IC1PSC1 = 0x00000008,
            CC1S0   = 0x00000001,
            CC1S1   = 0x00000002,
        };
    };

    struct TIM14_CCER {
        static constexpr uint32_t address = 0x40002020;
        enum bits : uint32_t {
            CC1NP = 0x00000008,
            CC1P  = 0x00000002,
            CC1E  = 0x00000001,
        };
    };

    struct TIM14_CNT {
        static constexpr uint32_t address = 0x40002024;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM14_PSC {
        static constexpr uint32_t address = 0x40002028;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM14_ARR {
        static constexpr uint32_t address = 0x4000202c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM14_CCR1 {
        static constexpr uint32_t address = 0x40002034;
        enum bits : uint32_t {
            CCR10  = 0x00000001,
            CCR11  = 0x00000002,
            CCR12  = 0x00000004,
            CCR13  = 0x00000008,
            CCR14  = 0x00000010,
            CCR15  = 0x00000020,
            CCR16  = 0x00000040,
            CCR17  = 0x00000080,
            CCR18  = 0x00000100,
            CCR19  = 0x00000200,
            CCR110 = 0x00000400,
            CCR111 = 0x00000800,
            CCR112 = 0x00001000,
            CCR113 = 0x00002000,
            CCR114 = 0x00004000,
            CCR115 = 0x00008000,
        };
    };

    struct TIM6_CR1 {
        static constexpr uint32_t address = 0x40001000;
        enum bits : uint32_t {
            ARPE = 0x00000080,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM6_CR2 {
        static constexpr uint32_t address = 0x40001004;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM6_DIER {
        static constexpr uint32_t address = 0x4000100c;
        enum bits : uint32_t {
            UDE = 0x00000100,
            UIE = 0x00000001,
        };
    };

    struct TIM6_SR {
        static constexpr uint32_t address = 0x40001010;
        enum bits : uint32_t {
            UIF = 0x00000001,
        };
    };

    struct TIM6_EGR {
        static constexpr uint32_t address = 0x40001014;
        enum bits : uint32_t {
            UG = 0x00000001,
        };
    };

    struct TIM6_CNT {
        static constexpr uint32_t address = 0x40001024;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM6_PSC {
        static constexpr uint32_t address = 0x40001028;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM6_ARR {
        static constexpr uint32_t address = 0x4000102c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct TIM7_CR1 {
        static constexpr uint32_t address = 0x40001400;
        enum bits : uint32_t {
            ARPE = 0x00000080,
            OPM  = 0x00000008,
            URS  = 0x00000004,
            UDIS = 0x00000002,
            CEN  = 0x00000001,
        };
    };

    struct TIM7_CR2 {
        static constexpr uint32_t address = 0x40001404;
        enum bits : uint32_t {
            MMS0 = 0x00000010,
            MMS1 = 0x00000020,
            MMS2 = 0x00000040,
        };
    };

    struct TIM7_DIER {
        static constexpr uint32_t address = 0x4000140c;
        enum bits : uint32_t {
            UDE = 0x00000100,
            UIE = 0x00000001,
        };
    };

    struct TIM7_SR {
        static constexpr uint32_t address = 0x40001410;
        enum bits : uint32_t {
            UIF = 0x00000001,
        };
    };

    struct TIM7_EGR {
        static constexpr uint32_t address = 0x40001414;
        enum bits : uint32_t {
            UG = 0x00000001,
        };
    };

    struct TIM7_CNT {
        static constexpr uint32_t address = 0x40001424;
        enum bits : uint32_t {
            CNT0  = 0x00000001,
            CNT1  = 0x00000002,
            CNT2  = 0x00000004,
            CNT3  = 0x00000008,
            CNT4  = 0x00000010,
            CNT5  = 0x00000020,
            CNT6  = 0x00000040,
            CNT7  = 0x00000080,
            CNT8  = 0x00000100,
            CNT9  = 0x00000200,
            CNT10 = 0x00000400,
            CNT11 = 0x00000800,
            CNT12 = 0x00001000,
            CNT13 = 0x00002000,
            CNT14 = 0x00004000,
            CNT15 = 0x00008000,
        };
    };

    struct TIM7_PSC {
        static constexpr uint32_t address = 0x40001428;
        enum bits : uint32_t {
            PSC0  = 0x00000001,
            PSC1  = 0x00000002,
            PSC2  = 0x00000004,
            PSC3  = 0x00000008,
            PSC4  = 0x00000010,
            PSC5  = 0x00000020,
            PSC6  = 0x00000040,
            PSC7  = 0x00000080,
            PSC8  = 0x00000100,
            PSC9  = 0x00000200,
            PSC10 = 0x00000400,
            PSC11 = 0x00000800,
            PSC12 = 0x00001000,
            PSC13 = 0x00002000,
            PSC14 = 0x00004000,
            PSC15 = 0x00008000,
        };
    };

    struct TIM7_ARR {
        static constexpr uint32_t address = 0x4000142c;
        enum bits : uint32_t {
            ARR0  = 0x00000001,
            ARR1  = 0x00000002,
            ARR2  = 0x00000004,
            ARR3  = 0x00000008,
            ARR4  = 0x00000010,
            ARR5  = 0x00000020,
            ARR6  = 0x00000040,
            ARR7  = 0x00000080,
            ARR8  = 0x00000100,
            ARR9  = 0x00000200,
            ARR10 = 0x00000400,
            ARR11 = 0x00000800,
            ARR12 = 0x00001000,
            ARR13 = 0x00002000,
            ARR14 = 0x00004000,
            ARR15 = 0x00008000,
        };
    };

    struct I2C1_CR1 {
        static constexpr uint32_t address = 0x40005400;
        enum bits : uint32_t {
            SWRST     = 0x00008000,
            ALERT     = 0x00002000,
            PEC       = 0x00001000,
            POS       = 0x00000800,
            ACK       = 0x00000400,
            STOP      = 0x00000200,
            START     = 0x00000100,
            NOSTRETCH = 0x00000080,
            ENGC      = 0x00000040,
            ENPEC     = 0x00000020,
            ENARP     = 0x00000010,
            SMBTYPE   = 0x00000008,
            SMBUS     = 0x00000002,
            PE        = 0x00000001,
        };
    };

    struct I2C1_CR2 {
        static constexpr uint32_t address = 0x40005404;
        enum bits : uint32_t {
            LAST    = 0x00001000,
            DMAEN   = 0x00000800,
            ITBUFEN = 0x00000400,
            ITEVTEN = 0x00000200,
            ITERREN = 0x00000100,
            FREQ0   = 0x00000001,
            FREQ1   = 0x00000002,
            FREQ2   = 0x00000004,
            FREQ3   = 0x00000008,
            FREQ4   = 0x00000010,
            FREQ5   = 0x00000020,
        };
    };

    struct I2C1_OAR1 {
        static constexpr uint32_t address = 0x40005408;
        enum bits : uint32_t {
            ADDMODE = 0x00008000,
            ADD100  = 0x00000100,
            ADD101  = 0x00000200,
            ADD70   = 0x00000002,
            ADD71   = 0x00000004,
            ADD72   = 0x00000008,
            ADD73   = 0x00000010,
            ADD74   = 0x00000020,
            ADD75   = 0x00000040,
            ADD76   = 0x00000080,
            ADD0    = 0x00000001,
        };
    };

    struct I2C1_OAR2 {
        static constexpr uint32_t address = 0x4000540c;
        enum bits : uint32_t {
            ADD20  = 0x00000002,
            ADD21  = 0x00000004,
            ADD22  = 0x00000008,
            ADD23  = 0x00000010,
            ADD24  = 0x00000020,
            ADD25  = 0x00000040,
            ADD26  = 0x00000080,
            ENDUAL = 0x00000001,
        };
    };

    struct I2C1_DR {
        static constexpr uint32_t address = 0x40005410;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
        };
    };

    struct I2C1_SR1 {
        static constexpr uint32_t address = 0x40005414;
        enum bits : uint32_t {
            SMBALERT = 0x00008000,
            TIMEOUT  = 0x00004000,
            PECERR   = 0x00001000,
            OVR      = 0x00000800,
            AF       = 0x00000400,
            ARLO     = 0x00000200,
            BERR     = 0x00000100,
            TxE      = 0x00000080,
            RxNE     = 0x00000040,
            STOPF    = 0x00000010,
            ADD10    = 0x00000008,
            BTF      = 0x00000004,
            ADDR     = 0x00000002,
            SB       = 0x00000001,
        };
    };

    struct I2C1_SR2 {
        static constexpr uint32_t address = 0x40005418;
        enum bits : uint32_t {
            PEC0       = 0x00000100,
            PEC1       = 0x00000200,
            PEC2       = 0x00000400,
            PEC3       = 0x00000800,
            PEC4       = 0x00001000,
            PEC5       = 0x00002000,
            PEC6       = 0x00004000,
            PEC7       = 0x00008000,
            DUALF      = 0x00000080,
            SMBHOST    = 0x00000040,
            SMBDEFAULT = 0x00000020,
            GENCALL    = 0x00000010,
            TRA        = 0x00000004,
            BUSY       = 0x00000002,
            MSL        = 0x00000001,
        };
    };

    struct I2C1_CCR {
        static constexpr uint32_t address = 0x4000541c;
        enum bits : uint32_t {
            F_S   = 0x00008000,
            DUTY  = 0x00004000,
            CCR0  = 0x00000001,
            CCR1  = 0x00000002,
            CCR2  = 0x00000004,
            CCR3  = 0x00000008,
            CCR4  = 0x00000010,
            CCR5  = 0x00000020,
            CCR6  = 0x00000040,
            CCR7  = 0x00000080,
            CCR8  = 0x00000100,
            CCR9  = 0x00000200,
            CCR10 = 0x00000400,
            CCR11 = 0x00000800,
        };
    };

    struct I2C1_TRISE {
        static constexpr uint32_t address = 0x40005420;
        enum bits : uint32_t {
            TRISE0 = 0x00000001,
            TRISE1 = 0x00000002,
            TRISE2 = 0x00000004,
            TRISE3 = 0x00000008,
            TRISE4 = 0x00000010,
            TRISE5 = 0x00000020,
        };
    };

    struct I2C2_CR1 {
        static constexpr uint32_t address = 0x40005800;
        enum bits : uint32_t {
            SWRST     = 0x00008000,
            ALERT     = 0x00002000,
            PEC       = 0x00001000,
            POS       = 0x00000800,
            ACK       = 0x00000400,
            STOP      = 0x00000200,
            START     = 0x00000100,
            NOSTRETCH = 0x00000080,
            ENGC      = 0x00000040,
            ENPEC     = 0x00000020,
            ENARP     = 0x00000010,
            SMBTYPE   = 0x00000008,
            SMBUS     = 0x00000002,
            PE        = 0x00000001,
        };
    };

    struct I2C2_CR2 {
        static constexpr uint32_t address = 0x40005804;
        enum bits : uint32_t {
            LAST    = 0x00001000,
            DMAEN   = 0x00000800,
            ITBUFEN = 0x00000400,
            ITEVTEN = 0x00000200,
            ITERREN = 0x00000100,
            FREQ0   = 0x00000001,
            FREQ1   = 0x00000002,
            FREQ2   = 0x00000004,
            FREQ3   = 0x00000008,
            FREQ4   = 0x00000010,
            FREQ5   = 0x00000020,
        };
    };

    struct I2C2_OAR1 {
        static constexpr uint32_t address = 0x40005808;
        enum bits : uint32_t {
            ADDMODE = 0x00008000,
            ADD100  = 0x00000100,
            ADD101  = 0x00000200,
            ADD70   = 0x00000002,
            ADD71   = 0x00000004,
            ADD72   = 0x00000008,
            ADD73   = 0x00000010,
            ADD74   = 0x00000020,
            ADD75   = 0x00000040,
            ADD76   = 0x00000080,
            ADD0    = 0x00000001,
        };
    };

    struct I2C2_OAR2 {
        static constexpr uint32_t address = 0x4000580c;
        enum bits : uint32_t {
            ADD20  = 0x00000002,
            ADD21  = 0x00000004,
            ADD22  = 0x00000008,
            ADD23  = 0x00000010,
            ADD24  = 0x00000020,
            ADD25  = 0x00000040,
            ADD26  = 0x00000080,
            ENDUAL = 0x00000001,
        };
    };

    struct I2C2_DR {
        static constexpr uint32_t address = 0x40005810;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
        };
    };

    struct I2C2_SR1 {
        static constexpr uint32_t address = 0x40005814;
        enum bits : uint32_t {
            SMBALERT = 0x00008000,
            TIMEOUT  = 0x00004000,
            PECERR   = 0x00001000,
            OVR      = 0x00000800,
            AF       = 0x00000400,
            ARLO     = 0x00000200,
            BERR     = 0x00000100,
            TxE      = 0x00000080,
            RxNE     = 0x00000040,
            STOPF    = 0x00000010,
            ADD10    = 0x00000008,
            BTF      = 0x00000004,
            ADDR     = 0x00000002,
            SB       = 0x00000001,
        };
    };

    struct I2C2_SR2 {
        static constexpr uint32_t address = 0x40005818;
        enum bits : uint32_t {
            PEC0       = 0x00000100,
            PEC1       = 0x00000200,
            PEC2       = 0x00000400,
            PEC3       = 0x00000800,
            PEC4       = 0x00001000,
            PEC5       = 0x00002000,
            PEC6       = 0x00004000,
            PEC7       = 0x00008000,
            DUALF      = 0x00000080,
            SMBHOST    = 0x00000040,
            SMBDEFAULT = 0x00000020,
            GENCALL    = 0x00000010,
            TRA        = 0x00000004,
            BUSY       = 0x00000002,
            MSL        = 0x00000001,
        };
    };

    struct I2C2_CCR {
        static constexpr uint32_t address = 0x4000581c;
        enum bits : uint32_t {
            F_S   = 0x00008000,
            DUTY  = 0x00004000,
            CCR0  = 0x00000001,
            CCR1  = 0x00000002,
            CCR2  = 0x00000004,
            CCR3  = 0x00000008,
            CCR4  = 0x00000010,
            CCR5  = 0x00000020,
            CCR6  = 0x00000040,
            CCR7  = 0x00000080,
            CCR8  = 0x00000100,
            CCR9  = 0x00000200,
            CCR10 = 0x00000400,
            CCR11 = 0x00000800,
        };
    };

    struct I2C2_TRISE {
        static constexpr uint32_t address = 0x40005820;
        enum bits : uint32_t {
            TRISE0 = 0x00000001,
            TRISE1 = 0x00000002,
            TRISE2 = 0x00000004,
            TRISE3 = 0x00000008,
            TRISE4 = 0x00000010,
            TRISE5 = 0x00000020,
        };
    };

    struct SPI1_CR1 {
        static constexpr uint32_t address = 0x40013000;
        enum bits : uint32_t {
            BIDIMODE = 0x00008000,
            BIDIOE   = 0x00004000,
            CRCEN    = 0x00002000,
            CRCNEXT  = 0x00001000,
            DFF      = 0x00000800,
            RXONLY   = 0x00000400,
            SSM      = 0x00000200,
            SSI      = 0x00000100,
            LSBFIRST = 0x00000080,
            SPE      = 0x00000040,
            BR0      = 0x00000008,
            BR1      = 0x00000010,
            BR2      = 0x00000020,
            MSTR     = 0x00000004,
            CPOL     = 0x00000002,
            CPHA     = 0x00000001,
        };
    };

    struct SPI1_CR2 {
        static constexpr uint32_t address = 0x40013004;
        enum bits : uint32_t {
            TXEIE   = 0x00000080,
            RXNEIE  = 0x00000040,
            ERRIE   = 0x00000020,
            SSOE    = 0x00000004,
            TXDMAEN = 0x00000002,
            RXDMAEN = 0x00000001,
        };
    };

    struct SPI1_SR {
        static constexpr uint32_t address = 0x40013008;
        enum bits : uint32_t {
            BSY    = 0x00000080,
            OVR    = 0x00000040,
            MODF   = 0x00000020,
            CRCERR = 0x00000010,
            UDR    = 0x00000008,
            CHSIDE = 0x00000004,
            TXE    = 0x00000002,
            RXNE   = 0x00000001,
        };
    };

    struct SPI1_DR {
        static constexpr uint32_t address = 0x4001300c;
        enum bits : uint32_t {
            DR0  = 0x00000001,
            DR1  = 0x00000002,
            DR2  = 0x00000004,
            DR3  = 0x00000008,
            DR4  = 0x00000010,
            DR5  = 0x00000020,
            DR6  = 0x00000040,
            DR7  = 0x00000080,
            DR8  = 0x00000100,
            DR9  = 0x00000200,
            DR10 = 0x00000400,
            DR11 = 0x00000800,
            DR12 = 0x00001000,
            DR13 = 0x00002000,
            DR14 = 0x00004000,
            DR15 = 0x00008000,
        };
    };

    struct SPI1_CRCPR {
        static constexpr uint32_t address = 0x40013010;
        enum bits : uint32_t {
            CRCPOLY0  = 0x00000001,
            CRCPOLY1  = 0x00000002,
            CRCPOLY2  = 0x00000004,
            CRCPOLY3  = 0x00000008,
            CRCPOLY4  = 0x00000010,
            CRCPOLY5  = 0x00000020,
            CRCPOLY6  = 0x00000040,
            CRCPOLY7  = 0x00000080,
            CRCPOLY8  = 0x00000100,
            CRCPOLY9  = 0x00000200,
            CRCPOLY10 = 0x00000400,
            CRCPOLY11 = 0x00000800,
            CRCPOLY12 = 0x00001000,
            CRCPOLY13 = 0x00002000,
            CRCPOLY14 = 0x00004000,
            CRCPOLY15 = 0x00008000,
        };
    };

    struct SPI1_RXCRCR {
        static constexpr uint32_t address = 0x40013014;
        enum bits : uint32_t {
            RxCRC0  = 0x00000001,
            RxCRC1  = 0x00000002,
            RxCRC2  = 0x00000004,
            RxCRC3  = 0x00000008,
            RxCRC4  = 0x00000010,
            RxCRC5  = 0x00000020,
            RxCRC6  = 0x00000040,
            RxCRC7  = 0x00000080,
            RxCRC8  = 0x00000100,
            RxCRC9  = 0x00000200,
            RxCRC10 = 0x00000400,
            RxCRC11 = 0x00000800,
            RxCRC12 = 0x00001000,
            RxCRC13 = 0x00002000,
            RxCRC14 = 0x00004000,
            RxCRC15 = 0x00008000,
        };
    };

    struct SPI1_TXCRCR {
        static constexpr uint32_t address = 0x40013018;
        enum bits : uint32_t {
            TxCRC0  = 0x00000001,
            TxCRC1  = 0x00000002,
            TxCRC2  = 0x00000004,
            TxCRC3  = 0x00000008,
            TxCRC4  = 0x00000010,
            TxCRC5  = 0x00000020,
            TxCRC6  = 0x00000040,
            TxCRC7  = 0x00000080,
            TxCRC8  = 0x00000100,
            TxCRC9  = 0x00000200,
            TxCRC10 = 0x00000400,
            TxCRC11 = 0x00000800,
            TxCRC12 = 0x00001000,
            TxCRC13 = 0x00002000,
            TxCRC14 = 0x00004000,
            TxCRC15 = 0x00008000,
        };
    };

    struct SPI1_I2SCFGR {
        static constexpr uint32_t address = 0x4001301c;
        enum bits : uint32_t {
            I2SMOD  = 0x00000800,
            I2SE    = 0x00000400,
            I2SCFG0 = 0x00000100,
            I2SCFG1 = 0x00000200,
            PCMSYNC = 0x00000080,
            I2SSTD0 = 0x00000010,
            I2SSTD1 = 0x00000020,
            CKPOL   = 0x00000008,
            DATLEN0 = 0x00000002,
            DATLEN1 = 0x00000004,
            CHLEN   = 0x00000001,
        };
    };

    struct SPI1_I2SPR {
        static constexpr uint32_t address = 0x40013020;
        enum bits : uint32_t {
            MCKOE   = 0x00000200,
            ODD     = 0x00000100,
            I2SDIV0 = 0x00000001,
            I2SDIV1 = 0x00000002,
            I2SDIV2 = 0x00000004,
            I2SDIV3 = 0x00000008,
            I2SDIV4 = 0x00000010,
            I2SDIV5 = 0x00000020,
            I2SDIV6 = 0x00000040,
            I2SDIV7 = 0x00000080,
        };
    };

    struct SPI2_CR1 {
        static constexpr uint32_t address = 0x40003800;
        enum bits : uint32_t {
            BIDIMODE = 0x00008000,
            BIDIOE   = 0x00004000,
            CRCEN    = 0x00002000,
            CRCNEXT  = 0x00001000,
            DFF      = 0x00000800,
            RXONLY   = 0x00000400,
            SSM      = 0x00000200,
            SSI      = 0x00000100,
            LSBFIRST = 0x00000080,
            SPE      = 0x00000040,
            BR0      = 0x00000008,
            BR1      = 0x00000010,
            BR2      = 0x00000020,
            MSTR     = 0x00000004,
            CPOL     = 0x00000002,
            CPHA     = 0x00000001,
        };
    };

    struct SPI2_CR2 {
        static constexpr uint32_t address = 0x40003804;
        enum bits : uint32_t {
            TXEIE   = 0x00000080,
            RXNEIE  = 0x00000040,
            ERRIE   = 0x00000020,
            SSOE    = 0x00000004,
            TXDMAEN = 0x00000002,
            RXDMAEN = 0x00000001,
        };
    };

    struct SPI2_SR {
        static constexpr uint32_t address = 0x40003808;
        enum bits : uint32_t {
            BSY    = 0x00000080,
            OVR    = 0x00000040,
            MODF   = 0x00000020,
            CRCERR = 0x00000010,
            UDR    = 0x00000008,
            CHSIDE = 0x00000004,
            TXE    = 0x00000002,
            RXNE   = 0x00000001,
        };
    };

    struct SPI2_DR {
        static constexpr uint32_t address = 0x4000380c;
        enum bits : uint32_t {
            DR0  = 0x00000001,
            DR1  = 0x00000002,
            DR2  = 0x00000004,
            DR3  = 0x00000008,
            DR4  = 0x00000010,
            DR5  = 0x00000020,
            DR6  = 0x00000040,
            DR7  = 0x00000080,
            DR8  = 0x00000100,
            DR9  = 0x00000200,
            DR10 = 0x00000400,
            DR11 = 0x00000800,
            DR12 = 0x00001000,
            DR13 = 0x00002000,
            DR14 = 0x00004000,
            DR15 = 0x00008000,
        };
    };

    struct SPI2_CRCPR {
        static constexpr uint32_t address = 0x40003810;
        enum bits : uint32_t {
            CRCPOLY0  = 0x00000001,
            CRCPOLY1  = 0x00000002,
            CRCPOLY2  = 0x00000004,
            CRCPOLY3  = 0x00000008,
            CRCPOLY4  = 0x00000010,
            CRCPOLY5  = 0x00000020,
            CRCPOLY6  = 0x00000040,
            CRCPOLY7  = 0x00000080,
            CRCPOLY8  = 0x00000100,
            CRCPOLY9  = 0x00000200,
            CRCPOLY10 = 0x00000400,
            CRCPOLY11 = 0x00000800,
            CRCPOLY12 = 0x00001000,
            CRCPOLY13 = 0x00002000,
            CRCPOLY14 = 0x00004000,
            CRCPOLY15 = 0x00008000,
        };
    };

    struct SPI2_RXCRCR {
        static constexpr uint32_t address = 0x40003814;
        enum bits : uint32_t {
            RxCRC0  = 0x00000001,
            RxCRC1  = 0x00000002,
            RxCRC2  = 0x00000004,
            RxCRC3  = 0x00000008,
            RxCRC4  = 0x00000010,
            RxCRC5  = 0x00000020,
            RxCRC6  = 0x00000040,
            RxCRC7  = 0x00000080,
            RxCRC8  = 0x00000100,
            RxCRC9  = 0x00000200,
            RxCRC10 = 0x00000400,
            RxCRC11 = 0x00000800,
            RxCRC12 = 0x00001000,
            RxCRC13 = 0x00002000,
            RxCRC14 = 0x00004000,
            RxCRC15 = 0x00008000,
        };
    };

    struct SPI2_TXCRCR {
        static constexpr uint32_t address = 0x40003818;
        enum bits : uint32_t {
            TxCRC0  = 0x00000001,
            TxCRC1  = 0x00000002,
            TxCRC2  = 0x00000004,
            TxCRC3  = 0x00000008,
            TxCRC4  = 0x00000010,
            TxCRC5  = 0x00000020,
            TxCRC6  = 0x00000040,
            TxCRC7  = 0x00000080,
            TxCRC8  = 0x00000100,
            TxCRC9  = 0x00000200,
            TxCRC10 = 0x00000400,
            TxCRC11 = 0x00000800,
            TxCRC12 = 0x00001000,
            TxCRC13 = 0x00002000,
            TxCRC14 = 0x00004000,
            TxCRC15 = 0x00008000,
        };
    };

    struct SPI2_I2SCFGR {
        static constexpr uint32_t address = 0x4000381c;
        enum bits : uint32_t {
            I2SMOD  = 0x00000800,
            I2SE    = 0x00000400,
            I2SCFG0 = 0x00000100,
            I2SCFG1 = 0x00000200,
            PCMSYNC = 0x00000080,
            I2SSTD0 = 0x00000010,
            I2SSTD1 = 0x00000020,
            CKPOL   = 0x00000008,
            DATLEN0 = 0x00000002,
            DATLEN1 = 0x00000004,
            CHLEN   = 0x00000001,
        };
    };

    struct SPI2_I2SPR {
        static constexpr uint32_t address = 0x40003820;
        enum bits : uint32_t {
            MCKOE   = 0x00000200,
            ODD     = 0x00000100,
            I2SDIV0 = 0x00000001,
            I2SDIV1 = 0x00000002,
            I2SDIV2 = 0x00000004,
            I2SDIV3 = 0x00000008,
            I2SDIV4 = 0x00000010,
            I2SDIV5 = 0x00000020,
            I2SDIV6 = 0x00000040,
            I2SDIV7 = 0x00000080,
        };
    };

    struct SPI3_CR1 {
        static constexpr uint32_t address = 0x40003c00;
        enum bits : uint32_t {
            BIDIMODE = 0x00008000,
            BIDIOE   = 0x00004000,
            CRCEN    = 0x00002000,
            CRCNEXT  = 0x00001000,
            DFF      = 0x00000800,
            RXONLY   = 0x00000400,
            SSM      = 0x00000200,
            SSI      = 0x00000100,
            LSBFIRST = 0x00000080,
            SPE      = 0x00000040,
            BR0      = 0x00000008,
            BR1      = 0x00000010,
            BR2      = 0x00000020,
            MSTR     = 0x00000004,
            CPOL     = 0x00000002,
            CPHA     = 0x00000001,
        };
    };

    struct SPI3_CR2 {
        static constexpr uint32_t address = 0x40003c04;
        enum bits : uint32_t {
            TXEIE   = 0x00000080,
            RXNEIE  = 0x00000040,
            ERRIE   = 0x00000020,
            SSOE    = 0x00000004,
            TXDMAEN = 0x00000002,
            RXDMAEN = 0x00000001,
        };
    };

    struct SPI3_SR {
        static constexpr uint32_t address = 0x40003c08;
        enum bits : uint32_t {
            BSY    = 0x00000080,
            OVR    = 0x00000040,
            MODF   = 0x00000020,
            CRCERR = 0x00000010,
            UDR    = 0x00000008,
            CHSIDE = 0x00000004,
            TXE    = 0x00000002,
            RXNE   = 0x00000001,
        };
    };

    struct SPI3_DR {
        static constexpr uint32_t address = 0x40003c0c;
        enum bits : uint32_t {
            DR0  = 0x00000001,
            DR1  = 0x00000002,
            DR2  = 0x00000004,
            DR3  = 0x00000008,
            DR4  = 0x00000010,
            DR5  = 0x00000020,
            DR6  = 0x00000040,
            DR7  = 0x00000080,
            DR8  = 0x00000100,
            DR9  = 0x00000200,
            DR10 = 0x00000400,
            DR11 = 0x00000800,
            DR12 = 0x00001000,
            DR13 = 0x00002000,
            DR14 = 0x00004000,
            DR15 = 0x00008000,
        };
    };

    struct SPI3_CRCPR {
        static constexpr uint32_t address = 0x40003c10;
        enum bits : uint32_t {
            CRCPOLY0  = 0x00000001,
            CRCPOLY1  = 0x00000002,
            CRCPOLY2  = 0x00000004,
            CRCPOLY3  = 0x00000008,
            CRCPOLY4  = 0x00000010,
            CRCPOLY5  = 0x00000020,
            CRCPOLY6  = 0x00000040,
            CRCPOLY7  = 0x00000080,
            CRCPOLY8  = 0x00000100,
            CRCPOLY9  = 0x00000200,
            CRCPOLY10 = 0x00000400,
            CRCPOLY11 = 0x00000800,
            CRCPOLY12 = 0x00001000,
            CRCPOLY13 = 0x00002000,
            CRCPOLY14 = 0x00004000,
            CRCPOLY15 = 0x00008000,
        };
    };

    struct SPI3_RXCRCR {
        static constexpr uint32_t address = 0x40003c14;
        enum bits : uint32_t {
            RxCRC0  = 0x00000001,
            RxCRC1  = 0x00000002,
            RxCRC2  = 0x00000004,
            RxCRC3  = 0x00000008,
            RxCRC4  = 0x00000010,
            RxCRC5  = 0x00000020,
            RxCRC6  = 0x00000040,
            RxCRC7  = 0x00000080,
            RxCRC8  = 0x00000100,
            RxCRC9  = 0x00000200,
            RxCRC10 = 0x00000400,
            RxCRC11 = 0x00000800,
            RxCRC12 = 0x00001000,
            RxCRC13 = 0x00002000,
            RxCRC14 = 0x00004000,
            RxCRC15 = 0x00008000,
        };
    };

    struct SPI3_TXCRCR {
        static constexpr uint32_t address = 0x40003c18;
        enum bits : uint32_t {
            TxCRC0  = 0x00000001,
            TxCRC1  = 0x00000002,
            TxCRC2  = 0x00000004,
            TxCRC3  = 0x00000008,
            TxCRC4  = 0x00000010,
            TxCRC5  = 0x00000020,
            TxCRC6  = 0x00000040,
            TxCRC7  = 0x00000080,
            TxCRC8  = 0x00000100,
            TxCRC9  = 0x00000200,
            TxCRC10 = 0x00000400,
            TxCRC11 = 0x00000800,
            TxCRC12 = 0x00001000,
            TxCRC13 = 0x00002000,
            TxCRC14 = 0x00004000,
            TxCRC15 = 0x00008000,
        };
    };

    struct SPI3_I2SCFGR {
        static constexpr uint32_t address = 0x40003c1c;
        enum bits : uint32_t {
            I2SMOD  = 0x00000800,
            I2SE    = 0x00000400,
            I2SCFG0 = 0x00000100,
            I2SCFG1 = 0x00000200,
            PCMSYNC = 0x00000080,
            I2SSTD0 = 0x00000010,
            I2SSTD1 = 0x00000020,
            CKPOL   = 0x00000008,
            DATLEN0 = 0x00000002,
            DATLEN1 = 0x00000004,
            CHLEN   = 0x00000001,
        };
    };

    struct SPI3_I2SPR {
        static constexpr uint32_t address = 0x40003c20;
        enum bits : uint32_t {
            MCKOE   = 0x00000200,
            ODD     = 0x00000100,
            I2SDIV0 = 0x00000001,
            I2SDIV1 = 0x00000002,
            I2SDIV2 = 0x00000004,
            I2SDIV3 = 0x00000008,
            I2SDIV4 = 0x00000010,
            I2SDIV5 = 0x00000020,
            I2SDIV6 = 0x00000040,
            I2SDIV7 = 0x00000080,
        };
    };

    struct USART1_SR {
        static constexpr uint32_t address = 0x40013800;
        enum bits : uint32_t {
            CTS  = 0x00000200,
            LBD  = 0x00000100,
            TXE  = 0x00000080,
            TC   = 0x00000040,
            RXNE = 0x00000020,
            IDLE = 0x00000010,
            ORE  = 0x00000008,
            NE   = 0x00000004,
            FE   = 0x00000002,
            PE   = 0x00000001,
        };
    };

    struct USART1_DR {
        static constexpr uint32_t address = 0x40013804;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
            DR8 = 0x00000100,
        };
    };

    struct USART1_BRR {
        static constexpr uint32_t address = 0x40013808;
        enum bits : uint32_t {
            DIV_Mantissa0  = 0x00000010,
            DIV_Mantissa1  = 0x00000020,
            DIV_Mantissa2  = 0x00000040,
            DIV_Mantissa3  = 0x00000080,
            DIV_Mantissa4  = 0x00000100,
            DIV_Mantissa5  = 0x00000200,
            DIV_Mantissa6  = 0x00000400,
            DIV_Mantissa7  = 0x00000800,
            DIV_Mantissa8  = 0x00001000,
            DIV_Mantissa9  = 0x00002000,
            DIV_Mantissa10 = 0x00004000,
            DIV_Mantissa11 = 0x00008000,
            DIV_Fraction0  = 0x00000001,
            DIV_Fraction1  = 0x00000002,
            DIV_Fraction2  = 0x00000004,
            DIV_Fraction3  = 0x00000008,
        };
    };

    struct USART1_CR1 {
        static constexpr uint32_t address = 0x4001380c;
        enum bits : uint32_t {
            UE     = 0x00002000,
            M      = 0x00001000,
            WAKE   = 0x00000800,
            PCE    = 0x00000400,
            PS     = 0x00000200,
            PEIE   = 0x00000100,
            TXEIE  = 0x00000080,
            TCIE   = 0x00000040,
            RXNEIE = 0x00000020,
            IDLEIE = 0x00000010,
            TE     = 0x00000008,
            RE     = 0x00000004,
            RWU    = 0x00000002,
            SBK    = 0x00000001,
        };
    };

    struct USART1_CR2 {
        static constexpr uint32_t address = 0x40013810;
        enum bits : uint32_t {
            LINEN = 0x00004000,
            STOP0 = 0x00001000,
            STOP1 = 0x00002000,
            CLKEN = 0x00000800,
            CPOL  = 0x00000400,
            CPHA  = 0x00000200,
            LBCL  = 0x00000100,
            LBDIE = 0x00000040,
            LBDL  = 0x00000020,
            ADD0  = 0x00000001,
            ADD1  = 0x00000002,
            ADD2  = 0x00000004,
            ADD3  = 0x00000008,
        };
    };

    struct USART1_CR3 {
        static constexpr uint32_t address = 0x40013814;
        enum bits : uint32_t {
            CTSIE = 0x00000400,
            CTSE  = 0x00000200,
            RTSE  = 0x00000100,
            DMAT  = 0x00000080,
            DMAR  = 0x00000040,
            SCEN  = 0x00000020,
            NACK  = 0x00000010,
            HDSEL = 0x00000008,
            IRLP  = 0x00000004,
            IREN  = 0x00000002,
            EIE   = 0x00000001,
        };
    };

    struct USART1_GTPR {
        static constexpr uint32_t address = 0x40013818;
        enum bits : uint32_t {
            GT0  = 0x00000100,
            GT1  = 0x00000200,
            GT2  = 0x00000400,
            GT3  = 0x00000800,
            GT4  = 0x00001000,
            GT5  = 0x00002000,
            GT6  = 0x00004000,
            GT7  = 0x00008000,
            PSC0 = 0x00000001,
            PSC1 = 0x00000002,
            PSC2 = 0x00000004,
            PSC3 = 0x00000008,
            PSC4 = 0x00000010,
            PSC5 = 0x00000020,
            PSC6 = 0x00000040,
            PSC7 = 0x00000080,
        };
    };

    struct USART2_SR {
        static constexpr uint32_t address = 0x40004400;
        enum bits : uint32_t {
            CTS  = 0x00000200,
            LBD  = 0x00000100,
            TXE  = 0x00000080,
            TC   = 0x00000040,
            RXNE = 0x00000020,
            IDLE = 0x00000010,
            ORE  = 0x00000008,
            NE   = 0x00000004,
            FE   = 0x00000002,
            PE   = 0x00000001,
        };
    };

    struct USART2_DR {
        static constexpr uint32_t address = 0x40004404;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
            DR8 = 0x00000100,
        };
    };

    struct USART2_BRR {
        static constexpr uint32_t address = 0x40004408;
        enum bits : uint32_t {
            DIV_Mantissa0  = 0x00000010,
            DIV_Mantissa1  = 0x00000020,
            DIV_Mantissa2  = 0x00000040,
            DIV_Mantissa3  = 0x00000080,
            DIV_Mantissa4  = 0x00000100,
            DIV_Mantissa5  = 0x00000200,
            DIV_Mantissa6  = 0x00000400,
            DIV_Mantissa7  = 0x00000800,
            DIV_Mantissa8  = 0x00001000,
            DIV_Mantissa9  = 0x00002000,
            DIV_Mantissa10 = 0x00004000,
            DIV_Mantissa11 = 0x00008000,
            DIV_Fraction0  = 0x00000001,
            DIV_Fraction1  = 0x00000002,
            DIV_Fraction2  = 0x00000004,
            DIV_Fraction3  = 0x00000008,
        };
    };

    struct USART2_CR1 {
        static constexpr uint32_t address = 0x4000440c;
        enum bits : uint32_t {
            UE     = 0x00002000,
            M      = 0x00001000,
            WAKE   = 0x00000800,
            PCE    = 0x00000400,
            PS     = 0x00000200,
            PEIE   = 0x00000100,
            TXEIE  = 0x00000080,
            TCIE   = 0x00000040,
            RXNEIE = 0x00000020,
            IDLEIE = 0x00000010,
            TE     = 0x00000008,
            RE     = 0x00000004,
            RWU    = 0x00000002,
            SBK    = 0x00000001,
        };
    };

    struct USART2_CR2 {
        static constexpr uint32_t address = 0x40004410;
        enum bits : uint32_t {
            LINEN = 0x00004000,
            STOP0 = 0x00001000,
            STOP1 = 0x00002000,
            CLKEN = 0x00000800,
            CPOL  = 0x00000400,
            CPHA  = 0x00000200,
            LBCL  = 0x00000100,
            LBDIE = 0x00000040,
            LBDL  = 0x00000020,
            ADD0  = 0x00000001,
            ADD1  = 0x00000002,
            ADD2  = 0x00000004,
            ADD3  = 0x00000008,
        };
    };

    struct USART2_CR3 {
        static constexpr uint32_t address = 0x40004414;
        enum bits : uint32_t {
            CTSIE = 0x00000400,
            CTSE  = 0x00000200,
            RTSE  = 0x00000100,
            DMAT  = 0x00000080,
            DMAR  = 0x00000040,
            SCEN  = 0x00000020,
            NACK  = 0x00000010,
            HDSEL = 0x00000008,
            IRLP  = 0x00000004,
            IREN  = 0x00000002,
            EIE   = 0x00000001,
        };
    };

    struct USART2_GTPR {
        static constexpr uint32_t address = 0x40004418;
        enum bits : uint32_t {
            GT0  = 0x00000100,
            GT1  = 0x00000200,
            GT2  = 0x00000400,
            GT3  = 0x00000800,
            GT4  = 0x00001000,
            GT5  = 0x00002000,
            GT6  = 0x00004000,
            GT7  = 0x00008000,
            PSC0 = 0x00000001,
            PSC1 = 0x00000002,
            PSC2 = 0x00000004,
            PSC3 = 0x00000008,
            PSC4 = 0x00000010,
            PSC5 = 0x00000020,
            PSC6 = 0x00000040,
            PSC7 = 0x00000080,
        };
    };

    struct USART3_SR {
        static constexpr uint32_t address = 0x40004800;
        enum bits : uint32_t {
            CTS  = 0x00000200,
            LBD  = 0x00000100,
            TXE  = 0x00000080,
            TC   = 0x00000040,
            RXNE = 0x00000020,
            IDLE = 0x00000010,
            ORE  = 0x00000008,
            NE   = 0x00000004,
            FE   = 0x00000002,
            PE   = 0x00000001,
        };
    };

    struct USART3_DR {
        static constexpr uint32_t address = 0x40004804;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
            DR8 = 0x00000100,
        };
    };

    struct USART3_BRR {
        static constexpr uint32_t address = 0x40004808;
        enum bits : uint32_t {
            DIV_Mantissa0  = 0x00000010,
            DIV_Mantissa1  = 0x00000020,
            DIV_Mantissa2  = 0x00000040,
            DIV_Mantissa3  = 0x00000080,
            DIV_Mantissa4  = 0x00000100,
            DIV_Mantissa5  = 0x00000200,
            DIV_Mantissa6  = 0x00000400,
            DIV_Mantissa7  = 0x00000800,
            DIV_Mantissa8  = 0x00001000,
            DIV_Mantissa9  = 0x00002000,
            DIV_Mantissa10 = 0x00004000,
            DIV_Mantissa11 = 0x00008000,
            DIV_Fraction0  = 0x00000001,
            DIV_Fraction1  = 0x00000002,
            DIV_Fraction2  = 0x00000004,
            DIV_Fraction3  = 0x00000008,
        };
    };

    struct USART3_CR1 {
        static constexpr uint32_t address = 0x4000480c;
        enum bits : uint32_t {
            UE     = 0x00002000,
            M      = 0x00001000,
            WAKE   = 0x00000800,
            PCE    = 0x00000400,
            PS     = 0x00000200,
            PEIE   = 0x00000100,
            TXEIE  = 0x00000080,
            TCIE   = 0x00000040,
            RXNEIE = 0x00000020,
            IDLEIE = 0x00000010,
            TE     = 0x00000008,
            RE     = 0x00000004,
            RWU    = 0x00000002,
            SBK    = 0x00000001,
        };
    };

    struct USART3_CR2 {
        static constexpr uint32_t address = 0x40004810;
        enum bits : uint32_t {
            LINEN = 0x00004000,
            STOP0 = 0x00001000,
            STOP1 = 0x00002000,
            CLKEN = 0x00000800,
            CPOL  = 0x00000400,
            CPHA  = 0x00000200,
            LBCL  = 0x00000100,
            LBDIE = 0x00000040,
            LBDL  = 0x00000020,
            ADD0  = 0x00000001,
            ADD1  = 0x00000002,
            ADD2  = 0x00000004,
            ADD3  = 0x00000008,
        };
    };

    struct USART3_CR3 {
        static constexpr uint32_t address = 0x40004814;
        enum bits : uint32_t {
            CTSIE = 0x00000400,
            CTSE  = 0x00000200,
            RTSE  = 0x00000100,
            DMAT  = 0x00000080,
            DMAR  = 0x00000040,
            SCEN  = 0x00000020,
            NACK  = 0x00000010,
            HDSEL = 0x00000008,
            IRLP  = 0x00000004,
            IREN  = 0x00000002,
            EIE   = 0x00000001,
        };
    };

    struct USART3_GTPR {
        static constexpr uint32_t address = 0x40004818;
        enum bits : uint32_t {
            GT0  = 0x00000100,
            GT1  = 0x00000200,
            GT2  = 0x00000400,
            GT3  = 0x00000800,
            GT4  = 0x00001000,
            GT5  = 0x00002000,
            GT6  = 0x00004000,
            GT7  = 0x00008000,
            PSC0 = 0x00000001,
            PSC1 = 0x00000002,
            PSC2 = 0x00000004,
            PSC3 = 0x00000008,
            PSC4 = 0x00000010,
            PSC5 = 0x00000020,
            PSC6 = 0x00000040,
            PSC7 = 0x00000080,
        };
    };

    struct ADC1_SR {
        static constexpr uint32_t address = 0x40012400;
        enum bits : uint32_t {
            STRT  = 0x00000010,
            JSTRT = 0x00000008,
            JEOC  = 0x00000004,
            EOC   = 0x00000002,
            AWD   = 0x00000001,
        };
    };

    struct ADC1_CR1 {
        static constexpr uint32_t address = 0x40012404;
        enum bits : uint32_t {
            AWDEN    = 0x00800000,
            JAWDEN   = 0x00400000,
            DUALMOD0 = 0x00010000,
            DUALMOD1 = 0x00020000,
            DUALMOD2 = 0x00040000,
            DUALMOD3 = 0x00080000,
            DISCNUM0 = 0x00002000,
            DISCNUM1 = 0x00004000,
            DISCNUM2 = 0x00008000,
            JDISCEN  = 0x00001000,
            DISCEN   = 0x00000800,
            JAUTO    = 0x00000400,
            AWDSGL   = 0x00000200,
            SCAN     = 0x00000100,
            JEOCIE   = 0x00000080,
            AWDIE    = 0x00000040,
            EOCIE    = 0x00000020,
            AWDCH0   = 0x00000001,
            AWDCH1   = 0x00000002,
            AWDCH2   = 0x00000004,
            AWDCH3   = 0x00000008,
            AWDCH4   = 0x00000010,
        };
    };

    struct ADC1_CR2 {
        static constexpr uint32_t address = 0x40012408;
        enum bits : uint32_t {
            TSVREFE  = 0x00800000,
            SWSTART  = 0x00400000,
            JSWSTART = 0x00200000,
            EXTTRIG  = 0x00100000,
            EXTSEL0  = 0x00020000,
            EXTSEL1  = 0x00040000,
            EXTSEL2  = 0x00080000,
            JEXTTRIG = 0x00008000,
            JEXTSEL0 = 0x00001000,
            JEXTSEL1 = 0x00002000,
            JEXTSEL2 = 0x00004000,
            ALIGN    = 0x00000800,
            DMA      = 0x00000100,
            RSTCAL   = 0x00000008,
            CAL      = 0x00000004,
            CONT     = 0x00000002,
            ADON     = 0x00000001,
        };
    };

    struct ADC1_SMPR1 {
        static constexpr uint32_t address = 0x4001240c;
        enum bits : uint32_t {
            SMP100 = 0x00000001,
            SMP101 = 0x00000002,
            SMP102 = 0x00000004,
            SMP110 = 0x00000008,
            SMP111 = 0x00000010,
            SMP112 = 0x00000020,
            SMP120 = 0x00000040,
            SMP121 = 0x00000080,
            SMP122 = 0x00000100,
            SMP130 = 0x00000200,
            SMP131 = 0x00000400,
            SMP132 = 0x00000800,
            SMP140 = 0x00001000,
            SMP141 = 0x00002000,
            SMP142 = 0x00004000,
            SMP150 = 0x00008000,
            SMP151 = 0x00010000,
            SMP152 = 0x00020000,
            SMP160 = 0x00040000,
            SMP161 = 0x00080000,
            SMP162 = 0x00100000,
            SMP170 = 0x00200000,
            SMP171 = 0x00400000,
            SMP172 = 0x00800000,
        };
    };

    struct ADC1_SMPR2 {
        static constexpr uint32_t address = 0x40012410;
        enum bits : uint32_t {
            SMP00 = 0x00000001,
            SMP01 = 0x00000002,
            SMP02 = 0x00000004,
            SMP10 = 0x00000008,
            SMP11 = 0x00000010,
            SMP12 = 0x00000020,
            SMP20 = 0x00000040,
            SMP21 = 0x00000080,
            SMP22 = 0x00000100,
            SMP30 = 0x00000200,
            SMP31 = 0x00000400,
            SMP32 = 0x00000800,
            SMP40 = 0x00001000,
            SMP41 = 0x00002000,
            SMP42 = 0x00004000,
            SMP50 = 0x00008000,
            SMP51 = 0x00010000,
            SMP52 = 0x00020000,
            SMP60 = 0x00040000,
            SMP61 = 0x00080000,
            SMP62 = 0x00100000,
            SMP70 = 0x00200000,
            SMP71 = 0x00400000,
            SMP72 = 0x00800000,
            SMP80 = 0x01000000,
            SMP81 = 0x02000000,
            SMP82 = 0x04000000,
            SMP90 = 0x08000000,
            SMP91 = 0x10000000,
            SMP92 = 0x20000000,
        };
    };

    struct ADC1_JOFR1 {
        static constexpr uint32_t address = 0x40012414;
        enum bits : uint32_t {
            JOFFSET10  = 0x00000001,
            JOFFSET11  = 0x00000002,
            JOFFSET12  = 0x00000004,
            JOFFSET13  = 0x00000008,
            JOFFSET14  = 0x00000010,
            JOFFSET15  = 0x00000020,
            JOFFSET16  = 0x00000040,
            JOFFSET17  = 0x00000080,
            JOFFSET18  = 0x00000100,
            JOFFSET19  = 0x00000200,
            JOFFSET110 = 0x00000400,
            JOFFSET111 = 0x00000800,
        };
    };

    struct ADC1_JOFR2 {
        static constexpr uint32_t address = 0x40012418;
        enum bits : uint32_t {
            JOFFSET20  = 0x00000001,
            JOFFSET21  = 0x00000002,
            JOFFSET22  = 0x00000004,
            JOFFSET23  = 0x00000008,
            JOFFSET24  = 0x00000010,
            JOFFSET25  = 0x00000020,
            JOFFSET26  = 0x00000040,
            JOFFSET27  = 0x00000080,
            JOFFSET28  = 0x00000100,
            JOFFSET29  = 0x00000200,
            JOFFSET210 = 0x00000400,
            JOFFSET211 = 0x00000800,
        };
    };

    struct ADC1_JOFR3 {
        static constexpr uint32_t address = 0x4001241c;
        enum bits : uint32_t {
            JOFFSET30  = 0x00000001,
            JOFFSET31  = 0x00000002,
            JOFFSET32  = 0x00000004,
            JOFFSET33  = 0x00000008,
            JOFFSET34  = 0x00000010,
            JOFFSET35  = 0x00000020,
            JOFFSET36  = 0x00000040,
            JOFFSET37  = 0x00000080,
            JOFFSET38  = 0x00000100,
            JOFFSET39  = 0x00000200,
            JOFFSET310 = 0x00000400,
            JOFFSET311 = 0x00000800,
        };
    };

    struct ADC1_JOFR4 {
        static constexpr uint32_t address = 0x40012420;
        enum bits : uint32_t {
            JOFFSET40  = 0x00000001,
            JOFFSET41  = 0x00000002,
            JOFFSET42  = 0x00000004,
            JOFFSET43  = 0x00000008,
            JOFFSET44  = 0x00000010,
            JOFFSET45  = 0x00000020,
            JOFFSET46  = 0x00000040,
            JOFFSET47  = 0x00000080,
            JOFFSET48  = 0x00000100,
            JOFFSET49  = 0x00000200,
            JOFFSET410 = 0x00000400,
            JOFFSET411 = 0x00000800,
        };
    };

    struct ADC1_HTR {
        static constexpr uint32_t address = 0x40012424;
        enum bits : uint32_t {
            HT0  = 0x00000001,
            HT1  = 0x00000002,
            HT2  = 0x00000004,
            HT3  = 0x00000008,
            HT4  = 0x00000010,
            HT5  = 0x00000020,
            HT6  = 0x00000040,
            HT7  = 0x00000080,
            HT8  = 0x00000100,
            HT9  = 0x00000200,
            HT10 = 0x00000400,
            HT11 = 0x00000800,
        };
    };

    struct ADC1_LTR {
        static constexpr uint32_t address = 0x40012428;
        enum bits : uint32_t {
            LT0  = 0x00000001,
            LT1  = 0x00000002,
            LT2  = 0x00000004,
            LT3  = 0x00000008,
            LT4  = 0x00000010,
            LT5  = 0x00000020,
            LT6  = 0x00000040,
            LT7  = 0x00000080,
            LT8  = 0x00000100,
            LT9  = 0x00000200,
            LT10 = 0x00000400,
            LT11 = 0x00000800,
        };
    };

    struct ADC1_SQR1 {
        static constexpr uint32_t address = 0x4001242c;
        enum bits : uint32_t {
            L0    = 0x00100000,
            L1    = 0x00200000,
            L2    = 0x00400000,
            L3    = 0x00800000,
            SQ160 = 0x00008000,
            SQ161 = 0x00010000,
            SQ162 = 0x00020000,
            SQ163 = 0x00040000,
            SQ164 = 0x00080000,
            SQ150 = 0x00000400,
            SQ151 = 0x00000800,
            SQ152 = 0x00001000,
            SQ153 = 0x00002000,
            SQ154 = 0x00004000,
            SQ140 = 0x00000020,
            SQ141 = 0x00000040,
            SQ142 = 0x00000080,
            SQ143 = 0x00000100,
            SQ144 = 0x00000200,
            SQ130 = 0x00000001,
            SQ131 = 0x00000002,
            SQ132 = 0x00000004,
            SQ133 = 0x00000008,
            SQ134 = 0x00000010,
        };
    };

    struct ADC1_SQR2 {
        static constexpr uint32_t address = 0x40012430;
        enum bits : uint32_t {
            SQ120 = 0x02000000,
            SQ121 = 0x04000000,
            SQ122 = 0x08000000,
            SQ123 = 0x10000000,
            SQ124 = 0x20000000,
            SQ110 = 0x00100000,
            SQ111 = 0x00200000,
            SQ112 = 0x00400000,
            SQ113 = 0x00800000,
            SQ114 = 0x01000000,
            SQ100 = 0x00008000,
            SQ101 = 0x00010000,
            SQ102 = 0x00020000,
            SQ103 = 0x00040000,
            SQ104 = 0x00080000,
            SQ90  = 0x00000400,
            SQ91  = 0x00000800,
            SQ92  = 0x00001000,
            SQ93  = 0x00002000,
            SQ94  = 0x00004000,
            SQ80  = 0x00000020,
            SQ81  = 0x00000040,
            SQ82  = 0x00000080,
            SQ83  = 0x00000100,
            SQ84  = 0x00000200,
            SQ70  = 0x00000001,
            SQ71  = 0x00000002,
            SQ72  = 0x00000004,
            SQ73  = 0x00000008,
            SQ74  = 0x00000010,
        };
    };

    struct ADC1_SQR3 {
        static constexpr uint32_t address = 0x40012434;
        enum bits : uint32_t {
            SQ60 = 0x02000000,
            SQ61 = 0x04000000,
            SQ62 = 0x08000000,
            SQ63 = 0x10000000,
            SQ64 = 0x20000000,
            SQ50 = 0x00100000,
            SQ51 = 0x00200000,
            SQ52 = 0x00400000,
            SQ53 = 0x00800000,
            SQ54 = 0x01000000,
            SQ40 = 0x00008000,
            SQ41 = 0x00010000,
            SQ42 = 0x00020000,
            SQ43 = 0x00040000,
            SQ44 = 0x00080000,
            SQ30 = 0x00000400,
            SQ31 = 0x00000800,
            SQ32 = 0x00001000,
            SQ33 = 0x00002000,
            SQ34 = 0x00004000,
            SQ20 = 0x00000020,
            SQ21 = 0x00000040,
            SQ22 = 0x00000080,
            SQ23 = 0x00000100,
            SQ24 = 0x00000200,
            SQ10 = 0x00000001,
            SQ11 = 0x00000002,
            SQ12 = 0x00000004,
            SQ13 = 0x00000008,
            SQ14 = 0x00000010,
        };
    };

    struct ADC1_JSQR {
        static constexpr uint32_t address = 0x40012438;
        enum bits : uint32_t {
            JL0   = 0x00100000,
            JL1   = 0x00200000,
            JSQ40 = 0x00008000,
            JSQ41 = 0x00010000,
            JSQ42 = 0x00020000,
            JSQ43 = 0x00040000,
            JSQ44 = 0x00080000,
            JSQ30 = 0x00000400,
            JSQ31 = 0x00000800,
            JSQ32 = 0x00001000,
            JSQ33 = 0x00002000,
            JSQ34 = 0x00004000,
            JSQ20 = 0x00000020,
            JSQ21 = 0x00000040,
            JSQ22 = 0x00000080,
            JSQ23 = 0x00000100,
            JSQ24 = 0x00000200,
            JSQ10 = 0x00000001,
            JSQ11 = 0x00000002,
            JSQ12 = 0x00000004,
            JSQ13 = 0x00000008,
            JSQ14 = 0x00000010,
        };
    };

    struct ADC1_JDR1 {
        static constexpr uint32_t address = 0x4001243c;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC1_JDR2 {
        static constexpr uint32_t address = 0x40012440;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC1_JDR3 {
        static constexpr uint32_t address = 0x40012444;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC1_JDR4 {
        static constexpr uint32_t address = 0x40012448;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC1_DR {
        static constexpr uint32_t address = 0x4001244c;
        enum bits : uint32_t {
            DATA0      = 0x00000001,
            DATA1      = 0x00000002,
            DATA2      = 0x00000004,
            DATA3      = 0x00000008,
            DATA4      = 0x00000010,
            DATA5      = 0x00000020,
            DATA6      = 0x00000040,
            DATA7      = 0x00000080,
            DATA8      = 0x00000100,
            DATA9      = 0x00000200,
            DATA10     = 0x00000400,
            DATA11     = 0x00000800,
            DATA12     = 0x00001000,
            DATA13     = 0x00002000,
            DATA14     = 0x00004000,
            DATA15     = 0x00008000,
            ADC2DATA0  = 0x00010000,
            ADC2DATA1  = 0x00020000,
            ADC2DATA2  = 0x00040000,
            ADC2DATA3  = 0x00080000,
            ADC2DATA4  = 0x00100000,
            ADC2DATA5  = 0x00200000,
            ADC2DATA6  = 0x00400000,
            ADC2DATA7  = 0x00800000,
            ADC2DATA8  = 0x01000000,
            ADC2DATA9  = 0x02000000,
            ADC2DATA10 = 0x04000000,
            ADC2DATA11 = 0x08000000,
            ADC2DATA12 = 0x10000000,
            ADC2DATA13 = 0x20000000,
            ADC2DATA14 = 0x40000000,
            ADC2DATA15 = 0x80000000,
        };
    };

    struct ADC2_SR {
        static constexpr uint32_t address = 0x40012800;
        enum bits : uint32_t {
            STRT  = 0x00000010,
            JSTRT = 0x00000008,
            JEOC  = 0x00000004,
            EOC   = 0x00000002,
            AWD   = 0x00000001,
        };
    };

    struct ADC2_CR1 {
        static constexpr uint32_t address = 0x40012804;
        enum bits : uint32_t {
            AWDEN    = 0x00800000,
            JAWDEN   = 0x00400000,
            DISCNUM0 = 0x00002000,
            DISCNUM1 = 0x00004000,
            DISCNUM2 = 0x00008000,
            JDISCEN  = 0x00001000,
            DISCEN   = 0x00000800,
            JAUTO    = 0x00000400,
            AWDSGL   = 0x00000200,
            SCAN     = 0x00000100,
            JEOCIE   = 0x00000080,
            AWDIE    = 0x00000040,
            EOCIE    = 0x00000020,
            AWDCH0   = 0x00000001,
            AWDCH1   = 0x00000002,
            AWDCH2   = 0x00000004,
            AWDCH3   = 0x00000008,
            AWDCH4   = 0x00000010,
        };
    };

    struct ADC2_CR2 {
        static constexpr uint32_t address = 0x40012808;
        enum bits : uint32_t {
            TSVREFE  = 0x00800000,
            SWSTART  = 0x00400000,
            JSWSTART = 0x00200000,
            EXTTRIG  = 0x00100000,
            EXTSEL0  = 0x00020000,
            EXTSEL1  = 0x00040000,
            EXTSEL2  = 0x00080000,
            JEXTTRIG = 0x00008000,
            JEXTSEL0 = 0x00001000,
            JEXTSEL1 = 0x00002000,
            JEXTSEL2 = 0x00004000,
            ALIGN    = 0x00000800,
            DMA      = 0x00000100,
            RSTCAL   = 0x00000008,
            CAL      = 0x00000004,
            CONT     = 0x00000002,
            ADON     = 0x00000001,
        };
    };

    struct ADC2_SMPR1 {
        static constexpr uint32_t address = 0x4001280c;
        enum bits : uint32_t {
            SMP100 = 0x00000001,
            SMP101 = 0x00000002,
            SMP102 = 0x00000004,
            SMP110 = 0x00000008,
            SMP111 = 0x00000010,
            SMP112 = 0x00000020,
            SMP120 = 0x00000040,
            SMP121 = 0x00000080,
            SMP122 = 0x00000100,
            SMP130 = 0x00000200,
            SMP131 = 0x00000400,
            SMP132 = 0x00000800,
            SMP140 = 0x00001000,
            SMP141 = 0x00002000,
            SMP142 = 0x00004000,
            SMP150 = 0x00008000,
            SMP151 = 0x00010000,
            SMP152 = 0x00020000,
            SMP160 = 0x00040000,
            SMP161 = 0x00080000,
            SMP162 = 0x00100000,
            SMP170 = 0x00200000,
            SMP171 = 0x00400000,
            SMP172 = 0x00800000,
        };
    };

    struct ADC2_SMPR2 {
        static constexpr uint32_t address = 0x40012810;
        enum bits : uint32_t {
            SMP00 = 0x00000001,
            SMP01 = 0x00000002,
            SMP02 = 0x00000004,
            SMP10 = 0x00000008,
            SMP11 = 0x00000010,
            SMP12 = 0x00000020,
            SMP20 = 0x00000040,
            SMP21 = 0x00000080,
            SMP22 = 0x00000100,
            SMP30 = 0x00000200,
            SMP31 = 0x00000400,
            SMP32 = 0x00000800,
            SMP40 = 0x00001000,
            SMP41 = 0x00002000,
            SMP42 = 0x00004000,
            SMP50 = 0x00008000,
            SMP51 = 0x00010000,
            SMP52 = 0x00020000,
            SMP60 = 0x00040000,
            SMP61 = 0x00080000,
            SMP62 = 0x00100000,
            SMP70 = 0x00200000,
            SMP71 = 0x00400000,
            SMP72 = 0x00800000,
            SMP80 = 0x01000000,
            SMP81 = 0x02000000,
            SMP82 = 0x04000000,
            SMP90 = 0x08000000,
            SMP91 = 0x10000000,
            SMP92 = 0x20000000,
        };
    };

    struct ADC2_JOFR1 {
        static constexpr uint32_t address = 0x40012814;
        enum bits : uint32_t {
            JOFFSET10  = 0x00000001,
            JOFFSET11  = 0x00000002,
            JOFFSET12  = 0x00000004,
            JOFFSET13  = 0x00000008,
            JOFFSET14  = 0x00000010,
            JOFFSET15  = 0x00000020,
            JOFFSET16  = 0x00000040,
            JOFFSET17  = 0x00000080,
            JOFFSET18  = 0x00000100,
            JOFFSET19  = 0x00000200,
            JOFFSET110 = 0x00000400,
            JOFFSET111 = 0x00000800,
        };
    };

    struct ADC2_JOFR2 {
        static constexpr uint32_t address = 0x40012818;
        enum bits : uint32_t {
            JOFFSET20  = 0x00000001,
            JOFFSET21  = 0x00000002,
            JOFFSET22  = 0x00000004,
            JOFFSET23  = 0x00000008,
            JOFFSET24  = 0x00000010,
            JOFFSET25  = 0x00000020,
            JOFFSET26  = 0x00000040,
            JOFFSET27  = 0x00000080,
            JOFFSET28  = 0x00000100,
            JOFFSET29  = 0x00000200,
            JOFFSET210 = 0x00000400,
            JOFFSET211 = 0x00000800,
        };
    };

    struct ADC2_JOFR3 {
        static constexpr uint32_t address = 0x4001281c;
        enum bits : uint32_t {
            JOFFSET30  = 0x00000001,
            JOFFSET31  = 0x00000002,
            JOFFSET32  = 0x00000004,
            JOFFSET33  = 0x00000008,
            JOFFSET34  = 0x00000010,
            JOFFSET35  = 0x00000020,
            JOFFSET36  = 0x00000040,
            JOFFSET37  = 0x00000080,
            JOFFSET38  = 0x00000100,
            JOFFSET39  = 0x00000200,
            JOFFSET310 = 0x00000400,
            JOFFSET311 = 0x00000800,
        };
    };

    struct ADC2_JOFR4 {
        static constexpr uint32_t address = 0x40012820;
        enum bits : uint32_t {
            JOFFSET40  = 0x00000001,
            JOFFSET41  = 0x00000002,
            JOFFSET42  = 0x00000004,
            JOFFSET43  = 0x00000008,
            JOFFSET44  = 0x00000010,
            JOFFSET45  = 0x00000020,
            JOFFSET46  = 0x00000040,
            JOFFSET47  = 0x00000080,
            JOFFSET48  = 0x00000100,
            JOFFSET49  = 0x00000200,
            JOFFSET410 = 0x00000400,
            JOFFSET411 = 0x00000800,
        };
    };

    struct ADC2_HTR {
        static constexpr uint32_t address = 0x40012824;
        enum bits : uint32_t {
            HT0  = 0x00000001,
            HT1  = 0x00000002,
            HT2  = 0x00000004,
            HT3  = 0x00000008,
            HT4  = 0x00000010,
            HT5  = 0x00000020,
            HT6  = 0x00000040,
            HT7  = 0x00000080,
            HT8  = 0x00000100,
            HT9  = 0x00000200,
            HT10 = 0x00000400,
            HT11 = 0x00000800,
        };
    };

    struct ADC2_LTR {
        static constexpr uint32_t address = 0x40012828;
        enum bits : uint32_t {
            LT0  = 0x00000001,
            LT1  = 0x00000002,
            LT2  = 0x00000004,
            LT3  = 0x00000008,
            LT4  = 0x00000010,
            LT5  = 0x00000020,
            LT6  = 0x00000040,
            LT7  = 0x00000080,
            LT8  = 0x00000100,
            LT9  = 0x00000200,
            LT10 = 0x00000400,
            LT11 = 0x00000800,
        };
    };

    struct ADC2_SQR1 {
        static constexpr uint32_t address = 0x4001282c;
        enum bits : uint32_t {
            L0    = 0x00100000,
            L1    = 0x00200000,
            L2    = 0x00400000,
            L3    = 0x00800000,
            SQ160 = 0x00008000,
            SQ161 = 0x00010000,
            SQ162 = 0x00020000,
            SQ163 = 0x00040000,
            SQ164 = 0x00080000,
            SQ150 = 0x00000400,
            SQ151 = 0x00000800,
            SQ152 = 0x00001000,
            SQ153 = 0x00002000,
            SQ154 = 0x00004000,
            SQ140 = 0x00000020,
            SQ141 = 0x00000040,
            SQ142 = 0x00000080,
            SQ143 = 0x00000100,
            SQ144 = 0x00000200,
            SQ130 = 0x00000001,
            SQ131 = 0x00000002,
            SQ132 = 0x00000004,
            SQ133 = 0x00000008,
            SQ134 = 0x00000010,
        };
    };

    struct ADC2_SQR2 {
        static constexpr uint32_t address = 0x40012830;
        enum bits : uint32_t {
            SQ120 = 0x02000000,
            SQ121 = 0x04000000,
            SQ122 = 0x08000000,
            SQ123 = 0x10000000,
            SQ124 = 0x20000000,
            SQ110 = 0x00100000,
            SQ111 = 0x00200000,
            SQ112 = 0x00400000,
            SQ113 = 0x00800000,
            SQ114 = 0x01000000,
            SQ100 = 0x00008000,
            SQ101 = 0x00010000,
            SQ102 = 0x00020000,
            SQ103 = 0x00040000,
            SQ104 = 0x00080000,
            SQ90  = 0x00000400,
            SQ91  = 0x00000800,
            SQ92  = 0x00001000,
            SQ93  = 0x00002000,
            SQ94  = 0x00004000,
            SQ80  = 0x00000020,
            SQ81  = 0x00000040,
            SQ82  = 0x00000080,
            SQ83  = 0x00000100,
            SQ84  = 0x00000200,
            SQ70  = 0x00000001,
            SQ71  = 0x00000002,
            SQ72  = 0x00000004,
            SQ73  = 0x00000008,
            SQ74  = 0x00000010,
        };
    };

    struct ADC2_SQR3 {
        static constexpr uint32_t address = 0x40012834;
        enum bits : uint32_t {
            SQ60 = 0x02000000,
            SQ61 = 0x04000000,
            SQ62 = 0x08000000,
            SQ63 = 0x10000000,
            SQ64 = 0x20000000,
            SQ50 = 0x00100000,
            SQ51 = 0x00200000,
            SQ52 = 0x00400000,
            SQ53 = 0x00800000,
            SQ54 = 0x01000000,
            SQ40 = 0x00008000,
            SQ41 = 0x00010000,
            SQ42 = 0x00020000,
            SQ43 = 0x00040000,
            SQ44 = 0x00080000,
            SQ30 = 0x00000400,
            SQ31 = 0x00000800,
            SQ32 = 0x00001000,
            SQ33 = 0x00002000,
            SQ34 = 0x00004000,
            SQ20 = 0x00000020,
            SQ21 = 0x00000040,
            SQ22 = 0x00000080,
            SQ23 = 0x00000100,
            SQ24 = 0x00000200,
            SQ10 = 0x00000001,
            SQ11 = 0x00000002,
            SQ12 = 0x00000004,
            SQ13 = 0x00000008,
            SQ14 = 0x00000010,
        };
    };

    struct ADC2_JSQR {
        static constexpr uint32_t address = 0x40012838;
        enum bits : uint32_t {
            JL0   = 0x00100000,
            JL1   = 0x00200000,
            JSQ40 = 0x00008000,
            JSQ41 = 0x00010000,
            JSQ42 = 0x00020000,
            JSQ43 = 0x00040000,
            JSQ44 = 0x00080000,
            JSQ30 = 0x00000400,
            JSQ31 = 0x00000800,
            JSQ32 = 0x00001000,
            JSQ33 = 0x00002000,
            JSQ34 = 0x00004000,
            JSQ20 = 0x00000020,
            JSQ21 = 0x00000040,
            JSQ22 = 0x00000080,
            JSQ23 = 0x00000100,
            JSQ24 = 0x00000200,
            JSQ10 = 0x00000001,
            JSQ11 = 0x00000002,
            JSQ12 = 0x00000004,
            JSQ13 = 0x00000008,
            JSQ14 = 0x00000010,
        };
    };

    struct ADC2_JDR1 {
        static constexpr uint32_t address = 0x4001283c;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC2_JDR2 {
        static constexpr uint32_t address = 0x40012840;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC2_JDR3 {
        static constexpr uint32_t address = 0x40012844;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC2_JDR4 {
        static constexpr uint32_t address = 0x40012848;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC2_DR {
        static constexpr uint32_t address = 0x4001284c;
        enum bits : uint32_t {
            DATA0  = 0x00000001,
            DATA1  = 0x00000002,
            DATA2  = 0x00000004,
            DATA3  = 0x00000008,
            DATA4  = 0x00000010,
            DATA5  = 0x00000020,
            DATA6  = 0x00000040,
            DATA7  = 0x00000080,
            DATA8  = 0x00000100,
            DATA9  = 0x00000200,
            DATA10 = 0x00000400,
            DATA11 = 0x00000800,
            DATA12 = 0x00001000,
            DATA13 = 0x00002000,
            DATA14 = 0x00004000,
            DATA15 = 0x00008000,
        };
    };

    struct ADC3_SR {
        static constexpr uint32_t address = 0x40013c00;
        enum bits : uint32_t {
            STRT  = 0x00000010,
            JSTRT = 0x00000008,
            JEOC  = 0x00000004,
            EOC   = 0x00000002,
            AWD   = 0x00000001,
        };
    };

    struct ADC3_CR1 {
        static constexpr uint32_t address = 0x40013c04;
        enum bits : uint32_t {
            AWDEN    = 0x00800000,
            JAWDEN   = 0x00400000,
            DISCNUM0 = 0x00002000,
            DISCNUM1 = 0x00004000,
            DISCNUM2 = 0x00008000,
            JDISCEN  = 0x00001000,
            DISCEN   = 0x00000800,
            JAUTO    = 0x00000400,
            AWDSGL   = 0x00000200,
            SCAN     = 0x00000100,
            JEOCIE   = 0x00000080,
            AWDIE    = 0x00000040,
            EOCIE    = 0x00000020,
            AWDCH0   = 0x00000001,
            AWDCH1   = 0x00000002,
            AWDCH2   = 0x00000004,
            AWDCH3   = 0x00000008,
            AWDCH4   = 0x00000010,
        };
    };

    struct ADC3_CR2 {
        static constexpr uint32_t address = 0x40013c08;
        enum bits : uint32_t {
            TSVREFE  = 0x00800000,
            SWSTART  = 0x00400000,
            JSWSTART = 0x00200000,
            EXTTRIG  = 0x00100000,
            EXTSEL0  = 0x00020000,
            EXTSEL1  = 0x00040000,
            EXTSEL2  = 0x00080000,
            JEXTTRIG = 0x00008000,
            JEXTSEL0 = 0x00001000,
            JEXTSEL1 = 0x00002000,
            JEXTSEL2 = 0x00004000,
            ALIGN    = 0x00000800,
            DMA      = 0x00000100,
            RSTCAL   = 0x00000008,
            CAL      = 0x00000004,
            CONT     = 0x00000002,
            ADON     = 0x00000001,
        };
    };

    struct ADC3_SMPR1 {
        static constexpr uint32_t address = 0x40013c0c;
        enum bits : uint32_t {
            SMP100 = 0x00000001,
            SMP101 = 0x00000002,
            SMP102 = 0x00000004,
            SMP110 = 0x00000008,
            SMP111 = 0x00000010,
            SMP112 = 0x00000020,
            SMP120 = 0x00000040,
            SMP121 = 0x00000080,
            SMP122 = 0x00000100,
            SMP130 = 0x00000200,
            SMP131 = 0x00000400,
            SMP132 = 0x00000800,
            SMP140 = 0x00001000,
            SMP141 = 0x00002000,
            SMP142 = 0x00004000,
            SMP150 = 0x00008000,
            SMP151 = 0x00010000,
            SMP152 = 0x00020000,
            SMP160 = 0x00040000,
            SMP161 = 0x00080000,
            SMP162 = 0x00100000,
            SMP170 = 0x00200000,
            SMP171 = 0x00400000,
            SMP172 = 0x00800000,
        };
    };

    struct ADC3_SMPR2 {
        static constexpr uint32_t address = 0x40013c10;
        enum bits : uint32_t {
            SMP00 = 0x00000001,
            SMP01 = 0x00000002,
            SMP02 = 0x00000004,
            SMP10 = 0x00000008,
            SMP11 = 0x00000010,
            SMP12 = 0x00000020,
            SMP20 = 0x00000040,
            SMP21 = 0x00000080,
            SMP22 = 0x00000100,
            SMP30 = 0x00000200,
            SMP31 = 0x00000400,
            SMP32 = 0x00000800,
            SMP40 = 0x00001000,
            SMP41 = 0x00002000,
            SMP42 = 0x00004000,
            SMP50 = 0x00008000,
            SMP51 = 0x00010000,
            SMP52 = 0x00020000,
            SMP60 = 0x00040000,
            SMP61 = 0x00080000,
            SMP62 = 0x00100000,
            SMP70 = 0x00200000,
            SMP71 = 0x00400000,
            SMP72 = 0x00800000,
            SMP80 = 0x01000000,
            SMP81 = 0x02000000,
            SMP82 = 0x04000000,
            SMP90 = 0x08000000,
            SMP91 = 0x10000000,
            SMP92 = 0x20000000,
        };
    };

    struct ADC3_JOFR1 {
        static constexpr uint32_t address = 0x40013c14;
        enum bits : uint32_t {
            JOFFSET10  = 0x00000001,
            JOFFSET11  = 0x00000002,
            JOFFSET12  = 0x00000004,
            JOFFSET13  = 0x00000008,
            JOFFSET14  = 0x00000010,
            JOFFSET15  = 0x00000020,
            JOFFSET16  = 0x00000040,
            JOFFSET17  = 0x00000080,
            JOFFSET18  = 0x00000100,
            JOFFSET19  = 0x00000200,
            JOFFSET110 = 0x00000400,
            JOFFSET111 = 0x00000800,
        };
    };

    struct ADC3_JOFR2 {
        static constexpr uint32_t address = 0x40013c18;
        enum bits : uint32_t {
            JOFFSET20  = 0x00000001,
            JOFFSET21  = 0x00000002,
            JOFFSET22  = 0x00000004,
            JOFFSET23  = 0x00000008,
            JOFFSET24  = 0x00000010,
            JOFFSET25  = 0x00000020,
            JOFFSET26  = 0x00000040,
            JOFFSET27  = 0x00000080,
            JOFFSET28  = 0x00000100,
            JOFFSET29  = 0x00000200,
            JOFFSET210 = 0x00000400,
            JOFFSET211 = 0x00000800,
        };
    };

    struct ADC3_JOFR3 {
        static constexpr uint32_t address = 0x40013c1c;
        enum bits : uint32_t {
            JOFFSET30  = 0x00000001,
            JOFFSET31  = 0x00000002,
            JOFFSET32  = 0x00000004,
            JOFFSET33  = 0x00000008,
            JOFFSET34  = 0x00000010,
            JOFFSET35  = 0x00000020,
            JOFFSET36  = 0x00000040,
            JOFFSET37  = 0x00000080,
            JOFFSET38  = 0x00000100,
            JOFFSET39  = 0x00000200,
            JOFFSET310 = 0x00000400,
            JOFFSET311 = 0x00000800,
        };
    };

    struct ADC3_JOFR4 {
        static constexpr uint32_t address = 0x40013c20;
        enum bits : uint32_t {
            JOFFSET40  = 0x00000001,
            JOFFSET41  = 0x00000002,
            JOFFSET42  = 0x00000004,
            JOFFSET43  = 0x00000008,
            JOFFSET44  = 0x00000010,
            JOFFSET45  = 0x00000020,
            JOFFSET46  = 0x00000040,
            JOFFSET47  = 0x00000080,
            JOFFSET48  = 0x00000100,
            JOFFSET49  = 0x00000200,
            JOFFSET410 = 0x00000400,
            JOFFSET411 = 0x00000800,
        };
    };

    struct ADC3_HTR {
        static constexpr uint32_t address = 0x40013c24;
        enum bits : uint32_t {
            HT0  = 0x00000001,
            HT1  = 0x00000002,
            HT2  = 0x00000004,
            HT3  = 0x00000008,
            HT4  = 0x00000010,
            HT5  = 0x00000020,
            HT6  = 0x00000040,
            HT7  = 0x00000080,
            HT8  = 0x00000100,
            HT9  = 0x00000200,
            HT10 = 0x00000400,
            HT11 = 0x00000800,
        };
    };

    struct ADC3_LTR {
        static constexpr uint32_t address = 0x40013c28;
        enum bits : uint32_t {
            LT0  = 0x00000001,
            LT1  = 0x00000002,
            LT2  = 0x00000004,
            LT3  = 0x00000008,
            LT4  = 0x00000010,
            LT5  = 0x00000020,
            LT6  = 0x00000040,
            LT7  = 0x00000080,
            LT8  = 0x00000100,
            LT9  = 0x00000200,
            LT10 = 0x00000400,
            LT11 = 0x00000800,
        };
    };

    struct ADC3_SQR1 {
        static constexpr uint32_t address = 0x40013c2c;
        enum bits : uint32_t {
            L0    = 0x00100000,
            L1    = 0x00200000,
            L2    = 0x00400000,
            L3    = 0x00800000,
            SQ160 = 0x00008000,
            SQ161 = 0x00010000,
            SQ162 = 0x00020000,
            SQ163 = 0x00040000,
            SQ164 = 0x00080000,
            SQ150 = 0x00000400,
            SQ151 = 0x00000800,
            SQ152 = 0x00001000,
            SQ153 = 0x00002000,
            SQ154 = 0x00004000,
            SQ140 = 0x00000020,
            SQ141 = 0x00000040,
            SQ142 = 0x00000080,
            SQ143 = 0x00000100,
            SQ144 = 0x00000200,
            SQ130 = 0x00000001,
            SQ131 = 0x00000002,
            SQ132 = 0x00000004,
            SQ133 = 0x00000008,
            SQ134 = 0x00000010,
        };
    };

    struct ADC3_SQR2 {
        static constexpr uint32_t address = 0x40013c30;
        enum bits : uint32_t {
            SQ120 = 0x02000000,
            SQ121 = 0x04000000,
            SQ122 = 0x08000000,
            SQ123 = 0x10000000,
            SQ124 = 0x20000000,
            SQ110 = 0x00100000,
            SQ111 = 0x00200000,
            SQ112 = 0x00400000,
            SQ113 = 0x00800000,
            SQ114 = 0x01000000,
            SQ100 = 0x00008000,
            SQ101 = 0x00010000,
            SQ102 = 0x00020000,
            SQ103 = 0x00040000,
            SQ104 = 0x00080000,
            SQ90  = 0x00000400,
            SQ91  = 0x00000800,
            SQ92  = 0x00001000,
            SQ93  = 0x00002000,
            SQ94  = 0x00004000,
            SQ80  = 0x00000020,
            SQ81  = 0x00000040,
            SQ82  = 0x00000080,
            SQ83  = 0x00000100,
            SQ84  = 0x00000200,
            SQ70  = 0x00000001,
            SQ71  = 0x00000002,
            SQ72  = 0x00000004,
            SQ73  = 0x00000008,
            SQ74  = 0x00000010,
        };
    };

    struct ADC3_SQR3 {
        static constexpr uint32_t address = 0x40013c34;
        enum bits : uint32_t {
            SQ60 = 0x02000000,
            SQ61 = 0x04000000,
            SQ62 = 0x08000000,
            SQ63 = 0x10000000,
            SQ64 = 0x20000000,
            SQ50 = 0x00100000,
            SQ51 = 0x00200000,
            SQ52 = 0x00400000,
            SQ53 = 0x00800000,
            SQ54 = 0x01000000,
            SQ40 = 0x00008000,
            SQ41 = 0x00010000,
            SQ42 = 0x00020000,
            SQ43 = 0x00040000,
            SQ44 = 0x00080000,
            SQ30 = 0x00000400,
            SQ31 = 0x00000800,
            SQ32 = 0x00001000,
            SQ33 = 0x00002000,
            SQ34 = 0x00004000,
            SQ20 = 0x00000020,
            SQ21 = 0x00000040,
            SQ22 = 0x00000080,
            SQ23 = 0x00000100,
            SQ24 = 0x00000200,
            SQ10 = 0x00000001,
            SQ11 = 0x00000002,
            SQ12 = 0x00000004,
            SQ13 = 0x00000008,
            SQ14 = 0x00000010,
        };
    };

    struct ADC3_JSQR {
        static constexpr uint32_t address = 0x40013c38;
        enum bits : uint32_t {
            JL0   = 0x00100000,
            JL1   = 0x00200000,
            JSQ40 = 0x00008000,
            JSQ41 = 0x00010000,
            JSQ42 = 0x00020000,
            JSQ43 = 0x00040000,
            JSQ44 = 0x00080000,
            JSQ30 = 0x00000400,
            JSQ31 = 0x00000800,
            JSQ32 = 0x00001000,
            JSQ33 = 0x00002000,
            JSQ34 = 0x00004000,
            JSQ20 = 0x00000020,
            JSQ21 = 0x00000040,
            JSQ22 = 0x00000080,
            JSQ23 = 0x00000100,
            JSQ24 = 0x00000200,
            JSQ10 = 0x00000001,
            JSQ11 = 0x00000002,
            JSQ12 = 0x00000004,
            JSQ13 = 0x00000008,
            JSQ14 = 0x00000010,
        };
    };

    struct ADC3_JDR1 {
        static constexpr uint32_t address = 0x40013c3c;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC3_JDR2 {
        static constexpr uint32_t address = 0x40013c40;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC3_JDR3 {
        static constexpr uint32_t address = 0x40013c44;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC3_JDR4 {
        static constexpr uint32_t address = 0x40013c48;
        enum bits : uint32_t {
            JDATA0  = 0x00000001,
            JDATA1  = 0x00000002,
            JDATA2  = 0x00000004,
            JDATA3  = 0x00000008,
            JDATA4  = 0x00000010,
            JDATA5  = 0x00000020,
            JDATA6  = 0x00000040,
            JDATA7  = 0x00000080,
            JDATA8  = 0x00000100,
            JDATA9  = 0x00000200,
            JDATA10 = 0x00000400,
            JDATA11 = 0x00000800,
            JDATA12 = 0x00001000,
            JDATA13 = 0x00002000,
            JDATA14 = 0x00004000,
            JDATA15 = 0x00008000,
        };
    };

    struct ADC3_DR {
        static constexpr uint32_t address = 0x40013c4c;
        enum bits : uint32_t {
            DATA0  = 0x00000001,
            DATA1  = 0x00000002,
            DATA2  = 0x00000004,
            DATA3  = 0x00000008,
            DATA4  = 0x00000010,
            DATA5  = 0x00000020,
            DATA6  = 0x00000040,
            DATA7  = 0x00000080,
            DATA8  = 0x00000100,
            DATA9  = 0x00000200,
            DATA10 = 0x00000400,
            DATA11 = 0x00000800,
            DATA12 = 0x00001000,
            DATA13 = 0x00002000,
            DATA14 = 0x00004000,
            DATA15 = 0x00008000,
        };
    };

    struct CAN1_CAN_MCR {
        static constexpr uint32_t address = 0x40006400;
        enum bits : uint32_t {
            DBF   = 0x00010000,
            RESET = 0x00008000,
            TTCM  = 0x00000080,
            ABOM  = 0x00000040,
            AWUM  = 0x00000020,
            NART  = 0x00000010,
            RFLM  = 0x00000008,
            TXFP  = 0x00000004,
            SLEEP = 0x00000002,
            INRQ  = 0x00000001,
        };
    };

    struct CAN1_CAN_MSR {
        static constexpr uint32_t address = 0x40006404;
        enum bits : uint32_t {
            RX    = 0x00000800,
            SAMP  = 0x00000400,
            RXM   = 0x00000200,
            TXM   = 0x00000100,
            SLAKI = 0x00000010,
            WKUI  = 0x00000008,
            ERRI  = 0x00000004,
            SLAK  = 0x00000002,
            INAK  = 0x00000001,
        };
    };

    struct CAN1_CAN_TSR {
        static constexpr uint32_t address = 0x40006408;
        enum bits : uint32_t {
            LOW2  = 0x80000000,
            LOW1  = 0x40000000,
            LOW0  = 0x20000000,
            TME2  = 0x10000000,
            TME1  = 0x08000000,
            TME0  = 0x04000000,
            CODE0 = 0x01000000,
            CODE1 = 0x02000000,
            ABRQ2 = 0x00800000,
            TERR2 = 0x00080000,
            ALST2 = 0x00040000,
            TXOK2 = 0x00020000,
            RQCP2 = 0x00010000,
            ABRQ1 = 0x00008000,
            TERR1 = 0x00000800,
            ALST1 = 0x00000400,
            TXOK1 = 0x00000200,
            RQCP1 = 0x00000100,
            ABRQ0 = 0x00000080,
            TERR0 = 0x00000008,
            ALST0 = 0x00000004,
            TXOK0 = 0x00000002,
            RQCP0 = 0x00000001,
        };
    };

    struct CAN1_CAN_RF0R {
        static constexpr uint32_t address = 0x4000640c;
        enum bits : uint32_t {
            RFOM0 = 0x00000020,
            FOVR0 = 0x00000010,
            FULL0 = 0x00000008,
            FMP00 = 0x00000001,
            FMP01 = 0x00000002,
        };
    };

    struct CAN1_CAN_RF1R {
        static constexpr uint32_t address = 0x40006410;
        enum bits : uint32_t {
            RFOM1 = 0x00000020,
            FOVR1 = 0x00000010,
            FULL1 = 0x00000008,
            FMP10 = 0x00000001,
            FMP11 = 0x00000002,
        };
    };

    struct CAN1_CAN_IER {
        static constexpr uint32_t address = 0x40006414;
        enum bits : uint32_t {
            SLKIE  = 0x00020000,
            WKUIE  = 0x00010000,
            ERRIE  = 0x00008000,
            LECIE  = 0x00000800,
            BOFIE  = 0x00000400,
            EPVIE  = 0x00000200,
            EWGIE  = 0x00000100,
            FOVIE1 = 0x00000040,
            FFIE1  = 0x00000020,
            FMPIE1 = 0x00000010,
            FOVIE0 = 0x00000008,
            FFIE0  = 0x00000004,
            FMPIE0 = 0x00000002,
            TMEIE  = 0x00000001,
        };
    };

    struct CAN1_CAN_ESR {
        static constexpr uint32_t address = 0x40006418;
        enum bits : uint32_t {
            REC0 = 0x01000000,
            REC1 = 0x02000000,
            REC2 = 0x04000000,
            REC3 = 0x08000000,
            REC4 = 0x10000000,
            REC5 = 0x20000000,
            REC6 = 0x40000000,
            REC7 = 0x80000000,
            TEC0 = 0x00010000,
            TEC1 = 0x00020000,
            TEC2 = 0x00040000,
            TEC3 = 0x00080000,
            TEC4 = 0x00100000,
            TEC5 = 0x00200000,
            TEC6 = 0x00400000,
            TEC7 = 0x00800000,
            LEC0 = 0x00000010,
            LEC1 = 0x00000020,
            LEC2 = 0x00000040,
            BOFF = 0x00000004,
            EPVF = 0x00000002,
            EWGF = 0x00000001,
        };
    };

    struct CAN1_CAN_BTR {
        static constexpr uint32_t address = 0x4000641c;
        enum bits : uint32_t {
            SILM = 0x80000000,
            LBKM = 0x40000000,
            SJW0 = 0x01000000,
            SJW1 = 0x02000000,
            TS20 = 0x00100000,
            TS21 = 0x00200000,
            TS22 = 0x00400000,
            TS10 = 0x00010000,
            TS11 = 0x00020000,
            TS12 = 0x00040000,
            TS13 = 0x00080000,
            BRP0 = 0x00000001,
            BRP1 = 0x00000002,
            BRP2 = 0x00000004,
            BRP3 = 0x00000008,
            BRP4 = 0x00000010,
            BRP5 = 0x00000020,
            BRP6 = 0x00000040,
            BRP7 = 0x00000080,
            BRP8 = 0x00000100,
            BRP9 = 0x00000200,
        };
    };

    struct CAN1_CAN_TI0R {
        static constexpr uint32_t address = 0x40006580;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN1_CAN_TDT0R {
        static constexpr uint32_t address = 0x40006584;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN1_CAN_TDL0R {
        static constexpr uint32_t address = 0x40006588;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN1_CAN_TDH0R {
        static constexpr uint32_t address = 0x4000658c;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN1_CAN_TI1R {
        static constexpr uint32_t address = 0x40006590;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN1_CAN_TDT1R {
        static constexpr uint32_t address = 0x40006594;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN1_CAN_TDL1R {
        static constexpr uint32_t address = 0x40006598;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN1_CAN_TDH1R {
        static constexpr uint32_t address = 0x4000659c;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN1_CAN_TI2R {
        static constexpr uint32_t address = 0x400065a0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN1_CAN_TDT2R {
        static constexpr uint32_t address = 0x400065a4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN1_CAN_TDL2R {
        static constexpr uint32_t address = 0x400065a8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN1_CAN_TDH2R {
        static constexpr uint32_t address = 0x400065ac;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN1_CAN_RI0R {
        static constexpr uint32_t address = 0x400065b0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
        };
    };

    struct CAN1_CAN_RDT0R {
        static constexpr uint32_t address = 0x400065b4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            FMI0   = 0x00000100,
            FMI1   = 0x00000200,
            FMI2   = 0x00000400,
            FMI3   = 0x00000800,
            FMI4   = 0x00001000,
            FMI5   = 0x00002000,
            FMI6   = 0x00004000,
            FMI7   = 0x00008000,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN1_CAN_RDL0R {
        static constexpr uint32_t address = 0x400065b8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN1_CAN_RDH0R {
        static constexpr uint32_t address = 0x400065bc;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN1_CAN_RI1R {
        static constexpr uint32_t address = 0x400065c0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
        };
    };

    struct CAN1_CAN_RDT1R {
        static constexpr uint32_t address = 0x400065c4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            FMI0   = 0x00000100,
            FMI1   = 0x00000200,
            FMI2   = 0x00000400,
            FMI3   = 0x00000800,
            FMI4   = 0x00001000,
            FMI5   = 0x00002000,
            FMI6   = 0x00004000,
            FMI7   = 0x00008000,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN1_CAN_RDL1R {
        static constexpr uint32_t address = 0x400065c8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN1_CAN_RDH1R {
        static constexpr uint32_t address = 0x400065cc;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN1_CAN_FMR {
        static constexpr uint32_t address = 0x40006600;
        enum bits : uint32_t {
            FINIT = 0x00000001,
        };
    };

    struct CAN1_CAN_FM1R {
        static constexpr uint32_t address = 0x40006604;
        enum bits : uint32_t {
            FBM0  = 0x00000001,
            FBM1  = 0x00000002,
            FBM2  = 0x00000004,
            FBM3  = 0x00000008,
            FBM4  = 0x00000010,
            FBM5  = 0x00000020,
            FBM6  = 0x00000040,
            FBM7  = 0x00000080,
            FBM8  = 0x00000100,
            FBM9  = 0x00000200,
            FBM10 = 0x00000400,
            FBM11 = 0x00000800,
            FBM12 = 0x00001000,
            FBM13 = 0x00002000,
        };
    };

    struct CAN1_CAN_FS1R {
        static constexpr uint32_t address = 0x4000660c;
        enum bits : uint32_t {
            FSC0  = 0x00000001,
            FSC1  = 0x00000002,
            FSC2  = 0x00000004,
            FSC3  = 0x00000008,
            FSC4  = 0x00000010,
            FSC5  = 0x00000020,
            FSC6  = 0x00000040,
            FSC7  = 0x00000080,
            FSC8  = 0x00000100,
            FSC9  = 0x00000200,
            FSC10 = 0x00000400,
            FSC11 = 0x00000800,
            FSC12 = 0x00001000,
            FSC13 = 0x00002000,
        };
    };

    struct CAN1_CAN_FFA1R {
        static constexpr uint32_t address = 0x40006614;
        enum bits : uint32_t {
            FFA0  = 0x00000001,
            FFA1  = 0x00000002,
            FFA2  = 0x00000004,
            FFA3  = 0x00000008,
            FFA4  = 0x00000010,
            FFA5  = 0x00000020,
            FFA6  = 0x00000040,
            FFA7  = 0x00000080,
            FFA8  = 0x00000100,
            FFA9  = 0x00000200,
            FFA10 = 0x00000400,
            FFA11 = 0x00000800,
            FFA12 = 0x00001000,
            FFA13 = 0x00002000,
        };
    };

    struct CAN1_CAN_FA1R {
        static constexpr uint32_t address = 0x4000661c;
        enum bits : uint32_t {
            FACT0  = 0x00000001,
            FACT1  = 0x00000002,
            FACT2  = 0x00000004,
            FACT3  = 0x00000008,
            FACT4  = 0x00000010,
            FACT5  = 0x00000020,
            FACT6  = 0x00000040,
            FACT7  = 0x00000080,
            FACT8  = 0x00000100,
            FACT9  = 0x00000200,
            FACT10 = 0x00000400,
            FACT11 = 0x00000800,
            FACT12 = 0x00001000,
            FACT13 = 0x00002000,
        };
    };

    struct CAN1_F0R1 {
        static constexpr uint32_t address = 0x40006640;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F0R2 {
        static constexpr uint32_t address = 0x40006644;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F1R1 {
        static constexpr uint32_t address = 0x40006648;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F1R2 {
        static constexpr uint32_t address = 0x4000664c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F2R1 {
        static constexpr uint32_t address = 0x40006650;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F2R2 {
        static constexpr uint32_t address = 0x40006654;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F3R1 {
        static constexpr uint32_t address = 0x40006658;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F3R2 {
        static constexpr uint32_t address = 0x4000665c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F4R1 {
        static constexpr uint32_t address = 0x40006660;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F4R2 {
        static constexpr uint32_t address = 0x40006664;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F5R1 {
        static constexpr uint32_t address = 0x40006668;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F5R2 {
        static constexpr uint32_t address = 0x4000666c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F6R1 {
        static constexpr uint32_t address = 0x40006670;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F6R2 {
        static constexpr uint32_t address = 0x40006674;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F7R1 {
        static constexpr uint32_t address = 0x40006678;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F7R2 {
        static constexpr uint32_t address = 0x4000667c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F8R1 {
        static constexpr uint32_t address = 0x40006680;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F8R2 {
        static constexpr uint32_t address = 0x40006684;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F9R1 {
        static constexpr uint32_t address = 0x40006688;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F9R2 {
        static constexpr uint32_t address = 0x4000668c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F10R1 {
        static constexpr uint32_t address = 0x40006690;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F10R2 {
        static constexpr uint32_t address = 0x40006694;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F11R1 {
        static constexpr uint32_t address = 0x40006698;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F11R2 {
        static constexpr uint32_t address = 0x4000669c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F12R1 {
        static constexpr uint32_t address = 0x400066a0;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F12R2 {
        static constexpr uint32_t address = 0x400066a4;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F13R1 {
        static constexpr uint32_t address = 0x400066a8;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN1_F13R2 {
        static constexpr uint32_t address = 0x400066ac;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_CAN_MCR {
        static constexpr uint32_t address = 0x40006800;
        enum bits : uint32_t {
            DBF   = 0x00010000,
            RESET = 0x00008000,
            TTCM  = 0x00000080,
            ABOM  = 0x00000040,
            AWUM  = 0x00000020,
            NART  = 0x00000010,
            RFLM  = 0x00000008,
            TXFP  = 0x00000004,
            SLEEP = 0x00000002,
            INRQ  = 0x00000001,
        };
    };

    struct CAN2_CAN_MSR {
        static constexpr uint32_t address = 0x40006804;
        enum bits : uint32_t {
            RX    = 0x00000800,
            SAMP  = 0x00000400,
            RXM   = 0x00000200,
            TXM   = 0x00000100,
            SLAKI = 0x00000010,
            WKUI  = 0x00000008,
            ERRI  = 0x00000004,
            SLAK  = 0x00000002,
            INAK  = 0x00000001,
        };
    };

    struct CAN2_CAN_TSR {
        static constexpr uint32_t address = 0x40006808;
        enum bits : uint32_t {
            LOW2  = 0x80000000,
            LOW1  = 0x40000000,
            LOW0  = 0x20000000,
            TME2  = 0x10000000,
            TME1  = 0x08000000,
            TME0  = 0x04000000,
            CODE0 = 0x01000000,
            CODE1 = 0x02000000,
            ABRQ2 = 0x00800000,
            TERR2 = 0x00080000,
            ALST2 = 0x00040000,
            TXOK2 = 0x00020000,
            RQCP2 = 0x00010000,
            ABRQ1 = 0x00008000,
            TERR1 = 0x00000800,
            ALST1 = 0x00000400,
            TXOK1 = 0x00000200,
            RQCP1 = 0x00000100,
            ABRQ0 = 0x00000080,
            TERR0 = 0x00000008,
            ALST0 = 0x00000004,
            TXOK0 = 0x00000002,
            RQCP0 = 0x00000001,
        };
    };

    struct CAN2_CAN_RF0R {
        static constexpr uint32_t address = 0x4000680c;
        enum bits : uint32_t {
            RFOM0 = 0x00000020,
            FOVR0 = 0x00000010,
            FULL0 = 0x00000008,
            FMP00 = 0x00000001,
            FMP01 = 0x00000002,
        };
    };

    struct CAN2_CAN_RF1R {
        static constexpr uint32_t address = 0x40006810;
        enum bits : uint32_t {
            RFOM1 = 0x00000020,
            FOVR1 = 0x00000010,
            FULL1 = 0x00000008,
            FMP10 = 0x00000001,
            FMP11 = 0x00000002,
        };
    };

    struct CAN2_CAN_IER {
        static constexpr uint32_t address = 0x40006814;
        enum bits : uint32_t {
            SLKIE  = 0x00020000,
            WKUIE  = 0x00010000,
            ERRIE  = 0x00008000,
            LECIE  = 0x00000800,
            BOFIE  = 0x00000400,
            EPVIE  = 0x00000200,
            EWGIE  = 0x00000100,
            FOVIE1 = 0x00000040,
            FFIE1  = 0x00000020,
            FMPIE1 = 0x00000010,
            FOVIE0 = 0x00000008,
            FFIE0  = 0x00000004,
            FMPIE0 = 0x00000002,
            TMEIE  = 0x00000001,
        };
    };

    struct CAN2_CAN_ESR {
        static constexpr uint32_t address = 0x40006818;
        enum bits : uint32_t {
            REC0 = 0x01000000,
            REC1 = 0x02000000,
            REC2 = 0x04000000,
            REC3 = 0x08000000,
            REC4 = 0x10000000,
            REC5 = 0x20000000,
            REC6 = 0x40000000,
            REC7 = 0x80000000,
            TEC0 = 0x00010000,
            TEC1 = 0x00020000,
            TEC2 = 0x00040000,
            TEC3 = 0x00080000,
            TEC4 = 0x00100000,
            TEC5 = 0x00200000,
            TEC6 = 0x00400000,
            TEC7 = 0x00800000,
            LEC0 = 0x00000010,
            LEC1 = 0x00000020,
            LEC2 = 0x00000040,
            BOFF = 0x00000004,
            EPVF = 0x00000002,
            EWGF = 0x00000001,
        };
    };

    struct CAN2_CAN_BTR {
        static constexpr uint32_t address = 0x4000681c;
        enum bits : uint32_t {
            SILM = 0x80000000,
            LBKM = 0x40000000,
            SJW0 = 0x01000000,
            SJW1 = 0x02000000,
            TS20 = 0x00100000,
            TS21 = 0x00200000,
            TS22 = 0x00400000,
            TS10 = 0x00010000,
            TS11 = 0x00020000,
            TS12 = 0x00040000,
            TS13 = 0x00080000,
            BRP0 = 0x00000001,
            BRP1 = 0x00000002,
            BRP2 = 0x00000004,
            BRP3 = 0x00000008,
            BRP4 = 0x00000010,
            BRP5 = 0x00000020,
            BRP6 = 0x00000040,
            BRP7 = 0x00000080,
            BRP8 = 0x00000100,
            BRP9 = 0x00000200,
        };
    };

    struct CAN2_CAN_TI0R {
        static constexpr uint32_t address = 0x40006980;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN2_CAN_TDT0R {
        static constexpr uint32_t address = 0x40006984;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN2_CAN_TDL0R {
        static constexpr uint32_t address = 0x40006988;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN2_CAN_TDH0R {
        static constexpr uint32_t address = 0x4000698c;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN2_CAN_TI1R {
        static constexpr uint32_t address = 0x40006990;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN2_CAN_TDT1R {
        static constexpr uint32_t address = 0x40006994;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN2_CAN_TDL1R {
        static constexpr uint32_t address = 0x40006998;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN2_CAN_TDH1R {
        static constexpr uint32_t address = 0x4000699c;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN2_CAN_TI2R {
        static constexpr uint32_t address = 0x400069a0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
            TXRQ   = 0x00000001,
        };
    };

    struct CAN2_CAN_TDT2R {
        static constexpr uint32_t address = 0x400069a4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            TGT    = 0x00000100,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN2_CAN_TDL2R {
        static constexpr uint32_t address = 0x400069a8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN2_CAN_TDH2R {
        static constexpr uint32_t address = 0x400069ac;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN2_CAN_RI0R {
        static constexpr uint32_t address = 0x400069b0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
        };
    };

    struct CAN2_CAN_RDT0R {
        static constexpr uint32_t address = 0x400069b4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            FMI0   = 0x00000100,
            FMI1   = 0x00000200,
            FMI2   = 0x00000400,
            FMI3   = 0x00000800,
            FMI4   = 0x00001000,
            FMI5   = 0x00002000,
            FMI6   = 0x00004000,
            FMI7   = 0x00008000,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN2_CAN_RDL0R {
        static constexpr uint32_t address = 0x400069b8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN2_CAN_RDH0R {
        static constexpr uint32_t address = 0x400069bc;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN2_CAN_RI1R {
        static constexpr uint32_t address = 0x400069c0;
        enum bits : uint32_t {
            STID0  = 0x00200000,
            STID1  = 0x00400000,
            STID2  = 0x00800000,
            STID3  = 0x01000000,
            STID4  = 0x02000000,
            STID5  = 0x04000000,
            STID6  = 0x08000000,
            STID7  = 0x10000000,
            STID8  = 0x20000000,
            STID9  = 0x40000000,
            STID10 = 0x80000000,
            EXID0  = 0x00000008,
            EXID1  = 0x00000010,
            EXID2  = 0x00000020,
            EXID3  = 0x00000040,
            EXID4  = 0x00000080,
            EXID5  = 0x00000100,
            EXID6  = 0x00000200,
            EXID7  = 0x00000400,
            EXID8  = 0x00000800,
            EXID9  = 0x00001000,
            EXID10 = 0x00002000,
            EXID11 = 0x00004000,
            EXID12 = 0x00008000,
            EXID13 = 0x00010000,
            EXID14 = 0x00020000,
            EXID15 = 0x00040000,
            EXID16 = 0x00080000,
            EXID17 = 0x00100000,
            IDE    = 0x00000004,
            RTR    = 0x00000002,
        };
    };

    struct CAN2_CAN_RDT1R {
        static constexpr uint32_t address = 0x400069c4;
        enum bits : uint32_t {
            TIME0  = 0x00010000,
            TIME1  = 0x00020000,
            TIME2  = 0x00040000,
            TIME3  = 0x00080000,
            TIME4  = 0x00100000,
            TIME5  = 0x00200000,
            TIME6  = 0x00400000,
            TIME7  = 0x00800000,
            TIME8  = 0x01000000,
            TIME9  = 0x02000000,
            TIME10 = 0x04000000,
            TIME11 = 0x08000000,
            TIME12 = 0x10000000,
            TIME13 = 0x20000000,
            TIME14 = 0x40000000,
            TIME15 = 0x80000000,
            FMI0   = 0x00000100,
            FMI1   = 0x00000200,
            FMI2   = 0x00000400,
            FMI3   = 0x00000800,
            FMI4   = 0x00001000,
            FMI5   = 0x00002000,
            FMI6   = 0x00004000,
            FMI7   = 0x00008000,
            DLC0   = 0x00000001,
            DLC1   = 0x00000002,
            DLC2   = 0x00000004,
            DLC3   = 0x00000008,
        };
    };

    struct CAN2_CAN_RDL1R {
        static constexpr uint32_t address = 0x400069c8;
        enum bits : uint32_t {
            DATA30 = 0x01000000,
            DATA31 = 0x02000000,
            DATA32 = 0x04000000,
            DATA33 = 0x08000000,
            DATA34 = 0x10000000,
            DATA35 = 0x20000000,
            DATA36 = 0x40000000,
            DATA37 = 0x80000000,
            DATA20 = 0x00010000,
            DATA21 = 0x00020000,
            DATA22 = 0x00040000,
            DATA23 = 0x00080000,
            DATA24 = 0x00100000,
            DATA25 = 0x00200000,
            DATA26 = 0x00400000,
            DATA27 = 0x00800000,
            DATA10 = 0x00000100,
            DATA11 = 0x00000200,
            DATA12 = 0x00000400,
            DATA13 = 0x00000800,
            DATA14 = 0x00001000,
            DATA15 = 0x00002000,
            DATA16 = 0x00004000,
            DATA17 = 0x00008000,
            DATA00 = 0x00000001,
            DATA01 = 0x00000002,
            DATA02 = 0x00000004,
            DATA03 = 0x00000008,
            DATA04 = 0x00000010,
            DATA05 = 0x00000020,
            DATA06 = 0x00000040,
            DATA07 = 0x00000080,
        };
    };

    struct CAN2_CAN_RDH1R {
        static constexpr uint32_t address = 0x400069cc;
        enum bits : uint32_t {
            DATA70 = 0x01000000,
            DATA71 = 0x02000000,
            DATA72 = 0x04000000,
            DATA73 = 0x08000000,
            DATA74 = 0x10000000,
            DATA75 = 0x20000000,
            DATA76 = 0x40000000,
            DATA77 = 0x80000000,
            DATA60 = 0x00010000,
            DATA61 = 0x00020000,
            DATA62 = 0x00040000,
            DATA63 = 0x00080000,
            DATA64 = 0x00100000,
            DATA65 = 0x00200000,
            DATA66 = 0x00400000,
            DATA67 = 0x00800000,
            DATA50 = 0x00000100,
            DATA51 = 0x00000200,
            DATA52 = 0x00000400,
            DATA53 = 0x00000800,
            DATA54 = 0x00001000,
            DATA55 = 0x00002000,
            DATA56 = 0x00004000,
            DATA57 = 0x00008000,
            DATA40 = 0x00000001,
            DATA41 = 0x00000002,
            DATA42 = 0x00000004,
            DATA43 = 0x00000008,
            DATA44 = 0x00000010,
            DATA45 = 0x00000020,
            DATA46 = 0x00000040,
            DATA47 = 0x00000080,
        };
    };

    struct CAN2_CAN_FMR {
        static constexpr uint32_t address = 0x40006a00;
        enum bits : uint32_t {
            FINIT = 0x00000001,
        };
    };

    struct CAN2_CAN_FM1R {
        static constexpr uint32_t address = 0x40006a04;
        enum bits : uint32_t {
            FBM0  = 0x00000001,
            FBM1  = 0x00000002,
            FBM2  = 0x00000004,
            FBM3  = 0x00000008,
            FBM4  = 0x00000010,
            FBM5  = 0x00000020,
            FBM6  = 0x00000040,
            FBM7  = 0x00000080,
            FBM8  = 0x00000100,
            FBM9  = 0x00000200,
            FBM10 = 0x00000400,
            FBM11 = 0x00000800,
            FBM12 = 0x00001000,
            FBM13 = 0x00002000,
        };
    };

    struct CAN2_CAN_FS1R {
        static constexpr uint32_t address = 0x40006a0c;
        enum bits : uint32_t {
            FSC0  = 0x00000001,
            FSC1  = 0x00000002,
            FSC2  = 0x00000004,
            FSC3  = 0x00000008,
            FSC4  = 0x00000010,
            FSC5  = 0x00000020,
            FSC6  = 0x00000040,
            FSC7  = 0x00000080,
            FSC8  = 0x00000100,
            FSC9  = 0x00000200,
            FSC10 = 0x00000400,
            FSC11 = 0x00000800,
            FSC12 = 0x00001000,
            FSC13 = 0x00002000,
        };
    };

    struct CAN2_CAN_FFA1R {
        static constexpr uint32_t address = 0x40006a14;
        enum bits : uint32_t {
            FFA0  = 0x00000001,
            FFA1  = 0x00000002,
            FFA2  = 0x00000004,
            FFA3  = 0x00000008,
            FFA4  = 0x00000010,
            FFA5  = 0x00000020,
            FFA6  = 0x00000040,
            FFA7  = 0x00000080,
            FFA8  = 0x00000100,
            FFA9  = 0x00000200,
            FFA10 = 0x00000400,
            FFA11 = 0x00000800,
            FFA12 = 0x00001000,
            FFA13 = 0x00002000,
        };
    };

    struct CAN2_CAN_FA1R {
        static constexpr uint32_t address = 0x40006a1c;
        enum bits : uint32_t {
            FACT0  = 0x00000001,
            FACT1  = 0x00000002,
            FACT2  = 0x00000004,
            FACT3  = 0x00000008,
            FACT4  = 0x00000010,
            FACT5  = 0x00000020,
            FACT6  = 0x00000040,
            FACT7  = 0x00000080,
            FACT8  = 0x00000100,
            FACT9  = 0x00000200,
            FACT10 = 0x00000400,
            FACT11 = 0x00000800,
            FACT12 = 0x00001000,
            FACT13 = 0x00002000,
        };
    };

    struct CAN2_F0R1 {
        static constexpr uint32_t address = 0x40006a40;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F0R2 {
        static constexpr uint32_t address = 0x40006a44;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F1R1 {
        static constexpr uint32_t address = 0x40006a48;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F1R2 {
        static constexpr uint32_t address = 0x40006a4c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F2R1 {
        static constexpr uint32_t address = 0x40006a50;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F2R2 {
        static constexpr uint32_t address = 0x40006a54;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F3R1 {
        static constexpr uint32_t address = 0x40006a58;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F3R2 {
        static constexpr uint32_t address = 0x40006a5c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F4R1 {
        static constexpr uint32_t address = 0x40006a60;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F4R2 {
        static constexpr uint32_t address = 0x40006a64;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F5R1 {
        static constexpr uint32_t address = 0x40006a68;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F5R2 {
        static constexpr uint32_t address = 0x40006a6c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F6R1 {
        static constexpr uint32_t address = 0x40006a70;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F6R2 {
        static constexpr uint32_t address = 0x40006a74;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F7R1 {
        static constexpr uint32_t address = 0x40006a78;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F7R2 {
        static constexpr uint32_t address = 0x40006a7c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F8R1 {
        static constexpr uint32_t address = 0x40006a80;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F8R2 {
        static constexpr uint32_t address = 0x40006a84;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F9R1 {
        static constexpr uint32_t address = 0x40006a88;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F9R2 {
        static constexpr uint32_t address = 0x40006a8c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F10R1 {
        static constexpr uint32_t address = 0x40006a90;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F10R2 {
        static constexpr uint32_t address = 0x40006a94;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F11R1 {
        static constexpr uint32_t address = 0x40006a98;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F11R2 {
        static constexpr uint32_t address = 0x40006a9c;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F12R1 {
        static constexpr uint32_t address = 0x40006aa0;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F12R2 {
        static constexpr uint32_t address = 0x40006aa4;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F13R1 {
        static constexpr uint32_t address = 0x40006aa8;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct CAN2_F13R2 {
        static constexpr uint32_t address = 0x40006aac;
        enum bits : uint32_t {
            FB0  = 0x00000001,
            FB1  = 0x00000002,
            FB2  = 0x00000004,
            FB3  = 0x00000008,
            FB4  = 0x00000010,
            FB5  = 0x00000020,
            FB6  = 0x00000040,
            FB7  = 0x00000080,
            FB8  = 0x00000100,
            FB9  = 0x00000200,
            FB10 = 0x00000400,
            FB11 = 0x00000800,
            FB12 = 0x00001000,
            FB13 = 0x00002000,
            FB14 = 0x00004000,
            FB15 = 0x00008000,
            FB16 = 0x00010000,
            FB17 = 0x00020000,
            FB18 = 0x00040000,
            FB19 = 0x00080000,
            FB20 = 0x00100000,
            FB21 = 0x00200000,
            FB22 = 0x00400000,
            FB23 = 0x00800000,
            FB24 = 0x01000000,
            FB25 = 0x02000000,
            FB26 = 0x04000000,
            FB27 = 0x08000000,
            FB28 = 0x10000000,
            FB29 = 0x20000000,
            FB30 = 0x40000000,
            FB31 = 0x80000000,
        };
    };

    struct DAC_CR {
        static constexpr uint32_t address = 0x40007400;
        enum bits : uint32_t {
            EN1    = 0x00000001,
            BOFF1  = 0x00000002,
            TEN1   = 0x00000004,
            TSEL10 = 0x00000008,
            TSEL11 = 0x00000010,
            TSEL12 = 0x00000020,
            WAVE10 = 0x00000040,
            WAVE11 = 0x00000080,
            MAMP10 = 0x00000100,
            MAMP11 = 0x00000200,
            MAMP12 = 0x00000400,
            MAMP13 = 0x00000800,
            DMAEN1 = 0x00001000,
            EN2    = 0x00010000,
            BOFF2  = 0x00020000,
            TEN2   = 0x00040000,
            TSEL20 = 0x00080000,
            TSEL21 = 0x00100000,
            TSEL22 = 0x00200000,
            WAVE20 = 0x00400000,
            WAVE21 = 0x00800000,
            MAMP20 = 0x01000000,
            MAMP21 = 0x02000000,
            MAMP22 = 0x04000000,
            MAMP23 = 0x08000000,
            DMAEN2 = 0x10000000,
        };
    };

    struct DAC_SWTRIGR {
        static constexpr uint32_t address = 0x40007404;
        enum bits : uint32_t {
            SWTRIG1 = 0x00000001,
            SWTRIG2 = 0x00000002,
        };
    };

    struct DAC_DHR12R1 {
        static constexpr uint32_t address = 0x40007408;
        enum bits : uint32_t {
            DACC1DHR0  = 0x00000001,
            DACC1DHR1  = 0x00000002,
            DACC1DHR2  = 0x00000004,
            DACC1DHR3  = 0x00000008,
            DACC1DHR4  = 0x00000010,
            DACC1DHR5  = 0x00000020,
            DACC1DHR6  = 0x00000040,
            DACC1DHR7  = 0x00000080,
            DACC1DHR8  = 0x00000100,
            DACC1DHR9  = 0x00000200,
            DACC1DHR10 = 0x00000400,
            DACC1DHR11 = 0x00000800,
        };
    };

    struct DAC_DHR12L1 {
        static constexpr uint32_t address = 0x4000740c;
        enum bits : uint32_t {
            DACC1DHR0  = 0x00000010,
            DACC1DHR1  = 0x00000020,
            DACC1DHR2  = 0x00000040,
            DACC1DHR3  = 0x00000080,
            DACC1DHR4  = 0x00000100,
            DACC1DHR5  = 0x00000200,
            DACC1DHR6  = 0x00000400,
            DACC1DHR7  = 0x00000800,
            DACC1DHR8  = 0x00001000,
            DACC1DHR9  = 0x00002000,
            DACC1DHR10 = 0x00004000,
            DACC1DHR11 = 0x00008000,
        };
    };

    struct DAC_DHR8R1 {
        static constexpr uint32_t address = 0x40007410;
        enum bits : uint32_t {
            DACC1DHR0 = 0x00000001,
            DACC1DHR1 = 0x00000002,
            DACC1DHR2 = 0x00000004,
            DACC1DHR3 = 0x00000008,
            DACC1DHR4 = 0x00000010,
            DACC1DHR5 = 0x00000020,
            DACC1DHR6 = 0x00000040,
            DACC1DHR7 = 0x00000080,
        };
    };

    struct DAC_DHR12R2 {
        static constexpr uint32_t address = 0x40007414;
        enum bits : uint32_t {
            DACC2DHR0  = 0x00000001,
            DACC2DHR1  = 0x00000002,
            DACC2DHR2  = 0x00000004,
            DACC2DHR3  = 0x00000008,
            DACC2DHR4  = 0x00000010,
            DACC2DHR5  = 0x00000020,
            DACC2DHR6  = 0x00000040,
            DACC2DHR7  = 0x00000080,
            DACC2DHR8  = 0x00000100,
            DACC2DHR9  = 0x00000200,
            DACC2DHR10 = 0x00000400,
            DACC2DHR11 = 0x00000800,
        };
    };

    struct DAC_DHR12L2 {
        static constexpr uint32_t address = 0x40007418;
        enum bits : uint32_t {
            DACC2DHR0  = 0x00000010,
            DACC2DHR1  = 0x00000020,
            DACC2DHR2  = 0x00000040,
            DACC2DHR3  = 0x00000080,
            DACC2DHR4  = 0x00000100,
            DACC2DHR5  = 0x00000200,
            DACC2DHR6  = 0x00000400,
            DACC2DHR7  = 0x00000800,
            DACC2DHR8  = 0x00001000,
            DACC2DHR9  = 0x00002000,
            DACC2DHR10 = 0x00004000,
            DACC2DHR11 = 0x00008000,
        };
    };

    struct DAC_DHR8R2 {
        static constexpr uint32_t address = 0x4000741c;
        enum bits : uint32_t {
            DACC2DHR0 = 0x00000001,
            DACC2DHR1 = 0x00000002,
            DACC2DHR2 = 0x00000004,
            DACC2DHR3 = 0x00000008,
            DACC2DHR4 = 0x00000010,
            DACC2DHR5 = 0x00000020,
            DACC2DHR6 = 0x00000040,
            DACC2DHR7 = 0x00000080,
        };
    };

    struct DAC_DHR12RD {
        static constexpr uint32_t address = 0x40007420;
        enum bits : uint32_t {
            DACC1DHR0  = 0x00000001,
            DACC1DHR1  = 0x00000002,
            DACC1DHR2  = 0x00000004,
            DACC1DHR3  = 0x00000008,
            DACC1DHR4  = 0x00000010,
            DACC1DHR5  = 0x00000020,
            DACC1DHR6  = 0x00000040,
            DACC1DHR7  = 0x00000080,
            DACC1DHR8  = 0x00000100,
            DACC1DHR9  = 0x00000200,
            DACC1DHR10 = 0x00000400,
            DACC1DHR11 = 0x00000800,
            DACC2DHR0  = 0x00010000,
            DACC2DHR1  = 0x00020000,
            DACC2DHR2  = 0x00040000,
            DACC2DHR3  = 0x00080000,
            DACC2DHR4  = 0x00100000,
            DACC2DHR5  = 0x00200000,
            DACC2DHR6  = 0x00400000,
            DACC2DHR7  = 0x00800000,
            DACC2DHR8  = 0x01000000,
            DACC2DHR9  = 0x02000000,
            DACC2DHR10 = 0x04000000,
            DACC2DHR11 = 0x08000000,
        };
    };

    struct DAC_DHR12LD {
        static constexpr uint32_t address = 0x40007424;
        enum bits : uint32_t {
            DACC1DHR0  = 0x00000010,
            DACC1DHR1  = 0x00000020,
            DACC1DHR2  = 0x00000040,
            DACC1DHR3  = 0x00000080,
            DACC1DHR4  = 0x00000100,
            DACC1DHR5  = 0x00000200,
            DACC1DHR6  = 0x00000400,
            DACC1DHR7  = 0x00000800,
            DACC1DHR8  = 0x00001000,
            DACC1DHR9  = 0x00002000,
            DACC1DHR10 = 0x00004000,
            DACC1DHR11 = 0x00008000,
            DACC2DHR0  = 0x00100000,
            DACC2DHR1  = 0x00200000,
            DACC2DHR2  = 0x00400000,
            DACC2DHR3  = 0x00800000,
            DACC2DHR4  = 0x01000000,
            DACC2DHR5  = 0x02000000,
            DACC2DHR6  = 0x04000000,
            DACC2DHR7  = 0x08000000,
            DACC2DHR8  = 0x10000000,
            DACC2DHR9  = 0x20000000,
            DACC2DHR10 = 0x40000000,
            DACC2DHR11 = 0x80000000,
        };
    };

    struct DAC_DHR8RD {
        static constexpr uint32_t address = 0x40007428;
        enum bits : uint32_t {
            DACC1DHR0 = 0x00000001,
            DACC1DHR1 = 0x00000002,
            DACC1DHR2 = 0x00000004,
            DACC1DHR3 = 0x00000008,
            DACC1DHR4 = 0x00000010,
            DACC1DHR5 = 0x00000020,
            DACC1DHR6 = 0x00000040,
            DACC1DHR7 = 0x00000080,
            DACC2DHR0 = 0x00000100,
            DACC2DHR1 = 0x00000200,
            DACC2DHR2 = 0x00000400,
            DACC2DHR3 = 0x00000800,
            DACC2DHR4 = 0x00001000,
            DACC2DHR5 = 0x00002000,
            DACC2DHR6 = 0x00004000,
            DACC2DHR7 = 0x00008000,
        };
    };

    struct DAC_DOR1 {
        static constexpr uint32_t address = 0x4000742c;
        enum bits : uint32_t {
            DACC1DOR0  = 0x00000001,
            DACC1DOR1  = 0x00000002,
            DACC1DOR2  = 0x00000004,
            DACC1DOR3  = 0x00000008,
            DACC1DOR4  = 0x00000010,
            DACC1DOR5  = 0x00000020,
            DACC1DOR6  = 0x00000040,
            DACC1DOR7  = 0x00000080,
            DACC1DOR8  = 0x00000100,
            DACC1DOR9  = 0x00000200,
            DACC1DOR10 = 0x00000400,
            DACC1DOR11 = 0x00000800,
        };
    };

    struct DAC_DOR2 {
        static constexpr uint32_t address = 0x40007430;
        enum bits : uint32_t {
            DACC2DOR0  = 0x00000001,
            DACC2DOR1  = 0x00000002,
            DACC2DOR2  = 0x00000004,
            DACC2DOR3  = 0x00000008,
            DACC2DOR4  = 0x00000010,
            DACC2DOR5  = 0x00000020,
            DACC2DOR6  = 0x00000040,
            DACC2DOR7  = 0x00000080,
            DACC2DOR8  = 0x00000100,
            DACC2DOR9  = 0x00000200,
            DACC2DOR10 = 0x00000400,
            DACC2DOR11 = 0x00000800,
        };
    };

    struct DBG_IDCODE {
        static constexpr uint32_t address = 0xe0042000;
        enum bits : uint32_t {
            DEV_ID0  = 0x00000001,
            DEV_ID1  = 0x00000002,
            DEV_ID2  = 0x00000004,
            DEV_ID3  = 0x00000008,
            DEV_ID4  = 0x00000010,
            DEV_ID5  = 0x00000020,
            DEV_ID6  = 0x00000040,
            DEV_ID7  = 0x00000080,
            DEV_ID8  = 0x00000100,
            DEV_ID9  = 0x00000200,
            DEV_ID10 = 0x00000400,
            DEV_ID11 = 0x00000800,
            REV_ID0  = 0x00010000,
            REV_ID1  = 0x00020000,
            REV_ID2  = 0x00040000,
            REV_ID3  = 0x00080000,
            REV_ID4  = 0x00100000,
            REV_ID5  = 0x00200000,
            REV_ID6  = 0x00400000,
            REV_ID7  = 0x00800000,
            REV_ID8  = 0x01000000,
            REV_ID9  = 0x02000000,
            REV_ID10 = 0x04000000,
            REV_ID11 = 0x08000000,
            REV_ID12 = 0x10000000,
            REV_ID13 = 0x20000000,
            REV_ID14 = 0x40000000,
            REV_ID15 = 0x80000000,
        };
    };

    struct DBG_CR {
        static constexpr uint32_t address = 0xe0042004;
        enum bits : uint32_t {
            DBG_SLEEP              = 0x00000001,
            DBG_STOP               = 0x00000002,
            DBG_STANDBY            = 0x00000004,
            TRACE_IOEN             = 0x00000020,
            TRACE_MODE0            = 0x00000040,
            TRACE_MODE1            = 0x00000080,
            DBG_IWDG_STOP          = 0x00000100,
            DBG_WWDG_STOP          = 0x00000200,
            DBG_TIM1_STOP          = 0x00000400,
            DBG_TIM2_STOP          = 0x00000800,
            DBG_TIM3_STOP          = 0x00001000,
            DBG_TIM4_STOP          = 0x00002000,
            DBG_CAN1_STOP          = 0x00004000,
            DBG_I2C1_SMBUS_TIMEOUT = 0x00008000,
            DBG_I2C2_SMBUS_TIMEOUT = 0x00010000,
            DBG_TIM8_STOP          = 0x00020000,
            DBG_TIM5_STOP          = 0x00040000,
            DBG_TIM6_STOP          = 0x00080000,
            DBG_TIM7_STOP          = 0x00100000,
            DBG_CAN2_STOP          = 0x00200000,
        };
    };

    struct UART4_SR {
        static constexpr uint32_t address = 0x40004c00;
        enum bits : uint32_t {
            PE   = 0x00000001,
            FE   = 0x00000002,
            NE   = 0x00000004,
            ORE  = 0x00000008,
            IDLE = 0x00000010,
            RXNE = 0x00000020,
            TC   = 0x00000040,
            TXE  = 0x00000080,
            LBD  = 0x00000100,
        };
    };

    struct UART4_DR {
        static constexpr uint32_t address = 0x40004c04;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
            DR8 = 0x00000100,
        };
    };

    struct UART4_BRR {
        static constexpr uint32_t address = 0x40004c08;
        enum bits : uint32_t {
            DIV_Fraction0  = 0x00000001,
            DIV_Fraction1  = 0x00000002,
            DIV_Fraction2  = 0x00000004,
            DIV_Fraction3  = 0x00000008,
            DIV_Mantissa0  = 0x00000010,
            DIV_Mantissa1  = 0x00000020,
            DIV_Mantissa2  = 0x00000040,
            DIV_Mantissa3  = 0x00000080,
            DIV_Mantissa4  = 0x00000100,
            DIV_Mantissa5  = 0x00000200,
            DIV_Mantissa6  = 0x00000400,
            DIV_Mantissa7  = 0x00000800,
            DIV_Mantissa8  = 0x00001000,
            DIV_Mantissa9  = 0x00002000,
            DIV_Mantissa10 = 0x00004000,
            DIV_Mantissa11 = 0x00008000,
        };
    };

    struct UART4_CR1 {
        static constexpr uint32_t address = 0x40004c0c;
        enum bits : uint32_t {
            SBK    = 0x00000001,
            RWU    = 0x00000002,
            RE     = 0x00000004,
            TE     = 0x00000008,
            IDLEIE = 0x00000010,
            RXNEIE = 0x00000020,
            TCIE   = 0x00000040,
            TXEIE  = 0x00000080,
            PEIE   = 0x00000100,
            PS     = 0x00000200,
            PCE    = 0x00000400,
            WAKE   = 0x00000800,
            M      = 0x00001000,
            UE     = 0x00002000,
        };
    };

    struct UART4_CR2 {
        static constexpr uint32_t address = 0x40004c10;
        enum bits : uint32_t {
            ADD0  = 0x00000001,
            ADD1  = 0x00000002,
            ADD2  = 0x00000004,
            ADD3  = 0x00000008,
            LBDL  = 0x00000020,
            LBDIE = 0x00000040,
            STOP0 = 0x00001000,
            STOP1 = 0x00002000,
            LINEN = 0x00004000,
        };
    };

    struct UART4_CR3 {
        static constexpr uint32_t address = 0x40004c14;
        enum bits : uint32_t {
            EIE   = 0x00000001,
            IREN  = 0x00000002,
            IRLP  = 0x00000004,
            HDSEL = 0x00000008,
            DMAR  = 0x00000040,
            DMAT  = 0x00000080,
        };
    };

    struct UART5_SR {
        static constexpr uint32_t address = 0x40005000;
        enum bits : uint32_t {
            PE   = 0x00000001,
            FE   = 0x00000002,
            NE   = 0x00000004,
            ORE  = 0x00000008,
            IDLE = 0x00000010,
            RXNE = 0x00000020,
            TC   = 0x00000040,
            TXE  = 0x00000080,
            LBD  = 0x00000100,
        };
    };

    struct UART5_DR {
        static constexpr uint32_t address = 0x40005004;
        enum bits : uint32_t {
            DR0 = 0x00000001,
            DR1 = 0x00000002,
            DR2 = 0x00000004,
            DR3 = 0x00000008,
            DR4 = 0x00000010,
            DR5 = 0x00000020,
            DR6 = 0x00000040,
            DR7 = 0x00000080,
            DR8 = 0x00000100,
        };
    };

    struct UART5_BRR {
        static constexpr uint32_t address = 0x40005008;
        enum bits : uint32_t {
            DIV_Fraction0  = 0x00000001,
            DIV_Fraction1  = 0x00000002,
            DIV_Fraction2  = 0x00000004,
            DIV_Fraction3  = 0x00000008,
            DIV_Mantissa0  = 0x00000010,
            DIV_Mantissa1  = 0x00000020,
            DIV_Mantissa2  = 0x00000040,
            DIV_Mantissa3  = 0x00000080,
            DIV_Mantissa4  = 0x00000100,
            DIV_Mantissa5  = 0x00000200,
            DIV_Mantissa6  = 0x00000400,
            DIV_Mantissa7  = 0x00000800,
            DIV_Mantissa8  = 0x00001000,
            DIV_Mantissa9  = 0x00002000,
            DIV_Mantissa10 = 0x00004000,
            DIV_Mantissa11 = 0x00008000,
        };
    };

    struct UART5_CR1 {
        static constexpr uint32_t address = 0x4000500c;
        enum bits : uint32_t {
            SBK    = 0x00000001,
            RWU    = 0x00000002,
            RE     = 0x00000004,
            TE     = 0x00000008,
            IDLEIE = 0x00000010,
            RXNEIE = 0x00000020,
            TCIE   = 0x00000040,
            TXEIE  = 0x00000080,
            PEIE   = 0x00000100,
            PS     = 0x00000200,
            PCE    = 0x00000400,
            WAKE   = 0x00000800,
            M      = 0x00001000,
            UE     = 0x00002000,
        };
    };

    struct UART5_CR2 {
        static constexpr uint32_t address = 0x40005010;
        enum bits : uint32_t {
            ADD0  = 0x00000001,
            ADD1  = 0x00000002,
            ADD2  = 0x00000004,
            ADD3  = 0x00000008,
            LBDL  = 0x00000020,
            LBDIE = 0x00000040,
            STOP0 = 0x00001000,
            STOP1 = 0x00002000,
            LINEN = 0x00004000,
        };
    };

    struct UART5_CR3 {
        static constexpr uint32_t address = 0x40005014;
        enum bits : uint32_t {
            EIE   = 0x00000001,
            IREN  = 0x00000002,
            IRLP  = 0x00000004,
            HDSEL = 0x00000008,
            DMAT  = 0x00000080,
        };
    };

    struct CRC_DR {
        static constexpr uint32_t address = 0x40023000;
        enum bits : uint32_t {
            DR0  = 0x00000001,
            DR1  = 0x00000002,
            DR2  = 0x00000004,
            DR3  = 0x00000008,
            DR4  = 0x00000010,
            DR5  = 0x00000020,
            DR6  = 0x00000040,
            DR7  = 0x00000080,
            DR8  = 0x00000100,
            DR9  = 0x00000200,
            DR10 = 0x00000400,
            DR11 = 0x00000800,
            DR12 = 0x00001000,
            DR13 = 0x00002000,
            DR14 = 0x00004000,
            DR15 = 0x00008000,
            DR16 = 0x00010000,
            DR17 = 0x00020000,
            DR18 = 0x00040000,
            DR19 = 0x00080000,
            DR20 = 0x00100000,
            DR21 = 0x00200000,
            DR22 = 0x00400000,
            DR23 = 0x00800000,
            DR24 = 0x01000000,
            DR25 = 0x02000000,
            DR26 = 0x04000000,
            DR27 = 0x08000000,
            DR28 = 0x10000000,
            DR29 = 0x20000000,
            DR30 = 0x40000000,
            DR31 = 0x80000000,
        };
    };

    struct CRC_IDR {
        static constexpr uint32_t address = 0x40023004;
        enum bits : uint32_t {
            IDR0 = 0x00000001,
            IDR1 = 0x00000002,
            IDR2 = 0x00000004,
            IDR3 = 0x00000008,
            IDR4 = 0x00000010,
            IDR5 = 0x00000020,
            IDR6 = 0x00000040,
            IDR7 = 0x00000080,
        };
    };

    struct CRC_CR {
        static constexpr uint32_t address = 0x40023008;
        enum bits : uint32_t {
            RESET = 0x00000001,
        };
    };

    struct FLASH_ACR {
        static constexpr uint32_t address = 0x40022000;
        enum bits : uint32_t {
            LATENCY0 = 0x00000001,
            LATENCY1 = 0x00000002,
            LATENCY2 = 0x00000004,
            HLFCYA   = 0x00000008,
            PRFTBE   = 0x00000010,
            PRFTBS   = 0x00000020,
        };
    };

    struct FLASH_KEYR {
        static constexpr uint32_t address = 0x40022004;
        enum bits : uint32_t {
            KEY0  = 0x00000001,
            KEY1  = 0x00000002,
            KEY2  = 0x00000004,
            KEY3  = 0x00000008,
            KEY4  = 0x00000010,
            KEY5  = 0x00000020,
            KEY6  = 0x00000040,
            KEY7  = 0x00000080,
            KEY8  = 0x00000100,
            KEY9  = 0x00000200,
            KEY10 = 0x00000400,
            KEY11 = 0x00000800,
            KEY12 = 0x00001000,
            KEY13 = 0x00002000,
            KEY14 = 0x00004000,
            KEY15 = 0x00008000,
            KEY16 = 0x00010000,
            KEY17 = 0x00020000,
            KEY18 = 0x00040000,
            KEY19 = 0x00080000,
            KEY20 = 0x00100000,
            KEY21 = 0x00200000,
            KEY22 = 0x00400000,
            KEY23 = 0x00800000,
            KEY24 = 0x01000000,
            KEY25 = 0x02000000,
            KEY26 = 0x04000000,
            KEY27 = 0x08000000,
            KEY28 = 0x10000000,
            KEY29 = 0x20000000,
            KEY30 = 0x40000000,
            KEY31 = 0x80000000,
        };
    };

    struct FLASH_OPTKEYR {
        static constexpr uint32_t address = 0x40022008;
        enum bits : uint32_t {
            OPTKEY0  = 0x00000001,
            OPTKEY1  = 0x00000002,
            OPTKEY2  = 0x00000004,
            OPTKEY3  = 0x00000008,
            OPTKEY4  = 0x00000010,
            OPTKEY5  = 0x00000020,
            OPTKEY6  = 0x00000040,
            OPTKEY7  = 0x00000080,
            OPTKEY8  = 0x00000100,
            OPTKEY9  = 0x00000200,
            OPTKEY10 = 0x00000400,
            OPTKEY11 = 0x00000800,
            OPTKEY12 = 0x00001000,
            OPTKEY13 = 0x00002000,
            OPTKEY14 = 0x00004000,
            OPTKEY15 = 0x00008000,
            OPTKEY16 = 0x00010000,
            OPTKEY17 = 0x00020000,
            OPTKEY18 = 0x00040000,
            OPTKEY19 = 0x00080000,
            OPTKEY20 = 0x00100000,
            OPTKEY21 = 0x00200000,
            OPTKEY22 = 0x00400000,
            OPTKEY23 = 0x00800000,
            OPTKEY24 = 0x01000000,
            OPTKEY25 = 0x02000000,
            OPTKEY26 = 0x04000000,
            OPTKEY27 = 0x08000000,
            OPTKEY28 = 0x10000000,
            OPTKEY29 = 0x20000000,
            OPTKEY30 = 0x40000000,
            OPTKEY31 = 0x80000000,
        };
    };

    struct FLASH_SR {
        static constexpr uint32_t address = 0x4002200c;
        enum bits : uint32_t {
            EOP      = 0x00000020,
            WRPRTERR = 0x00000010,
            PGERR    = 0x00000004,
            BSY      = 0x00000001,
        };
    };

    struct FLASH_CR {
        static constexpr uint32_t address = 0x40022010;
        enum bits : uint32_t {
            PG     = 0x00000001,
            PER    = 0x00000002,
            MER    = 0x00000004,
            OPTPG  = 0x00000010,
            OPTER  = 0x00000020,
            STRT   = 0x00000040,
            LOCK   = 0x00000080,
            OPTWRE = 0x00000200,
            ERRIE  = 0x00000400,
            EOPIE  = 0x00001000,
        };
    };

    struct FLASH_AR {
        static constexpr uint32_t address = 0x40022014;
        enum bits : uint32_t {
            FAR0  = 0x00000001,
            FAR1  = 0x00000002,
            FAR2  = 0x00000004,
            FAR3  = 0x00000008,
            FAR4  = 0x00000010,
            FAR5  = 0x00000020,
            FAR6  = 0x00000040,
            FAR7  = 0x00000080,
            FAR8  = 0x00000100,
            FAR9  = 0x00000200,
            FAR10 = 0x00000400,
            FAR11 = 0x00000800,
            FAR12 = 0x00001000,
            FAR13 = 0x00002000,
            FAR14 = 0x00004000,
            FAR15 = 0x00008000,
            FAR16 = 0x00010000,
            FAR17 = 0x00020000,
            FAR18 = 0x00040000,
            FAR19 = 0x00080000,
            FAR20 = 0x00100000,
            FAR21 = 0x00200000,
            FAR22 = 0x00400000,
            FAR23 = 0x00800000,
            FAR24 = 0x01000000,
            FAR25 = 0x02000000,
            FAR26 = 0x04000000,
            FAR27 = 0x08000000,
            FAR28 = 0x10000000,
            FAR29 = 0x20000000,
            FAR30 = 0x40000000,
            FAR31 = 0x80000000,
        };
    };

    struct FLASH_OBR {
        static constexpr uint32_t address = 0x4002201c;
        enum bits : uint32_t {
            OPTERR     = 0x00000001,
            RDPRT      = 0x00000002,
            WDG_SW     = 0x00000004,
            nRST_STOP  = 0x00000008,
            nRST_STDBY = 0x00000010,
            Data00     = 0x00000400,
            Data01     = 0x00000800,
            Data02     = 0x00001000,
            Data03     = 0x00002000,
            Data04     = 0x00004000,
            Data05     = 0x00008000,
            Data06     = 0x00010000,
            Data07     = 0x00020000,
            Data10     = 0x00040000,
            Data11     = 0x00080000,
            Data12     = 0x00100000,
            Data13     = 0x00200000,
            Data14     = 0x00400000,
            Data15     = 0x00800000,
            Data16     = 0x01000000,
            Data17     = 0x02000000,
        };
    };

    struct FLASH_WRPR {
        static constexpr uint32_t address = 0x40022020;
        enum bits : uint32_t {
            WRP0  = 0x00000001,
            WRP1  = 0x00000002,
            WRP2  = 0x00000004,
            WRP3  = 0x00000008,
            WRP4  = 0x00000010,
            WRP5  = 0x00000020,
            WRP6  = 0x00000040,
            WRP7  = 0x00000080,
            WRP8  = 0x00000100,
            WRP9  = 0x00000200,
            WRP10 = 0x00000400,
            WRP11 = 0x00000800,
            WRP12 = 0x00001000,
            WRP13 = 0x00002000,
            WRP14 = 0x00004000,
            WRP15 = 0x00008000,
            WRP16 = 0x00010000,
            WRP17 = 0x00020000,
            WRP18 = 0x00040000,
            WRP19 = 0x00080000,
            WRP20 = 0x00100000,
            WRP21 = 0x00200000,
            WRP22 = 0x00400000,
            WRP23 = 0x00800000,
            WRP24 = 0x01000000,
            WRP25 = 0x02000000,
            WRP26 = 0x04000000,
            WRP27 = 0x08000000,
            WRP28 = 0x10000000,
            WRP29 = 0x20000000,
            WRP30 = 0x40000000,
            WRP31 = 0x80000000,
        };
    };

    struct USB_EP0R {
        static constexpr uint32_t address = 0x40005c00;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP1R {
        static constexpr uint32_t address = 0x40005c04;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP2R {
        static constexpr uint32_t address = 0x40005c08;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP3R {
        static constexpr uint32_t address = 0x40005c0c;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP4R {
        static constexpr uint32_t address = 0x40005c10;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP5R {
        static constexpr uint32_t address = 0x40005c14;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP6R {
        static constexpr uint32_t address = 0x40005c18;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_EP7R {
        static constexpr uint32_t address = 0x40005c1c;
        enum bits : uint32_t {
            EA0      = 0x00000001,
            EA1      = 0x00000002,
            EA2      = 0x00000004,
            EA3      = 0x00000008,
            STAT_TX0 = 0x00000010,
            STAT_TX1 = 0x00000020,
            DTOG_TX  = 0x00000040,
            CTR_TX   = 0x00000080,
            EP_KIND  = 0x00000100,
            EP_TYPE0 = 0x00000200,
            EP_TYPE1 = 0x00000400,
            SETUP    = 0x00000800,
            STAT_RX0 = 0x00001000,
            STAT_RX1 = 0x00002000,
            DTOG_RX  = 0x00004000,
            CTR_RX   = 0x00008000,
        };
    };

    struct USB_CNTR {
        static constexpr uint32_t address = 0x40005c40;
        enum bits : uint32_t {
            FRES    = 0x00000001,
            PDWN    = 0x00000002,
            LPMODE  = 0x00000004,
            FSUSP   = 0x00000008,
            RESUME  = 0x00000010,
            ESOFM   = 0x00000100,
            SOFM    = 0x00000200,
            RESETM  = 0x00000400,
            SUSPM   = 0x00000800,
            WKUPM   = 0x00001000,
            ERRM    = 0x00002000,
            PMAOVRM = 0x00004000,
            CTRM    = 0x00008000,
        };
    };

    struct USB_ISTR {
        static constexpr uint32_t address = 0x40005c44;
        enum bits : uint32_t {
            EP_ID0 = 0x00000001,
            EP_ID1 = 0x00000002,
            EP_ID2 = 0x00000004,
            EP_ID3 = 0x00000008,
            DIR    = 0x00000010,
            ESOF   = 0x00000100,
            SOF    = 0x00000200,
            RESET  = 0x00000400,
            SUSP   = 0x00000800,
            WKUP   = 0x00001000,
            ERR    = 0x00002000,
            PMAOVR = 0x00004000,
            CTR    = 0x00008000,
        };
    };

    struct USB_FNR {
        static constexpr uint32_t address = 0x40005c48;
        enum bits : uint32_t {
            FN0   = 0x00000001,
            FN1   = 0x00000002,
            FN2   = 0x00000004,
            FN3   = 0x00000008,
            FN4   = 0x00000010,
            FN5   = 0x00000020,
            FN6   = 0x00000040,
            FN7   = 0x00000080,
            FN8   = 0x00000100,
            FN9   = 0x00000200,
            FN10  = 0x00000400,
            LSOF0 = 0x00000800,
            LSOF1 = 0x00001000,
            LCK   = 0x00002000,
            RXDM  = 0x00004000,
            RXDP  = 0x00008000,
        };
    };

    struct USB_DADDR {
        static constexpr uint32_t address = 0x40005c4c;
        enum bits : uint32_t {
            ADD0 = 0x00000001,
            ADD1 = 0x00000002,
            ADD2 = 0x00000004,
            ADD3 = 0x00000008,
            ADD4 = 0x00000010,
            ADD5 = 0x00000020,
            ADD6 = 0x00000040,
            EF   = 0x00000080,
        };
    };

    struct USB_BTABLE {
        static constexpr uint32_t address = 0x40005c50;
        enum bits : uint32_t {
            BTABLE0  = 0x00000008,
            BTABLE1  = 0x00000010,
            BTABLE2  = 0x00000020,
            BTABLE3  = 0x00000040,
            BTABLE4  = 0x00000080,
            BTABLE5  = 0x00000100,
            BTABLE6  = 0x00000200,
            BTABLE7  = 0x00000400,
            BTABLE8  = 0x00000800,
            BTABLE9  = 0x00001000,
            BTABLE10 = 0x00002000,
            BTABLE11 = 0x00004000,
            BTABLE12 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_FS_DCFG {
        static constexpr uint32_t address = 0x50000800;
        enum bits : uint32_t {
            DSPD0    = 0x00000001,
            DSPD1    = 0x00000002,
            NZLSOHSK = 0x00000004,
            DAD0     = 0x00000010,
            DAD1     = 0x00000020,
            DAD2     = 0x00000040,
            DAD3     = 0x00000080,
            DAD4     = 0x00000100,
            DAD5     = 0x00000200,
            DAD6     = 0x00000400,
            PFIVL0   = 0x00000800,
            PFIVL1   = 0x00001000,
        };
    };

    struct OTG_FS_DEVICE_FS_DCTL {
        static constexpr uint32_t address = 0x50000804;
        enum bits : uint32_t {
            RWUSIG   = 0x00000001,
            SDIS     = 0x00000002,
            GINSTS   = 0x00000004,
            GONSTS   = 0x00000008,
            TCTL0    = 0x00000010,
            TCTL1    = 0x00000020,
            TCTL2    = 0x00000040,
            SGINAK   = 0x00000080,
            CGINAK   = 0x00000100,
            SGONAK   = 0x00000200,
            CGONAK   = 0x00000400,
            POPRGDNE = 0x00000800,
        };
    };

    struct OTG_FS_DEVICE_FS_DSTS {
        static constexpr uint32_t address = 0x50000808;
        enum bits : uint32_t {
            SUSPSTS  = 0x00000001,
            ENUMSPD0 = 0x00000002,
            ENUMSPD1 = 0x00000004,
            EERR     = 0x00000008,
            FNSOF0   = 0x00000100,
            FNSOF1   = 0x00000200,
            FNSOF2   = 0x00000400,
            FNSOF3   = 0x00000800,
            FNSOF4   = 0x00001000,
            FNSOF5   = 0x00002000,
            FNSOF6   = 0x00004000,
            FNSOF7   = 0x00008000,
            FNSOF8   = 0x00010000,
            FNSOF9   = 0x00020000,
            FNSOF10  = 0x00040000,
            FNSOF11  = 0x00080000,
            FNSOF12  = 0x00100000,
            FNSOF13  = 0x00200000,
        };
    };

    struct OTG_FS_DEVICE_FS_DIEPMSK {
        static constexpr uint32_t address = 0x50000810;
        enum bits : uint32_t {
            XFRCM     = 0x00000001,
            EPDM      = 0x00000002,
            TOM       = 0x00000008,
            ITTXFEMSK = 0x00000010,
            INEPNMM   = 0x00000020,
            INEPNEM   = 0x00000040,
        };
    };

    struct OTG_FS_DEVICE_FS_DOEPMSK {
        static constexpr uint32_t address = 0x50000814;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            EPDM   = 0x00000002,
            STUPM  = 0x00000008,
            OTEPDM = 0x00000010,
        };
    };

    struct OTG_FS_DEVICE_FS_DAINT {
        static constexpr uint32_t address = 0x50000818;
        enum bits : uint32_t {
            IEPINT0  = 0x00000001,
            IEPINT1  = 0x00000002,
            IEPINT2  = 0x00000004,
            IEPINT3  = 0x00000008,
            IEPINT4  = 0x00000010,
            IEPINT5  = 0x00000020,
            IEPINT6  = 0x00000040,
            IEPINT7  = 0x00000080,
            IEPINT8  = 0x00000100,
            IEPINT9  = 0x00000200,
            IEPINT10 = 0x00000400,
            IEPINT11 = 0x00000800,
            IEPINT12 = 0x00001000,
            IEPINT13 = 0x00002000,
            IEPINT14 = 0x00004000,
            IEPINT15 = 0x00008000,
            OEPINT0  = 0x00010000,
            OEPINT1  = 0x00020000,
            OEPINT2  = 0x00040000,
            OEPINT3  = 0x00080000,
            OEPINT4  = 0x00100000,
            OEPINT5  = 0x00200000,
            OEPINT6  = 0x00400000,
            OEPINT7  = 0x00800000,
            OEPINT8  = 0x01000000,
            OEPINT9  = 0x02000000,
            OEPINT10 = 0x04000000,
            OEPINT11 = 0x08000000,
            OEPINT12 = 0x10000000,
            OEPINT13 = 0x20000000,
            OEPINT14 = 0x40000000,
            OEPINT15 = 0x80000000,
        };
    };

    struct OTG_FS_DEVICE_FS_DAINTMSK {
        static constexpr uint32_t address = 0x5000081c;
        enum bits : uint32_t {
            IEPM0    = 0x00000001,
            IEPM1    = 0x00000002,
            IEPM2    = 0x00000004,
            IEPM3    = 0x00000008,
            IEPM4    = 0x00000010,
            IEPM5    = 0x00000020,
            IEPM6    = 0x00000040,
            IEPM7    = 0x00000080,
            IEPM8    = 0x00000100,
            IEPM9    = 0x00000200,
            IEPM10   = 0x00000400,
            IEPM11   = 0x00000800,
            IEPM12   = 0x00001000,
            IEPM13   = 0x00002000,
            IEPM14   = 0x00004000,
            IEPM15   = 0x00008000,
            OEPINT0  = 0x00010000,
            OEPINT1  = 0x00020000,
            OEPINT2  = 0x00040000,
            OEPINT3  = 0x00080000,
            OEPINT4  = 0x00100000,
            OEPINT5  = 0x00200000,
            OEPINT6  = 0x00400000,
            OEPINT7  = 0x00800000,
            OEPINT8  = 0x01000000,
            OEPINT9  = 0x02000000,
            OEPINT10 = 0x04000000,
            OEPINT11 = 0x08000000,
            OEPINT12 = 0x10000000,
            OEPINT13 = 0x20000000,
            OEPINT14 = 0x40000000,
            OEPINT15 = 0x80000000,
        };
    };

    struct OTG_FS_DEVICE_DVBUSDIS {
        static constexpr uint32_t address = 0x50000828;
        enum bits : uint32_t {
            VBUSDT0  = 0x00000001,
            VBUSDT1  = 0x00000002,
            VBUSDT2  = 0x00000004,
            VBUSDT3  = 0x00000008,
            VBUSDT4  = 0x00000010,
            VBUSDT5  = 0x00000020,
            VBUSDT6  = 0x00000040,
            VBUSDT7  = 0x00000080,
            VBUSDT8  = 0x00000100,
            VBUSDT9  = 0x00000200,
            VBUSDT10 = 0x00000400,
            VBUSDT11 = 0x00000800,
            VBUSDT12 = 0x00001000,
            VBUSDT13 = 0x00002000,
            VBUSDT14 = 0x00004000,
            VBUSDT15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_DVBUSPULSE {
        static constexpr uint32_t address = 0x5000082c;
        enum bits : uint32_t {
            DVBUSP0  = 0x00000001,
            DVBUSP1  = 0x00000002,
            DVBUSP2  = 0x00000004,
            DVBUSP3  = 0x00000008,
            DVBUSP4  = 0x00000010,
            DVBUSP5  = 0x00000020,
            DVBUSP6  = 0x00000040,
            DVBUSP7  = 0x00000080,
            DVBUSP8  = 0x00000100,
            DVBUSP9  = 0x00000200,
            DVBUSP10 = 0x00000400,
            DVBUSP11 = 0x00000800,
        };
    };

    struct OTG_FS_DEVICE_DIEPEMPMSK {
        static constexpr uint32_t address = 0x50000834;
        enum bits : uint32_t {
            INEPTXFEM0  = 0x00000001,
            INEPTXFEM1  = 0x00000002,
            INEPTXFEM2  = 0x00000004,
            INEPTXFEM3  = 0x00000008,
            INEPTXFEM4  = 0x00000010,
            INEPTXFEM5  = 0x00000020,
            INEPTXFEM6  = 0x00000040,
            INEPTXFEM7  = 0x00000080,
            INEPTXFEM8  = 0x00000100,
            INEPTXFEM9  = 0x00000200,
            INEPTXFEM10 = 0x00000400,
            INEPTXFEM11 = 0x00000800,
            INEPTXFEM12 = 0x00001000,
            INEPTXFEM13 = 0x00002000,
            INEPTXFEM14 = 0x00004000,
            INEPTXFEM15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_FS_DIEPCTL0 {
        static constexpr uint32_t address = 0x50000900;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            USBAEP  = 0x00008000,
            NAKSTS  = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            STALL   = 0x00200000,
            TXFNUM0 = 0x00400000,
            TXFNUM1 = 0x00800000,
            TXFNUM2 = 0x01000000,
            TXFNUM3 = 0x02000000,
            CNAK    = 0x04000000,
            SNAK    = 0x08000000,
            EPDIS   = 0x40000000,
            EPENA   = 0x80000000,
        };
    };

    struct OTG_FS_DEVICE_DIEPCTL1 {
        static constexpr uint32_t address = 0x50000920;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM_SD1PID = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            TXFNUM0        = 0x00400000,
            TXFNUM1        = 0x00800000,
            TXFNUM2        = 0x01000000,
            TXFNUM3        = 0x02000000,
            Stall          = 0x00200000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DIEPCTL2 {
        static constexpr uint32_t address = 0x50000940;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM        = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            TXFNUM0        = 0x00400000,
            TXFNUM1        = 0x00800000,
            TXFNUM2        = 0x01000000,
            TXFNUM3        = 0x02000000,
            Stall          = 0x00200000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DIEPCTL3 {
        static constexpr uint32_t address = 0x50000960;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM        = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            TXFNUM0        = 0x00400000,
            TXFNUM1        = 0x00800000,
            TXFNUM2        = 0x01000000,
            TXFNUM3        = 0x02000000,
            Stall          = 0x00200000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DOEPCTL0 {
        static constexpr uint32_t address = 0x50000b00;
        enum bits : uint32_t {
            EPENA  = 0x80000000,
            EPDIS  = 0x40000000,
            SNAK   = 0x08000000,
            CNAK   = 0x04000000,
            Stall  = 0x00200000,
            SNPM   = 0x00100000,
            EPTYP0 = 0x00040000,
            EPTYP1 = 0x00080000,
            NAKSTS = 0x00020000,
            USBAEP = 0x00008000,
            MPSIZ0 = 0x00000001,
            MPSIZ1 = 0x00000002,
        };
    };

    struct OTG_FS_DEVICE_DOEPCTL1 {
        static constexpr uint32_t address = 0x50000b20;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM        = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            Stall          = 0x00200000,
            SNPM           = 0x00100000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DOEPCTL2 {
        static constexpr uint32_t address = 0x50000b40;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM        = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            Stall          = 0x00200000,
            SNPM           = 0x00100000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DOEPCTL3 {
        static constexpr uint32_t address = 0x50000b60;
        enum bits : uint32_t {
            EPENA          = 0x80000000,
            EPDIS          = 0x40000000,
            SODDFRM        = 0x20000000,
            SD0PID_SEVNFRM = 0x10000000,
            SNAK           = 0x08000000,
            CNAK           = 0x04000000,
            Stall          = 0x00200000,
            SNPM           = 0x00100000,
            EPTYP0         = 0x00040000,
            EPTYP1         = 0x00080000,
            NAKSTS         = 0x00020000,
            EONUM_DPID     = 0x00010000,
            USBAEP         = 0x00008000,
            MPSIZ0         = 0x00000001,
            MPSIZ1         = 0x00000002,
            MPSIZ2         = 0x00000004,
            MPSIZ3         = 0x00000008,
            MPSIZ4         = 0x00000010,
            MPSIZ5         = 0x00000020,
            MPSIZ6         = 0x00000040,
            MPSIZ7         = 0x00000080,
            MPSIZ8         = 0x00000100,
            MPSIZ9         = 0x00000200,
            MPSIZ10        = 0x00000400,
        };
    };

    struct OTG_FS_DEVICE_DIEPINT0 {
        static constexpr uint32_t address = 0x50000908;
        enum bits : uint32_t {
            TXFE   = 0x00000080,
            INEPNE = 0x00000040,
            ITTXFE = 0x00000010,
            TOC    = 0x00000008,
            EPDISD = 0x00000002,
            XFRC   = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DIEPINT1 {
        static constexpr uint32_t address = 0x50000928;
        enum bits : uint32_t {
            TXFE   = 0x00000080,
            INEPNE = 0x00000040,
            ITTXFE = 0x00000010,
            TOC    = 0x00000008,
            EPDISD = 0x00000002,
            XFRC   = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DIEPINT2 {
        static constexpr uint32_t address = 0x50000948;
        enum bits : uint32_t {
            TXFE   = 0x00000080,
            INEPNE = 0x00000040,
            ITTXFE = 0x00000010,
            TOC    = 0x00000008,
            EPDISD = 0x00000002,
            XFRC   = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DIEPINT3 {
        static constexpr uint32_t address = 0x50000968;
        enum bits : uint32_t {
            TXFE   = 0x00000080,
            INEPNE = 0x00000040,
            ITTXFE = 0x00000010,
            TOC    = 0x00000008,
            EPDISD = 0x00000002,
            XFRC   = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DOEPINT0 {
        static constexpr uint32_t address = 0x50000b08;
        enum bits : uint32_t {
            B2BSTUP = 0x00000040,
            OTEPDIS = 0x00000010,
            STUP    = 0x00000008,
            EPDISD  = 0x00000002,
            XFRC    = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DOEPINT1 {
        static constexpr uint32_t address = 0x50000b28;
        enum bits : uint32_t {
            B2BSTUP = 0x00000040,
            OTEPDIS = 0x00000010,
            STUP    = 0x00000008,
            EPDISD  = 0x00000002,
            XFRC    = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DOEPINT2 {
        static constexpr uint32_t address = 0x50000b48;
        enum bits : uint32_t {
            B2BSTUP = 0x00000040,
            OTEPDIS = 0x00000010,
            STUP    = 0x00000008,
            EPDISD  = 0x00000002,
            XFRC    = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DOEPINT3 {
        static constexpr uint32_t address = 0x50000b68;
        enum bits : uint32_t {
            B2BSTUP = 0x00000040,
            OTEPDIS = 0x00000010,
            STUP    = 0x00000008,
            EPDISD  = 0x00000002,
            XFRC    = 0x00000001,
        };
    };

    struct OTG_FS_DEVICE_DIEPTSIZ0 {
        static constexpr uint32_t address = 0x50000910;
        enum bits : uint32_t {
            PKTCNT0 = 0x00080000,
            PKTCNT1 = 0x00100000,
            XFRSIZ0 = 0x00000001,
            XFRSIZ1 = 0x00000002,
            XFRSIZ2 = 0x00000004,
            XFRSIZ3 = 0x00000008,
            XFRSIZ4 = 0x00000010,
            XFRSIZ5 = 0x00000020,
            XFRSIZ6 = 0x00000040,
        };
    };

    struct OTG_FS_DEVICE_DOEPTSIZ0 {
        static constexpr uint32_t address = 0x50000b10;
        enum bits : uint32_t {
            STUPCNT0 = 0x20000000,
            STUPCNT1 = 0x40000000,
            PKTCNT   = 0x00080000,
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
        };
    };

    struct OTG_FS_DEVICE_DIEPTSIZ1 {
        static constexpr uint32_t address = 0x50000930;
        enum bits : uint32_t {
            MCNT0    = 0x20000000,
            MCNT1    = 0x40000000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
        };
    };

    struct OTG_FS_DEVICE_DIEPTSIZ2 {
        static constexpr uint32_t address = 0x50000950;
        enum bits : uint32_t {
            MCNT0    = 0x20000000,
            MCNT1    = 0x40000000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
        };
    };

    struct OTG_FS_DEVICE_DIEPTSIZ3 {
        static constexpr uint32_t address = 0x50000970;
        enum bits : uint32_t {
            MCNT0    = 0x20000000,
            MCNT1    = 0x40000000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
        };
    };

    struct OTG_FS_DEVICE_DTXFSTS0 {
        static constexpr uint32_t address = 0x50000918;
        enum bits : uint32_t {
            INEPTFSAV0  = 0x00000001,
            INEPTFSAV1  = 0x00000002,
            INEPTFSAV2  = 0x00000004,
            INEPTFSAV3  = 0x00000008,
            INEPTFSAV4  = 0x00000010,
            INEPTFSAV5  = 0x00000020,
            INEPTFSAV6  = 0x00000040,
            INEPTFSAV7  = 0x00000080,
            INEPTFSAV8  = 0x00000100,
            INEPTFSAV9  = 0x00000200,
            INEPTFSAV10 = 0x00000400,
            INEPTFSAV11 = 0x00000800,
            INEPTFSAV12 = 0x00001000,
            INEPTFSAV13 = 0x00002000,
            INEPTFSAV14 = 0x00004000,
            INEPTFSAV15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_DTXFSTS1 {
        static constexpr uint32_t address = 0x50000938;
        enum bits : uint32_t {
            INEPTFSAV0  = 0x00000001,
            INEPTFSAV1  = 0x00000002,
            INEPTFSAV2  = 0x00000004,
            INEPTFSAV3  = 0x00000008,
            INEPTFSAV4  = 0x00000010,
            INEPTFSAV5  = 0x00000020,
            INEPTFSAV6  = 0x00000040,
            INEPTFSAV7  = 0x00000080,
            INEPTFSAV8  = 0x00000100,
            INEPTFSAV9  = 0x00000200,
            INEPTFSAV10 = 0x00000400,
            INEPTFSAV11 = 0x00000800,
            INEPTFSAV12 = 0x00001000,
            INEPTFSAV13 = 0x00002000,
            INEPTFSAV14 = 0x00004000,
            INEPTFSAV15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_DTXFSTS2 {
        static constexpr uint32_t address = 0x50000958;
        enum bits : uint32_t {
            INEPTFSAV0  = 0x00000001,
            INEPTFSAV1  = 0x00000002,
            INEPTFSAV2  = 0x00000004,
            INEPTFSAV3  = 0x00000008,
            INEPTFSAV4  = 0x00000010,
            INEPTFSAV5  = 0x00000020,
            INEPTFSAV6  = 0x00000040,
            INEPTFSAV7  = 0x00000080,
            INEPTFSAV8  = 0x00000100,
            INEPTFSAV9  = 0x00000200,
            INEPTFSAV10 = 0x00000400,
            INEPTFSAV11 = 0x00000800,
            INEPTFSAV12 = 0x00001000,
            INEPTFSAV13 = 0x00002000,
            INEPTFSAV14 = 0x00004000,
            INEPTFSAV15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_DTXFSTS3 {
        static constexpr uint32_t address = 0x50000978;
        enum bits : uint32_t {
            INEPTFSAV0  = 0x00000001,
            INEPTFSAV1  = 0x00000002,
            INEPTFSAV2  = 0x00000004,
            INEPTFSAV3  = 0x00000008,
            INEPTFSAV4  = 0x00000010,
            INEPTFSAV5  = 0x00000020,
            INEPTFSAV6  = 0x00000040,
            INEPTFSAV7  = 0x00000080,
            INEPTFSAV8  = 0x00000100,
            INEPTFSAV9  = 0x00000200,
            INEPTFSAV10 = 0x00000400,
            INEPTFSAV11 = 0x00000800,
            INEPTFSAV12 = 0x00001000,
            INEPTFSAV13 = 0x00002000,
            INEPTFSAV14 = 0x00004000,
            INEPTFSAV15 = 0x00008000,
        };
    };

    struct OTG_FS_DEVICE_DOEPTSIZ1 {
        static constexpr uint32_t address = 0x50000b30;
        enum bits : uint32_t {
            RXDPID_STUPCNT0 = 0x20000000,
            RXDPID_STUPCNT1 = 0x40000000,
            PKTCNT0         = 0x00080000,
            PKTCNT1         = 0x00100000,
            PKTCNT2         = 0x00200000,
            PKTCNT3         = 0x00400000,
            PKTCNT4         = 0x00800000,
            PKTCNT5         = 0x01000000,
            PKTCNT6         = 0x02000000,
            PKTCNT7         = 0x04000000,
            PKTCNT8         = 0x08000000,
            PKTCNT9         = 0x10000000,
            XFRSIZ0         = 0x00000001,
            XFRSIZ1         = 0x00000002,
            XFRSIZ2         = 0x00000004,
            XFRSIZ3         = 0x00000008,
            XFRSIZ4         = 0x00000010,
            XFRSIZ5         = 0x00000020,
            XFRSIZ6         = 0x00000040,
            XFRSIZ7         = 0x00000080,
            XFRSIZ8         = 0x00000100,
            XFRSIZ9         = 0x00000200,
            XFRSIZ10        = 0x00000400,
            XFRSIZ11        = 0x00000800,
            XFRSIZ12        = 0x00001000,
            XFRSIZ13        = 0x00002000,
            XFRSIZ14        = 0x00004000,
            XFRSIZ15        = 0x00008000,
            XFRSIZ16        = 0x00010000,
            XFRSIZ17        = 0x00020000,
            XFRSIZ18        = 0x00040000,
        };
    };

    struct OTG_FS_DEVICE_DOEPTSIZ2 {
        static constexpr uint32_t address = 0x50000b50;
        enum bits : uint32_t {
            RXDPID_STUPCNT0 = 0x20000000,
            RXDPID_STUPCNT1 = 0x40000000,
            PKTCNT0         = 0x00080000,
            PKTCNT1         = 0x00100000,
            PKTCNT2         = 0x00200000,
            PKTCNT3         = 0x00400000,
            PKTCNT4         = 0x00800000,
            PKTCNT5         = 0x01000000,
            PKTCNT6         = 0x02000000,
            PKTCNT7         = 0x04000000,
            PKTCNT8         = 0x08000000,
            PKTCNT9         = 0x10000000,
            XFRSIZ0         = 0x00000001,
            XFRSIZ1         = 0x00000002,
            XFRSIZ2         = 0x00000004,
            XFRSIZ3         = 0x00000008,
            XFRSIZ4         = 0x00000010,
            XFRSIZ5         = 0x00000020,
            XFRSIZ6         = 0x00000040,
            XFRSIZ7         = 0x00000080,
            XFRSIZ8         = 0x00000100,
            XFRSIZ9         = 0x00000200,
            XFRSIZ10        = 0x00000400,
            XFRSIZ11        = 0x00000800,
            XFRSIZ12        = 0x00001000,
            XFRSIZ13        = 0x00002000,
            XFRSIZ14        = 0x00004000,
            XFRSIZ15        = 0x00008000,
            XFRSIZ16        = 0x00010000,
            XFRSIZ17        = 0x00020000,
            XFRSIZ18        = 0x00040000,
        };
    };

    struct OTG_FS_DEVICE_DOEPTSIZ3 {
        static constexpr uint32_t address = 0x50000b70;
        enum bits : uint32_t {
            RXDPID_STUPCNT0 = 0x20000000,
            RXDPID_STUPCNT1 = 0x40000000,
            PKTCNT0         = 0x00080000,
            PKTCNT1         = 0x00100000,
            PKTCNT2         = 0x00200000,
            PKTCNT3         = 0x00400000,
            PKTCNT4         = 0x00800000,
            PKTCNT5         = 0x01000000,
            PKTCNT6         = 0x02000000,
            PKTCNT7         = 0x04000000,
            PKTCNT8         = 0x08000000,
            PKTCNT9         = 0x10000000,
            XFRSIZ0         = 0x00000001,
            XFRSIZ1         = 0x00000002,
            XFRSIZ2         = 0x00000004,
            XFRSIZ3         = 0x00000008,
            XFRSIZ4         = 0x00000010,
            XFRSIZ5         = 0x00000020,
            XFRSIZ6         = 0x00000040,
            XFRSIZ7         = 0x00000080,
            XFRSIZ8         = 0x00000100,
            XFRSIZ9         = 0x00000200,
            XFRSIZ10        = 0x00000400,
            XFRSIZ11        = 0x00000800,
            XFRSIZ12        = 0x00001000,
            XFRSIZ13        = 0x00002000,
            XFRSIZ14        = 0x00004000,
            XFRSIZ15        = 0x00008000,
            XFRSIZ16        = 0x00010000,
            XFRSIZ17        = 0x00020000,
            XFRSIZ18        = 0x00040000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GOTGCTL {
        static constexpr uint32_t address = 0x50000000;
        enum bits : uint32_t {
            SRQSCS  = 0x00000001,
            SRQ     = 0x00000002,
            HNGSCS  = 0x00000100,
            HNPRQ   = 0x00000200,
            HSHNPEN = 0x00000400,
            DHNPEN  = 0x00000800,
            CIDSTS  = 0x00010000,
            DBCT    = 0x00020000,
            ASVLD   = 0x00040000,
            BSVLD   = 0x00080000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GOTGINT {
        static constexpr uint32_t address = 0x50000004;
        enum bits : uint32_t {
            SEDET   = 0x00000004,
            SRSSCHG = 0x00000100,
            HNSSCHG = 0x00000200,
            HNGDET  = 0x00020000,
            ADTOCHG = 0x00040000,
            DBCDNE  = 0x00080000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GAHBCFG {
        static constexpr uint32_t address = 0x50000008;
        enum bits : uint32_t {
            GINT     = 0x00000001,
            TXFELVL  = 0x00000080,
            PTXFELVL = 0x00000100,
        };
    };

    struct OTG_FS_GLOBAL_FS_GUSBCFG {
        static constexpr uint32_t address = 0x5000000c;
        enum bits : uint32_t {
            TOCAL0 = 0x00000001,
            TOCAL1 = 0x00000002,
            TOCAL2 = 0x00000004,
            PHYSEL = 0x00000040,
            SRPCAP = 0x00000100,
            HNPCAP = 0x00000200,
            TRDT0  = 0x00000400,
            TRDT1  = 0x00000800,
            TRDT2  = 0x00001000,
            TRDT3  = 0x00002000,
            FHMOD  = 0x20000000,
            FDMOD  = 0x40000000,
            CTXPKT = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GRSTCTL {
        static constexpr uint32_t address = 0x50000010;
        enum bits : uint32_t {
            CSRST   = 0x00000001,
            HSRST   = 0x00000002,
            FCRST   = 0x00000004,
            RXFFLSH = 0x00000010,
            TXFFLSH = 0x00000020,
            TXFNUM0 = 0x00000040,
            TXFNUM1 = 0x00000080,
            TXFNUM2 = 0x00000100,
            TXFNUM3 = 0x00000200,
            TXFNUM4 = 0x00000400,
            AHBIDL  = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GINTSTS {
        static constexpr uint32_t address = 0x50000014;
        enum bits : uint32_t {
            CMOD               = 0x00000001,
            MMIS               = 0x00000002,
            OTGINT             = 0x00000004,
            SOF                = 0x00000008,
            RXFLVL             = 0x00000010,
            NPTXFE             = 0x00000020,
            GINAKEFF           = 0x00000040,
            GOUTNAKEFF         = 0x00000080,
            ESUSP              = 0x00000400,
            USBSUSP            = 0x00000800,
            USBRST             = 0x00001000,
            ENUMDNE            = 0x00002000,
            ISOODRP            = 0x00004000,
            EOPF               = 0x00008000,
            IEPINT             = 0x00040000,
            OEPINT             = 0x00080000,
            IISOIXFR           = 0x00100000,
            IPXFR_INCOMPISOOUT = 0x00200000,
            HPRTINT            = 0x01000000,
            HCINT              = 0x02000000,
            PTXFE              = 0x04000000,
            CIDSCHG            = 0x10000000,
            DISCINT            = 0x20000000,
            SRQINT             = 0x40000000,
            WKUPINT            = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GINTMSK {
        static constexpr uint32_t address = 0x50000018;
        enum bits : uint32_t {
            MMISM            = 0x00000002,
            OTGINT           = 0x00000004,
            SOFM             = 0x00000008,
            RXFLVLM          = 0x00000010,
            NPTXFEM          = 0x00000020,
            GINAKEFFM        = 0x00000040,
            GONAKEFFM        = 0x00000080,
            ESUSPM           = 0x00000400,
            USBSUSPM         = 0x00000800,
            USBRST           = 0x00001000,
            ENUMDNEM         = 0x00002000,
            ISOODRPM         = 0x00004000,
            EOPFM            = 0x00008000,
            EPMISM           = 0x00020000,
            IEPINT           = 0x00040000,
            OEPINT           = 0x00080000,
            IISOIXFRM        = 0x00100000,
            IPXFRM_IISOOXFRM = 0x00200000,
            PRTIM            = 0x01000000,
            HCIM             = 0x02000000,
            PTXFEM           = 0x04000000,
            CIDSCHGM         = 0x10000000,
            DISCINT          = 0x20000000,
            SRQIM            = 0x40000000,
            WUIM             = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GRXSTSR_Device {
        static constexpr uint32_t address = 0x5000001c;
        enum bits : uint32_t {
            EPNUM0  = 0x00000001,
            EPNUM1  = 0x00000002,
            EPNUM2  = 0x00000004,
            EPNUM3  = 0x00000008,
            BCNT0   = 0x00000010,
            BCNT1   = 0x00000020,
            BCNT2   = 0x00000040,
            BCNT3   = 0x00000080,
            BCNT4   = 0x00000100,
            BCNT5   = 0x00000200,
            BCNT6   = 0x00000400,
            BCNT7   = 0x00000800,
            BCNT8   = 0x00001000,
            BCNT9   = 0x00002000,
            BCNT10  = 0x00004000,
            DPID0   = 0x00008000,
            DPID1   = 0x00010000,
            PKTSTS0 = 0x00020000,
            PKTSTS1 = 0x00040000,
            PKTSTS2 = 0x00080000,
            PKTSTS3 = 0x00100000,
            FRMNUM0 = 0x00200000,
            FRMNUM1 = 0x00400000,
            FRMNUM2 = 0x00800000,
            FRMNUM3 = 0x01000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GRXSTSR_Host {
        static constexpr uint32_t address = 0x5000001c;
        enum bits : uint32_t {
            EPNUM0  = 0x00000001,
            EPNUM1  = 0x00000002,
            EPNUM2  = 0x00000004,
            EPNUM3  = 0x00000008,
            BCNT0   = 0x00000010,
            BCNT1   = 0x00000020,
            BCNT2   = 0x00000040,
            BCNT3   = 0x00000080,
            BCNT4   = 0x00000100,
            BCNT5   = 0x00000200,
            BCNT6   = 0x00000400,
            BCNT7   = 0x00000800,
            BCNT8   = 0x00001000,
            BCNT9   = 0x00002000,
            BCNT10  = 0x00004000,
            DPID0   = 0x00008000,
            DPID1   = 0x00010000,
            PKTSTS0 = 0x00020000,
            PKTSTS1 = 0x00040000,
            PKTSTS2 = 0x00080000,
            PKTSTS3 = 0x00100000,
            FRMNUM0 = 0x00200000,
            FRMNUM1 = 0x00400000,
            FRMNUM2 = 0x00800000,
            FRMNUM3 = 0x01000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GRXFSIZ {
        static constexpr uint32_t address = 0x50000024;
        enum bits : uint32_t {
            RXFD0  = 0x00000001,
            RXFD1  = 0x00000002,
            RXFD2  = 0x00000004,
            RXFD3  = 0x00000008,
            RXFD4  = 0x00000010,
            RXFD5  = 0x00000020,
            RXFD6  = 0x00000040,
            RXFD7  = 0x00000080,
            RXFD8  = 0x00000100,
            RXFD9  = 0x00000200,
            RXFD10 = 0x00000400,
            RXFD11 = 0x00000800,
            RXFD12 = 0x00001000,
            RXFD13 = 0x00002000,
            RXFD14 = 0x00004000,
            RXFD15 = 0x00008000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device {
        static constexpr uint32_t address = 0x50000028;
        enum bits : uint32_t {
            TX0FSA0  = 0x00000001,
            TX0FSA1  = 0x00000002,
            TX0FSA2  = 0x00000004,
            TX0FSA3  = 0x00000008,
            TX0FSA4  = 0x00000010,
            TX0FSA5  = 0x00000020,
            TX0FSA6  = 0x00000040,
            TX0FSA7  = 0x00000080,
            TX0FSA8  = 0x00000100,
            TX0FSA9  = 0x00000200,
            TX0FSA10 = 0x00000400,
            TX0FSA11 = 0x00000800,
            TX0FSA12 = 0x00001000,
            TX0FSA13 = 0x00002000,
            TX0FSA14 = 0x00004000,
            TX0FSA15 = 0x00008000,
            TX0FD0   = 0x00010000,
            TX0FD1   = 0x00020000,
            TX0FD2   = 0x00040000,
            TX0FD3   = 0x00080000,
            TX0FD4   = 0x00100000,
            TX0FD5   = 0x00200000,
            TX0FD6   = 0x00400000,
            TX0FD7   = 0x00800000,
            TX0FD8   = 0x01000000,
            TX0FD9   = 0x02000000,
            TX0FD10  = 0x04000000,
            TX0FD11  = 0x08000000,
            TX0FD12  = 0x10000000,
            TX0FD13  = 0x20000000,
            TX0FD14  = 0x40000000,
            TX0FD15  = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host {
        static constexpr uint32_t address = 0x50000028;
        enum bits : uint32_t {
            NPTXFSA0  = 0x00000001,
            NPTXFSA1  = 0x00000002,
            NPTXFSA2  = 0x00000004,
            NPTXFSA3  = 0x00000008,
            NPTXFSA4  = 0x00000010,
            NPTXFSA5  = 0x00000020,
            NPTXFSA6  = 0x00000040,
            NPTXFSA7  = 0x00000080,
            NPTXFSA8  = 0x00000100,
            NPTXFSA9  = 0x00000200,
            NPTXFSA10 = 0x00000400,
            NPTXFSA11 = 0x00000800,
            NPTXFSA12 = 0x00001000,
            NPTXFSA13 = 0x00002000,
            NPTXFSA14 = 0x00004000,
            NPTXFSA15 = 0x00008000,
            NPTXFD0   = 0x00010000,
            NPTXFD1   = 0x00020000,
            NPTXFD2   = 0x00040000,
            NPTXFD3   = 0x00080000,
            NPTXFD4   = 0x00100000,
            NPTXFD5   = 0x00200000,
            NPTXFD6   = 0x00400000,
            NPTXFD7   = 0x00800000,
            NPTXFD8   = 0x01000000,
            NPTXFD9   = 0x02000000,
            NPTXFD10  = 0x04000000,
            NPTXFD11  = 0x08000000,
            NPTXFD12  = 0x10000000,
            NPTXFD13  = 0x20000000,
            NPTXFD14  = 0x40000000,
            NPTXFD15  = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GNPTXSTS {
        static constexpr uint32_t address = 0x5000002c;
        enum bits : uint32_t {
            NPTXFSAV0  = 0x00000001,
            NPTXFSAV1  = 0x00000002,
            NPTXFSAV2  = 0x00000004,
            NPTXFSAV3  = 0x00000008,
            NPTXFSAV4  = 0x00000010,
            NPTXFSAV5  = 0x00000020,
            NPTXFSAV6  = 0x00000040,
            NPTXFSAV7  = 0x00000080,
            NPTXFSAV8  = 0x00000100,
            NPTXFSAV9  = 0x00000200,
            NPTXFSAV10 = 0x00000400,
            NPTXFSAV11 = 0x00000800,
            NPTXFSAV12 = 0x00001000,
            NPTXFSAV13 = 0x00002000,
            NPTXFSAV14 = 0x00004000,
            NPTXFSAV15 = 0x00008000,
            NPTQXSAV0  = 0x00010000,
            NPTQXSAV1  = 0x00020000,
            NPTQXSAV2  = 0x00040000,
            NPTQXSAV3  = 0x00080000,
            NPTQXSAV4  = 0x00100000,
            NPTQXSAV5  = 0x00200000,
            NPTQXSAV6  = 0x00400000,
            NPTQXSAV7  = 0x00800000,
            NPTXQTOP0  = 0x01000000,
            NPTXQTOP1  = 0x02000000,
            NPTXQTOP2  = 0x04000000,
            NPTXQTOP3  = 0x08000000,
            NPTXQTOP4  = 0x10000000,
            NPTXQTOP5  = 0x20000000,
            NPTXQTOP6  = 0x40000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_GCCFG {
        static constexpr uint32_t address = 0x50000038;
        enum bits : uint32_t {
            PWRDWN   = 0x00010000,
            VBUSASEN = 0x00040000,
            VBUSBSEN = 0x00080000,
            SOFOUTEN = 0x00100000,
        };
    };

    struct OTG_FS_GLOBAL_FS_CID {
        static constexpr uint32_t address = 0x5000003c;
        enum bits : uint32_t {
            PRODUCT_ID0  = 0x00000001,
            PRODUCT_ID1  = 0x00000002,
            PRODUCT_ID2  = 0x00000004,
            PRODUCT_ID3  = 0x00000008,
            PRODUCT_ID4  = 0x00000010,
            PRODUCT_ID5  = 0x00000020,
            PRODUCT_ID6  = 0x00000040,
            PRODUCT_ID7  = 0x00000080,
            PRODUCT_ID8  = 0x00000100,
            PRODUCT_ID9  = 0x00000200,
            PRODUCT_ID10 = 0x00000400,
            PRODUCT_ID11 = 0x00000800,
            PRODUCT_ID12 = 0x00001000,
            PRODUCT_ID13 = 0x00002000,
            PRODUCT_ID14 = 0x00004000,
            PRODUCT_ID15 = 0x00008000,
            PRODUCT_ID16 = 0x00010000,
            PRODUCT_ID17 = 0x00020000,
            PRODUCT_ID18 = 0x00040000,
            PRODUCT_ID19 = 0x00080000,
            PRODUCT_ID20 = 0x00100000,
            PRODUCT_ID21 = 0x00200000,
            PRODUCT_ID22 = 0x00400000,
            PRODUCT_ID23 = 0x00800000,
            PRODUCT_ID24 = 0x01000000,
            PRODUCT_ID25 = 0x02000000,
            PRODUCT_ID26 = 0x04000000,
            PRODUCT_ID27 = 0x08000000,
            PRODUCT_ID28 = 0x10000000,
            PRODUCT_ID29 = 0x20000000,
            PRODUCT_ID30 = 0x40000000,
            PRODUCT_ID31 = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_HPTXFSIZ {
        static constexpr uint32_t address = 0x50000100;
        enum bits : uint32_t {
            PTXSA0    = 0x00000001,
            PTXSA1    = 0x00000002,
            PTXSA2    = 0x00000004,
            PTXSA3    = 0x00000008,
            PTXSA4    = 0x00000010,
            PTXSA5    = 0x00000020,
            PTXSA6    = 0x00000040,
            PTXSA7    = 0x00000080,
            PTXSA8    = 0x00000100,
            PTXSA9    = 0x00000200,
            PTXSA10   = 0x00000400,
            PTXSA11   = 0x00000800,
            PTXSA12   = 0x00001000,
            PTXSA13   = 0x00002000,
            PTXSA14   = 0x00004000,
            PTXSA15   = 0x00008000,
            PTXFSIZ0  = 0x00010000,
            PTXFSIZ1  = 0x00020000,
            PTXFSIZ2  = 0x00040000,
            PTXFSIZ3  = 0x00080000,
            PTXFSIZ4  = 0x00100000,
            PTXFSIZ5  = 0x00200000,
            PTXFSIZ6  = 0x00400000,
            PTXFSIZ7  = 0x00800000,
            PTXFSIZ8  = 0x01000000,
            PTXFSIZ9  = 0x02000000,
            PTXFSIZ10 = 0x04000000,
            PTXFSIZ11 = 0x08000000,
            PTXFSIZ12 = 0x10000000,
            PTXFSIZ13 = 0x20000000,
            PTXFSIZ14 = 0x40000000,
            PTXFSIZ15 = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_DIEPTXF1 {
        static constexpr uint32_t address = 0x50000104;
        enum bits : uint32_t {
            INEPTXSA0  = 0x00000001,
            INEPTXSA1  = 0x00000002,
            INEPTXSA2  = 0x00000004,
            INEPTXSA3  = 0x00000008,
            INEPTXSA4  = 0x00000010,
            INEPTXSA5  = 0x00000020,
            INEPTXSA6  = 0x00000040,
            INEPTXSA7  = 0x00000080,
            INEPTXSA8  = 0x00000100,
            INEPTXSA9  = 0x00000200,
            INEPTXSA10 = 0x00000400,
            INEPTXSA11 = 0x00000800,
            INEPTXSA12 = 0x00001000,
            INEPTXSA13 = 0x00002000,
            INEPTXSA14 = 0x00004000,
            INEPTXSA15 = 0x00008000,
            INEPTXFD0  = 0x00010000,
            INEPTXFD1  = 0x00020000,
            INEPTXFD2  = 0x00040000,
            INEPTXFD3  = 0x00080000,
            INEPTXFD4  = 0x00100000,
            INEPTXFD5  = 0x00200000,
            INEPTXFD6  = 0x00400000,
            INEPTXFD7  = 0x00800000,
            INEPTXFD8  = 0x01000000,
            INEPTXFD9  = 0x02000000,
            INEPTXFD10 = 0x04000000,
            INEPTXFD11 = 0x08000000,
            INEPTXFD12 = 0x10000000,
            INEPTXFD13 = 0x20000000,
            INEPTXFD14 = 0x40000000,
            INEPTXFD15 = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_DIEPTXF2 {
        static constexpr uint32_t address = 0x50000108;
        enum bits : uint32_t {
            INEPTXSA0  = 0x00000001,
            INEPTXSA1  = 0x00000002,
            INEPTXSA2  = 0x00000004,
            INEPTXSA3  = 0x00000008,
            INEPTXSA4  = 0x00000010,
            INEPTXSA5  = 0x00000020,
            INEPTXSA6  = 0x00000040,
            INEPTXSA7  = 0x00000080,
            INEPTXSA8  = 0x00000100,
            INEPTXSA9  = 0x00000200,
            INEPTXSA10 = 0x00000400,
            INEPTXSA11 = 0x00000800,
            INEPTXSA12 = 0x00001000,
            INEPTXSA13 = 0x00002000,
            INEPTXSA14 = 0x00004000,
            INEPTXSA15 = 0x00008000,
            INEPTXFD0  = 0x00010000,
            INEPTXFD1  = 0x00020000,
            INEPTXFD2  = 0x00040000,
            INEPTXFD3  = 0x00080000,
            INEPTXFD4  = 0x00100000,
            INEPTXFD5  = 0x00200000,
            INEPTXFD6  = 0x00400000,
            INEPTXFD7  = 0x00800000,
            INEPTXFD8  = 0x01000000,
            INEPTXFD9  = 0x02000000,
            INEPTXFD10 = 0x04000000,
            INEPTXFD11 = 0x08000000,
            INEPTXFD12 = 0x10000000,
            INEPTXFD13 = 0x20000000,
            INEPTXFD14 = 0x40000000,
            INEPTXFD15 = 0x80000000,
        };
    };

    struct OTG_FS_GLOBAL_FS_DIEPTXF3 {
        static constexpr uint32_t address = 0x5000010c;
        enum bits : uint32_t {
            INEPTXSA0  = 0x00000001,
            INEPTXSA1  = 0x00000002,
            INEPTXSA2  = 0x00000004,
            INEPTXSA3  = 0x00000008,
            INEPTXSA4  = 0x00000010,
            INEPTXSA5  = 0x00000020,
            INEPTXSA6  = 0x00000040,
            INEPTXSA7  = 0x00000080,
            INEPTXSA8  = 0x00000100,
            INEPTXSA9  = 0x00000200,
            INEPTXSA10 = 0x00000400,
            INEPTXSA11 = 0x00000800,
            INEPTXSA12 = 0x00001000,
            INEPTXSA13 = 0x00002000,
            INEPTXSA14 = 0x00004000,
            INEPTXSA15 = 0x00008000,
            INEPTXFD0  = 0x00010000,
            INEPTXFD1  = 0x00020000,
            INEPTXFD2  = 0x00040000,
            INEPTXFD3  = 0x00080000,
            INEPTXFD4  = 0x00100000,
            INEPTXFD5  = 0x00200000,
            INEPTXFD6  = 0x00400000,
            INEPTXFD7  = 0x00800000,
            INEPTXFD8  = 0x01000000,
            INEPTXFD9  = 0x02000000,
            INEPTXFD10 = 0x04000000,
            INEPTXFD11 = 0x08000000,
            INEPTXFD12 = 0x10000000,
            INEPTXFD13 = 0x20000000,
            INEPTXFD14 = 0x40000000,
            INEPTXFD15 = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCFG {
        static constexpr uint32_t address = 0x50000400;
        enum bits : uint32_t {
            FSLSPCS0 = 0x00000001,
            FSLSPCS1 = 0x00000002,
            FSLSS    = 0x00000004,
        };
    };

    struct OTG_FS_HOST_HFIR {
        static constexpr uint32_t address = 0x50000404;
        enum bits : uint32_t {
            FRIVL0  = 0x00000001,
            FRIVL1  = 0x00000002,
            FRIVL2  = 0x00000004,
            FRIVL3  = 0x00000008,
            FRIVL4  = 0x00000010,
            FRIVL5  = 0x00000020,
            FRIVL6  = 0x00000040,
            FRIVL7  = 0x00000080,
            FRIVL8  = 0x00000100,
            FRIVL9  = 0x00000200,
            FRIVL10 = 0x00000400,
            FRIVL11 = 0x00000800,
            FRIVL12 = 0x00001000,
            FRIVL13 = 0x00002000,
            FRIVL14 = 0x00004000,
            FRIVL15 = 0x00008000,
        };
    };

    struct OTG_FS_HOST_FS_HFNUM {
        static constexpr uint32_t address = 0x50000408;
        enum bits : uint32_t {
            FRNUM0  = 0x00000001,
            FRNUM1  = 0x00000002,
            FRNUM2  = 0x00000004,
            FRNUM3  = 0x00000008,
            FRNUM4  = 0x00000010,
            FRNUM5  = 0x00000020,
            FRNUM6  = 0x00000040,
            FRNUM7  = 0x00000080,
            FRNUM8  = 0x00000100,
            FRNUM9  = 0x00000200,
            FRNUM10 = 0x00000400,
            FRNUM11 = 0x00000800,
            FRNUM12 = 0x00001000,
            FRNUM13 = 0x00002000,
            FRNUM14 = 0x00004000,
            FRNUM15 = 0x00008000,
            FTREM0  = 0x00010000,
            FTREM1  = 0x00020000,
            FTREM2  = 0x00040000,
            FTREM3  = 0x00080000,
            FTREM4  = 0x00100000,
            FTREM5  = 0x00200000,
            FTREM6  = 0x00400000,
            FTREM7  = 0x00800000,
            FTREM8  = 0x01000000,
            FTREM9  = 0x02000000,
            FTREM10 = 0x04000000,
            FTREM11 = 0x08000000,
            FTREM12 = 0x10000000,
            FTREM13 = 0x20000000,
            FTREM14 = 0x40000000,
            FTREM15 = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HPTXSTS {
        static constexpr uint32_t address = 0x50000410;
        enum bits : uint32_t {
            PTXFSAVL0  = 0x00000001,
            PTXFSAVL1  = 0x00000002,
            PTXFSAVL2  = 0x00000004,
            PTXFSAVL3  = 0x00000008,
            PTXFSAVL4  = 0x00000010,
            PTXFSAVL5  = 0x00000020,
            PTXFSAVL6  = 0x00000040,
            PTXFSAVL7  = 0x00000080,
            PTXFSAVL8  = 0x00000100,
            PTXFSAVL9  = 0x00000200,
            PTXFSAVL10 = 0x00000400,
            PTXFSAVL11 = 0x00000800,
            PTXFSAVL12 = 0x00001000,
            PTXFSAVL13 = 0x00002000,
            PTXFSAVL14 = 0x00004000,
            PTXFSAVL15 = 0x00008000,
            PTXQSAV0   = 0x00010000,
            PTXQSAV1   = 0x00020000,
            PTXQSAV2   = 0x00040000,
            PTXQSAV3   = 0x00080000,
            PTXQSAV4   = 0x00100000,
            PTXQSAV5   = 0x00200000,
            PTXQSAV6   = 0x00400000,
            PTXQSAV7   = 0x00800000,
            PTXQTOP0   = 0x01000000,
            PTXQTOP1   = 0x02000000,
            PTXQTOP2   = 0x04000000,
            PTXQTOP3   = 0x08000000,
            PTXQTOP4   = 0x10000000,
            PTXQTOP5   = 0x20000000,
            PTXQTOP6   = 0x40000000,
            PTXQTOP7   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_HAINT {
        static constexpr uint32_t address = 0x50000414;
        enum bits : uint32_t {
            HAINT0  = 0x00000001,
            HAINT1  = 0x00000002,
            HAINT2  = 0x00000004,
            HAINT3  = 0x00000008,
            HAINT4  = 0x00000010,
            HAINT5  = 0x00000020,
            HAINT6  = 0x00000040,
            HAINT7  = 0x00000080,
            HAINT8  = 0x00000100,
            HAINT9  = 0x00000200,
            HAINT10 = 0x00000400,
            HAINT11 = 0x00000800,
            HAINT12 = 0x00001000,
            HAINT13 = 0x00002000,
            HAINT14 = 0x00004000,
            HAINT15 = 0x00008000,
        };
    };

    struct OTG_FS_HOST_HAINTMSK {
        static constexpr uint32_t address = 0x50000418;
        enum bits : uint32_t {
            HAINTM0  = 0x00000001,
            HAINTM1  = 0x00000002,
            HAINTM2  = 0x00000004,
            HAINTM3  = 0x00000008,
            HAINTM4  = 0x00000010,
            HAINTM5  = 0x00000020,
            HAINTM6  = 0x00000040,
            HAINTM7  = 0x00000080,
            HAINTM8  = 0x00000100,
            HAINTM9  = 0x00000200,
            HAINTM10 = 0x00000400,
            HAINTM11 = 0x00000800,
            HAINTM12 = 0x00001000,
            HAINTM13 = 0x00002000,
            HAINTM14 = 0x00004000,
            HAINTM15 = 0x00008000,
        };
    };

    struct OTG_FS_HOST_FS_HPRT {
        static constexpr uint32_t address = 0x50000440;
        enum bits : uint32_t {
            PCSTS   = 0x00000001,
            PCDET   = 0x00000002,
            PENA    = 0x00000004,
            PENCHNG = 0x00000008,
            POCA    = 0x00000010,
            POCCHNG = 0x00000020,
            PRES    = 0x00000040,
            PSUSP   = 0x00000080,
            PRST    = 0x00000100,
            PLSTS0  = 0x00000400,
            PLSTS1  = 0x00000800,
            PPWR    = 0x00001000,
            PTCTL0  = 0x00002000,
            PTCTL1  = 0x00004000,
            PTCTL2  = 0x00008000,
            PTCTL3  = 0x00010000,
            PSPD0   = 0x00020000,
            PSPD1   = 0x00040000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR0 {
        static constexpr uint32_t address = 0x50000500;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR1 {
        static constexpr uint32_t address = 0x50000520;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR2 {
        static constexpr uint32_t address = 0x50000540;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR3 {
        static constexpr uint32_t address = 0x50000560;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR4 {
        static constexpr uint32_t address = 0x50000580;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR5 {
        static constexpr uint32_t address = 0x500005a0;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR6 {
        static constexpr uint32_t address = 0x500005c0;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCCHAR7 {
        static constexpr uint32_t address = 0x500005e0;
        enum bits : uint32_t {
            MPSIZ0  = 0x00000001,
            MPSIZ1  = 0x00000002,
            MPSIZ2  = 0x00000004,
            MPSIZ3  = 0x00000008,
            MPSIZ4  = 0x00000010,
            MPSIZ5  = 0x00000020,
            MPSIZ6  = 0x00000040,
            MPSIZ7  = 0x00000080,
            MPSIZ8  = 0x00000100,
            MPSIZ9  = 0x00000200,
            MPSIZ10 = 0x00000400,
            EPNUM0  = 0x00000800,
            EPNUM1  = 0x00001000,
            EPNUM2  = 0x00002000,
            EPNUM3  = 0x00004000,
            EPDIR   = 0x00008000,
            LSDEV   = 0x00020000,
            EPTYP0  = 0x00040000,
            EPTYP1  = 0x00080000,
            MCNT0   = 0x00100000,
            MCNT1   = 0x00200000,
            DAD0    = 0x00400000,
            DAD1    = 0x00800000,
            DAD2    = 0x01000000,
            DAD3    = 0x02000000,
            DAD4    = 0x04000000,
            DAD5    = 0x08000000,
            DAD6    = 0x10000000,
            ODDFRM  = 0x20000000,
            CHDIS   = 0x40000000,
            CHENA   = 0x80000000,
        };
    };

    struct OTG_FS_HOST_FS_HCINT0 {
        static constexpr uint32_t address = 0x50000508;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT1 {
        static constexpr uint32_t address = 0x50000528;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT2 {
        static constexpr uint32_t address = 0x50000548;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT3 {
        static constexpr uint32_t address = 0x50000568;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT4 {
        static constexpr uint32_t address = 0x50000588;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT5 {
        static constexpr uint32_t address = 0x500005a8;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT6 {
        static constexpr uint32_t address = 0x500005c8;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINT7 {
        static constexpr uint32_t address = 0x500005e8;
        enum bits : uint32_t {
            XFRC  = 0x00000001,
            CHH   = 0x00000002,
            STALL = 0x00000008,
            NAK   = 0x00000010,
            ACK   = 0x00000020,
            TXERR = 0x00000080,
            BBERR = 0x00000100,
            FRMOR = 0x00000200,
            DTERR = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK0 {
        static constexpr uint32_t address = 0x5000050c;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK1 {
        static constexpr uint32_t address = 0x5000052c;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK2 {
        static constexpr uint32_t address = 0x5000054c;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK3 {
        static constexpr uint32_t address = 0x5000056c;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK4 {
        static constexpr uint32_t address = 0x5000058c;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK5 {
        static constexpr uint32_t address = 0x500005ac;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK6 {
        static constexpr uint32_t address = 0x500005cc;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCINTMSK7 {
        static constexpr uint32_t address = 0x500005ec;
        enum bits : uint32_t {
            XFRCM  = 0x00000001,
            CHHM   = 0x00000002,
            STALLM = 0x00000008,
            NAKM   = 0x00000010,
            ACKM   = 0x00000020,
            NYET   = 0x00000040,
            TXERRM = 0x00000080,
            BBERRM = 0x00000100,
            FRMORM = 0x00000200,
            DTERRM = 0x00000400,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ0 {
        static constexpr uint32_t address = 0x50000510;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ1 {
        static constexpr uint32_t address = 0x50000530;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ2 {
        static constexpr uint32_t address = 0x50000550;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ3 {
        static constexpr uint32_t address = 0x50000570;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ4 {
        static constexpr uint32_t address = 0x50000590;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ5 {
        static constexpr uint32_t address = 0x500005b0;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ6 {
        static constexpr uint32_t address = 0x500005d0;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_HOST_FS_HCTSIZ7 {
        static constexpr uint32_t address = 0x500005f0;
        enum bits : uint32_t {
            XFRSIZ0  = 0x00000001,
            XFRSIZ1  = 0x00000002,
            XFRSIZ2  = 0x00000004,
            XFRSIZ3  = 0x00000008,
            XFRSIZ4  = 0x00000010,
            XFRSIZ5  = 0x00000020,
            XFRSIZ6  = 0x00000040,
            XFRSIZ7  = 0x00000080,
            XFRSIZ8  = 0x00000100,
            XFRSIZ9  = 0x00000200,
            XFRSIZ10 = 0x00000400,
            XFRSIZ11 = 0x00000800,
            XFRSIZ12 = 0x00001000,
            XFRSIZ13 = 0x00002000,
            XFRSIZ14 = 0x00004000,
            XFRSIZ15 = 0x00008000,
            XFRSIZ16 = 0x00010000,
            XFRSIZ17 = 0x00020000,
            XFRSIZ18 = 0x00040000,
            PKTCNT0  = 0x00080000,
            PKTCNT1  = 0x00100000,
            PKTCNT2  = 0x00200000,
            PKTCNT3  = 0x00400000,
            PKTCNT4  = 0x00800000,
            PKTCNT5  = 0x01000000,
            PKTCNT6  = 0x02000000,
            PKTCNT7  = 0x04000000,
            PKTCNT8  = 0x08000000,
            PKTCNT9  = 0x10000000,
            DPID0    = 0x20000000,
            DPID1    = 0x40000000,
        };
    };

    struct OTG_FS_PWRCLK_FS_PCGCCTL {
        static constexpr uint32_t address = 0x50000e00;
        enum bits : uint32_t {
            STPPCLK  = 0x00000001,
            GATEHCLK = 0x00000002,
            PHYSUSP  = 0x00000010,
        };
    };

    struct ETHERNET_MMC_MMCCR {
        static constexpr uint32_t address = 0x40028100;
        enum bits : uint32_t {
            CR  = 0x00000001,
            CSR = 0x00000002,
            ROR = 0x00000004,
            MCF = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCRIR {
        static constexpr uint32_t address = 0x40028104;
        enum bits : uint32_t {
            RFCES = 0x00000020,
            RFAES = 0x00000040,
            RGUFS = 0x00020000,
        };
    };

    struct ETHERNET_MMC_MMCTIR {
        static constexpr uint32_t address = 0x40028108;
        enum bits : uint32_t {
            TGFSCS  = 0x00004000,
            TGFMSCS = 0x00008000,
            TGFS    = 0x00200000,
        };
    };

    struct ETHERNET_MMC_MMCRIMR {
        static constexpr uint32_t address = 0x4002810c;
        enum bits : uint32_t {
            RFCEM = 0x00000020,
            RFAEM = 0x00000040,
            RGUFM = 0x00020000,
        };
    };

    struct ETHERNET_MMC_MMCTIMR {
        static constexpr uint32_t address = 0x40028110;
        enum bits : uint32_t {
            TGFSCM  = 0x00004000,
            TGFMSCM = 0x00008000,
            TGFM    = 0x00200000,
        };
    };

    struct ETHERNET_MMC_MMCTGFSCCR {
        static constexpr uint32_t address = 0x4002814c;
        enum bits : uint32_t {
            TGFSCC0  = 0x00000001,
            TGFSCC1  = 0x00000002,
            TGFSCC2  = 0x00000004,
            TGFSCC3  = 0x00000008,
            TGFSCC4  = 0x00000010,
            TGFSCC5  = 0x00000020,
            TGFSCC6  = 0x00000040,
            TGFSCC7  = 0x00000080,
            TGFSCC8  = 0x00000100,
            TGFSCC9  = 0x00000200,
            TGFSCC10 = 0x00000400,
            TGFSCC11 = 0x00000800,
            TGFSCC12 = 0x00001000,
            TGFSCC13 = 0x00002000,
            TGFSCC14 = 0x00004000,
            TGFSCC15 = 0x00008000,
            TGFSCC16 = 0x00010000,
            TGFSCC17 = 0x00020000,
            TGFSCC18 = 0x00040000,
            TGFSCC19 = 0x00080000,
            TGFSCC20 = 0x00100000,
            TGFSCC21 = 0x00200000,
            TGFSCC22 = 0x00400000,
            TGFSCC23 = 0x00800000,
            TGFSCC24 = 0x01000000,
            TGFSCC25 = 0x02000000,
            TGFSCC26 = 0x04000000,
            TGFSCC27 = 0x08000000,
            TGFSCC28 = 0x10000000,
            TGFSCC29 = 0x20000000,
            TGFSCC30 = 0x40000000,
            TGFSCC31 = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCTGFMSCCR {
        static constexpr uint32_t address = 0x40028150;
        enum bits : uint32_t {
            TGFMSCC0  = 0x00000001,
            TGFMSCC1  = 0x00000002,
            TGFMSCC2  = 0x00000004,
            TGFMSCC3  = 0x00000008,
            TGFMSCC4  = 0x00000010,
            TGFMSCC5  = 0x00000020,
            TGFMSCC6  = 0x00000040,
            TGFMSCC7  = 0x00000080,
            TGFMSCC8  = 0x00000100,
            TGFMSCC9  = 0x00000200,
            TGFMSCC10 = 0x00000400,
            TGFMSCC11 = 0x00000800,
            TGFMSCC12 = 0x00001000,
            TGFMSCC13 = 0x00002000,
            TGFMSCC14 = 0x00004000,
            TGFMSCC15 = 0x00008000,
            TGFMSCC16 = 0x00010000,
            TGFMSCC17 = 0x00020000,
            TGFMSCC18 = 0x00040000,
            TGFMSCC19 = 0x00080000,
            TGFMSCC20 = 0x00100000,
            TGFMSCC21 = 0x00200000,
            TGFMSCC22 = 0x00400000,
            TGFMSCC23 = 0x00800000,
            TGFMSCC24 = 0x01000000,
            TGFMSCC25 = 0x02000000,
            TGFMSCC26 = 0x04000000,
            TGFMSCC27 = 0x08000000,
            TGFMSCC28 = 0x10000000,
            TGFMSCC29 = 0x20000000,
            TGFMSCC30 = 0x40000000,
            TGFMSCC31 = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCTGFCR {
        static constexpr uint32_t address = 0x40028168;
        enum bits : uint32_t {
            TGFC0  = 0x00000001,
            TGFC1  = 0x00000002,
            TGFC2  = 0x00000004,
            TGFC3  = 0x00000008,
            TGFC4  = 0x00000010,
            TGFC5  = 0x00000020,
            TGFC6  = 0x00000040,
            TGFC7  = 0x00000080,
            TGFC8  = 0x00000100,
            TGFC9  = 0x00000200,
            TGFC10 = 0x00000400,
            TGFC11 = 0x00000800,
            TGFC12 = 0x00001000,
            TGFC13 = 0x00002000,
            TGFC14 = 0x00004000,
            TGFC15 = 0x00008000,
            TGFC16 = 0x00010000,
            TGFC17 = 0x00020000,
            TGFC18 = 0x00040000,
            TGFC19 = 0x00080000,
            TGFC20 = 0x00100000,
            TGFC21 = 0x00200000,
            TGFC22 = 0x00400000,
            TGFC23 = 0x00800000,
            TGFC24 = 0x01000000,
            TGFC25 = 0x02000000,
            TGFC26 = 0x04000000,
            TGFC27 = 0x08000000,
            TGFC28 = 0x10000000,
            TGFC29 = 0x20000000,
            TGFC30 = 0x40000000,
            TGFC31 = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCRFCECR {
        static constexpr uint32_t address = 0x40028194;
        enum bits : uint32_t {
            RFCFC0  = 0x00000001,
            RFCFC1  = 0x00000002,
            RFCFC2  = 0x00000004,
            RFCFC3  = 0x00000008,
            RFCFC4  = 0x00000010,
            RFCFC5  = 0x00000020,
            RFCFC6  = 0x00000040,
            RFCFC7  = 0x00000080,
            RFCFC8  = 0x00000100,
            RFCFC9  = 0x00000200,
            RFCFC10 = 0x00000400,
            RFCFC11 = 0x00000800,
            RFCFC12 = 0x00001000,
            RFCFC13 = 0x00002000,
            RFCFC14 = 0x00004000,
            RFCFC15 = 0x00008000,
            RFCFC16 = 0x00010000,
            RFCFC17 = 0x00020000,
            RFCFC18 = 0x00040000,
            RFCFC19 = 0x00080000,
            RFCFC20 = 0x00100000,
            RFCFC21 = 0x00200000,
            RFCFC22 = 0x00400000,
            RFCFC23 = 0x00800000,
            RFCFC24 = 0x01000000,
            RFCFC25 = 0x02000000,
            RFCFC26 = 0x04000000,
            RFCFC27 = 0x08000000,
            RFCFC28 = 0x10000000,
            RFCFC29 = 0x20000000,
            RFCFC30 = 0x40000000,
            RFCFC31 = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCRFAECR {
        static constexpr uint32_t address = 0x40028198;
        enum bits : uint32_t {
            RFAEC0  = 0x00000001,
            RFAEC1  = 0x00000002,
            RFAEC2  = 0x00000004,
            RFAEC3  = 0x00000008,
            RFAEC4  = 0x00000010,
            RFAEC5  = 0x00000020,
            RFAEC6  = 0x00000040,
            RFAEC7  = 0x00000080,
            RFAEC8  = 0x00000100,
            RFAEC9  = 0x00000200,
            RFAEC10 = 0x00000400,
            RFAEC11 = 0x00000800,
            RFAEC12 = 0x00001000,
            RFAEC13 = 0x00002000,
            RFAEC14 = 0x00004000,
            RFAEC15 = 0x00008000,
            RFAEC16 = 0x00010000,
            RFAEC17 = 0x00020000,
            RFAEC18 = 0x00040000,
            RFAEC19 = 0x00080000,
            RFAEC20 = 0x00100000,
            RFAEC21 = 0x00200000,
            RFAEC22 = 0x00400000,
            RFAEC23 = 0x00800000,
            RFAEC24 = 0x01000000,
            RFAEC25 = 0x02000000,
            RFAEC26 = 0x04000000,
            RFAEC27 = 0x08000000,
            RFAEC28 = 0x10000000,
            RFAEC29 = 0x20000000,
            RFAEC30 = 0x40000000,
            RFAEC31 = 0x80000000,
        };
    };

    struct ETHERNET_MMC_MMCRGUFCR {
        static constexpr uint32_t address = 0x400281c4;
        enum bits : uint32_t {
            RGUFC0  = 0x00000001,
            RGUFC1  = 0x00000002,
            RGUFC2  = 0x00000004,
            RGUFC3  = 0x00000008,
            RGUFC4  = 0x00000010,
            RGUFC5  = 0x00000020,
            RGUFC6  = 0x00000040,
            RGUFC7  = 0x00000080,
            RGUFC8  = 0x00000100,
            RGUFC9  = 0x00000200,
            RGUFC10 = 0x00000400,
            RGUFC11 = 0x00000800,
            RGUFC12 = 0x00001000,
            RGUFC13 = 0x00002000,
            RGUFC14 = 0x00004000,
            RGUFC15 = 0x00008000,
            RGUFC16 = 0x00010000,
            RGUFC17 = 0x00020000,
            RGUFC18 = 0x00040000,
            RGUFC19 = 0x00080000,
            RGUFC20 = 0x00100000,
            RGUFC21 = 0x00200000,
            RGUFC22 = 0x00400000,
            RGUFC23 = 0x00800000,
            RGUFC24 = 0x01000000,
            RGUFC25 = 0x02000000,
            RGUFC26 = 0x04000000,
            RGUFC27 = 0x08000000,
            RGUFC28 = 0x10000000,
            RGUFC29 = 0x20000000,
            RGUFC30 = 0x40000000,
            RGUFC31 = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACCR {
        static constexpr uint32_t address = 0x40028000;
        enum bits : uint32_t {
            RE   = 0x00000004,
            TE   = 0x00000008,
            DC   = 0x00000010,
            BL0  = 0x00000020,
            BL1  = 0x00000040,
            APCS = 0x00000080,
            RD   = 0x00000200,
            IPCO = 0x00000400,
            DM   = 0x00000800,
            LM   = 0x00001000,
            ROD  = 0x00002000,
            FES  = 0x00004000,
            CSD  = 0x00010000,
            IFG0 = 0x00020000,
            IFG1 = 0x00040000,
            IFG2 = 0x00080000,
            JD   = 0x00400000,
            WD   = 0x00800000,
        };
    };

    struct ETHERNET_MAC_MACFFR {
        static constexpr uint32_t address = 0x40028004;
        enum bits : uint32_t {
            PM   = 0x00000001,
            HU   = 0x00000002,
            HM   = 0x00000004,
            DAIF = 0x00000008,
            PAM  = 0x00000010,
            BFD  = 0x00000020,
            PCF0 = 0x00000040,
            PCF1 = 0x00000080,
            SAIF = 0x00000100,
            SAF  = 0x00000200,
            HPF  = 0x00000400,
            RA   = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACHTHR {
        static constexpr uint32_t address = 0x40028008;
        enum bits : uint32_t {
            HTH0  = 0x00000001,
            HTH1  = 0x00000002,
            HTH2  = 0x00000004,
            HTH3  = 0x00000008,
            HTH4  = 0x00000010,
            HTH5  = 0x00000020,
            HTH6  = 0x00000040,
            HTH7  = 0x00000080,
            HTH8  = 0x00000100,
            HTH9  = 0x00000200,
            HTH10 = 0x00000400,
            HTH11 = 0x00000800,
            HTH12 = 0x00001000,
            HTH13 = 0x00002000,
            HTH14 = 0x00004000,
            HTH15 = 0x00008000,
            HTH16 = 0x00010000,
            HTH17 = 0x00020000,
            HTH18 = 0x00040000,
            HTH19 = 0x00080000,
            HTH20 = 0x00100000,
            HTH21 = 0x00200000,
            HTH22 = 0x00400000,
            HTH23 = 0x00800000,
            HTH24 = 0x01000000,
            HTH25 = 0x02000000,
            HTH26 = 0x04000000,
            HTH27 = 0x08000000,
            HTH28 = 0x10000000,
            HTH29 = 0x20000000,
            HTH30 = 0x40000000,
            HTH31 = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACHTLR {
        static constexpr uint32_t address = 0x4002800c;
        enum bits : uint32_t {
            HTL0  = 0x00000001,
            HTL1  = 0x00000002,
            HTL2  = 0x00000004,
            HTL3  = 0x00000008,
            HTL4  = 0x00000010,
            HTL5  = 0x00000020,
            HTL6  = 0x00000040,
            HTL7  = 0x00000080,
            HTL8  = 0x00000100,
            HTL9  = 0x00000200,
            HTL10 = 0x00000400,
            HTL11 = 0x00000800,
            HTL12 = 0x00001000,
            HTL13 = 0x00002000,
            HTL14 = 0x00004000,
            HTL15 = 0x00008000,
            HTL16 = 0x00010000,
            HTL17 = 0x00020000,
            HTL18 = 0x00040000,
            HTL19 = 0x00080000,
            HTL20 = 0x00100000,
            HTL21 = 0x00200000,
            HTL22 = 0x00400000,
            HTL23 = 0x00800000,
            HTL24 = 0x01000000,
            HTL25 = 0x02000000,
            HTL26 = 0x04000000,
            HTL27 = 0x08000000,
            HTL28 = 0x10000000,
            HTL29 = 0x20000000,
            HTL30 = 0x40000000,
            HTL31 = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACMIIAR {
        static constexpr uint32_t address = 0x40028010;
        enum bits : uint32_t {
            MB  = 0x00000001,
            MW  = 0x00000002,
            CR0 = 0x00000004,
            CR1 = 0x00000008,
            CR2 = 0x00000010,
            MR0 = 0x00000040,
            MR1 = 0x00000080,
            MR2 = 0x00000100,
            MR3 = 0x00000200,
            MR4 = 0x00000400,
            PA0 = 0x00000800,
            PA1 = 0x00001000,
            PA2 = 0x00002000,
            PA3 = 0x00004000,
            PA4 = 0x00008000,
        };
    };

    struct ETHERNET_MAC_MACMIIDR {
        static constexpr uint32_t address = 0x40028014;
        enum bits : uint32_t {
            MD0  = 0x00000001,
            MD1  = 0x00000002,
            MD2  = 0x00000004,
            MD3  = 0x00000008,
            MD4  = 0x00000010,
            MD5  = 0x00000020,
            MD6  = 0x00000040,
            MD7  = 0x00000080,
            MD8  = 0x00000100,
            MD9  = 0x00000200,
            MD10 = 0x00000400,
            MD11 = 0x00000800,
            MD12 = 0x00001000,
            MD13 = 0x00002000,
            MD14 = 0x00004000,
            MD15 = 0x00008000,
        };
    };

    struct ETHERNET_MAC_MACFCR {
        static constexpr uint32_t address = 0x40028018;
        enum bits : uint32_t {
            FCB_BPA = 0x00000001,
            TFCE    = 0x00000002,
            RFCE    = 0x00000004,
            UPFD    = 0x00000008,
            PLT0    = 0x00000010,
            PLT1    = 0x00000020,
            ZQPD    = 0x00000080,
            PT0     = 0x00010000,
            PT1     = 0x00020000,
            PT2     = 0x00040000,
            PT3     = 0x00080000,
            PT4     = 0x00100000,
            PT5     = 0x00200000,
            PT6     = 0x00400000,
            PT7     = 0x00800000,
            PT8     = 0x01000000,
            PT9     = 0x02000000,
            PT10    = 0x04000000,
            PT11    = 0x08000000,
            PT12    = 0x10000000,
            PT13    = 0x20000000,
            PT14    = 0x40000000,
            PT15    = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACVLANTR {
        static constexpr uint32_t address = 0x4002801c;
        enum bits : uint32_t {
            VLANTI0  = 0x00000001,
            VLANTI1  = 0x00000002,
            VLANTI2  = 0x00000004,
            VLANTI3  = 0x00000008,
            VLANTI4  = 0x00000010,
            VLANTI5  = 0x00000020,
            VLANTI6  = 0x00000040,
            VLANTI7  = 0x00000080,
            VLANTI8  = 0x00000100,
            VLANTI9  = 0x00000200,
            VLANTI10 = 0x00000400,
            VLANTI11 = 0x00000800,
            VLANTI12 = 0x00001000,
            VLANTI13 = 0x00002000,
            VLANTI14 = 0x00004000,
            VLANTI15 = 0x00008000,
            VLANTC   = 0x00010000,
        };
    };

    struct ETHERNET_MAC_MACRWUFFR {
        static constexpr uint32_t address = 0x40028028;
    };

    struct ETHERNET_MAC_MACPMTCSR {
        static constexpr uint32_t address = 0x4002802c;
        enum bits : uint32_t {
            PD     = 0x00000001,
            MPE    = 0x00000002,
            WFE    = 0x00000004,
            MPR    = 0x00000020,
            WFR    = 0x00000040,
            GU     = 0x00000200,
            WFFRPR = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACSR {
        static constexpr uint32_t address = 0x40028038;
        enum bits : uint32_t {
            PMTS  = 0x00000008,
            MMCS  = 0x00000010,
            MMCRS = 0x00000020,
            MMCTS = 0x00000040,
            TSTS  = 0x00000200,
        };
    };

    struct ETHERNET_MAC_MACIMR {
        static constexpr uint32_t address = 0x4002803c;
        enum bits : uint32_t {
            PMTIM = 0x00000008,
            TSTIM = 0x00000200,
        };
    };

    struct ETHERNET_MAC_MACA0HR {
        static constexpr uint32_t address = 0x40028040;
        enum bits : uint32_t {
            MACA0H0  = 0x00000001,
            MACA0H1  = 0x00000002,
            MACA0H2  = 0x00000004,
            MACA0H3  = 0x00000008,
            MACA0H4  = 0x00000010,
            MACA0H5  = 0x00000020,
            MACA0H6  = 0x00000040,
            MACA0H7  = 0x00000080,
            MACA0H8  = 0x00000100,
            MACA0H9  = 0x00000200,
            MACA0H10 = 0x00000400,
            MACA0H11 = 0x00000800,
            MACA0H12 = 0x00001000,
            MACA0H13 = 0x00002000,
            MACA0H14 = 0x00004000,
            MACA0H15 = 0x00008000,
            MO       = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA0LR {
        static constexpr uint32_t address = 0x40028044;
        enum bits : uint32_t {
            MACA0L0  = 0x00000001,
            MACA0L1  = 0x00000002,
            MACA0L2  = 0x00000004,
            MACA0L3  = 0x00000008,
            MACA0L4  = 0x00000010,
            MACA0L5  = 0x00000020,
            MACA0L6  = 0x00000040,
            MACA0L7  = 0x00000080,
            MACA0L8  = 0x00000100,
            MACA0L9  = 0x00000200,
            MACA0L10 = 0x00000400,
            MACA0L11 = 0x00000800,
            MACA0L12 = 0x00001000,
            MACA0L13 = 0x00002000,
            MACA0L14 = 0x00004000,
            MACA0L15 = 0x00008000,
            MACA0L16 = 0x00010000,
            MACA0L17 = 0x00020000,
            MACA0L18 = 0x00040000,
            MACA0L19 = 0x00080000,
            MACA0L20 = 0x00100000,
            MACA0L21 = 0x00200000,
            MACA0L22 = 0x00400000,
            MACA0L23 = 0x00800000,
            MACA0L24 = 0x01000000,
            MACA0L25 = 0x02000000,
            MACA0L26 = 0x04000000,
            MACA0L27 = 0x08000000,
            MACA0L28 = 0x10000000,
            MACA0L29 = 0x20000000,
            MACA0L30 = 0x40000000,
            MACA0L31 = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA1HR {
        static constexpr uint32_t address = 0x40028048;
        enum bits : uint32_t {
            MACA1H0  = 0x00000001,
            MACA1H1  = 0x00000002,
            MACA1H2  = 0x00000004,
            MACA1H3  = 0x00000008,
            MACA1H4  = 0x00000010,
            MACA1H5  = 0x00000020,
            MACA1H6  = 0x00000040,
            MACA1H7  = 0x00000080,
            MACA1H8  = 0x00000100,
            MACA1H9  = 0x00000200,
            MACA1H10 = 0x00000400,
            MACA1H11 = 0x00000800,
            MACA1H12 = 0x00001000,
            MACA1H13 = 0x00002000,
            MACA1H14 = 0x00004000,
            MACA1H15 = 0x00008000,
            MBC0     = 0x01000000,
            MBC1     = 0x02000000,
            MBC2     = 0x04000000,
            MBC3     = 0x08000000,
            MBC4     = 0x10000000,
            MBC5     = 0x20000000,
            SA       = 0x40000000,
            AE       = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA1LR {
        static constexpr uint32_t address = 0x4002804c;
        enum bits : uint32_t {
            MACA1L0  = 0x00000001,
            MACA1L1  = 0x00000002,
            MACA1L2  = 0x00000004,
            MACA1L3  = 0x00000008,
            MACA1L4  = 0x00000010,
            MACA1L5  = 0x00000020,
            MACA1L6  = 0x00000040,
            MACA1L7  = 0x00000080,
            MACA1L8  = 0x00000100,
            MACA1L9  = 0x00000200,
            MACA1L10 = 0x00000400,
            MACA1L11 = 0x00000800,
            MACA1L12 = 0x00001000,
            MACA1L13 = 0x00002000,
            MACA1L14 = 0x00004000,
            MACA1L15 = 0x00008000,
            MACA1L16 = 0x00010000,
            MACA1L17 = 0x00020000,
            MACA1L18 = 0x00040000,
            MACA1L19 = 0x00080000,
            MACA1L20 = 0x00100000,
            MACA1L21 = 0x00200000,
            MACA1L22 = 0x00400000,
            MACA1L23 = 0x00800000,
            MACA1L24 = 0x01000000,
            MACA1L25 = 0x02000000,
            MACA1L26 = 0x04000000,
            MACA1L27 = 0x08000000,
            MACA1L28 = 0x10000000,
            MACA1L29 = 0x20000000,
            MACA1L30 = 0x40000000,
            MACA1L31 = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA2HR {
        static constexpr uint32_t address = 0x40028050;
        enum bits : uint32_t {
            ETH_MACA2HR0  = 0x00000001,
            ETH_MACA2HR1  = 0x00000002,
            ETH_MACA2HR2  = 0x00000004,
            ETH_MACA2HR3  = 0x00000008,
            ETH_MACA2HR4  = 0x00000010,
            ETH_MACA2HR5  = 0x00000020,
            ETH_MACA2HR6  = 0x00000040,
            ETH_MACA2HR7  = 0x00000080,
            ETH_MACA2HR8  = 0x00000100,
            ETH_MACA2HR9  = 0x00000200,
            ETH_MACA2HR10 = 0x00000400,
            ETH_MACA2HR11 = 0x00000800,
            ETH_MACA2HR12 = 0x00001000,
            ETH_MACA2HR13 = 0x00002000,
            ETH_MACA2HR14 = 0x00004000,
            ETH_MACA2HR15 = 0x00008000,
            MBC0          = 0x01000000,
            MBC1          = 0x02000000,
            MBC2          = 0x04000000,
            MBC3          = 0x08000000,
            MBC4          = 0x10000000,
            MBC5          = 0x20000000,
            SA            = 0x40000000,
            AE            = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA2LR {
        static constexpr uint32_t address = 0x40028054;
        enum bits : uint32_t {
            MACA2L0  = 0x00000001,
            MACA2L1  = 0x00000002,
            MACA2L2  = 0x00000004,
            MACA2L3  = 0x00000008,
            MACA2L4  = 0x00000010,
            MACA2L5  = 0x00000020,
            MACA2L6  = 0x00000040,
            MACA2L7  = 0x00000080,
            MACA2L8  = 0x00000100,
            MACA2L9  = 0x00000200,
            MACA2L10 = 0x00000400,
            MACA2L11 = 0x00000800,
            MACA2L12 = 0x00001000,
            MACA2L13 = 0x00002000,
            MACA2L14 = 0x00004000,
            MACA2L15 = 0x00008000,
            MACA2L16 = 0x00010000,
            MACA2L17 = 0x00020000,
            MACA2L18 = 0x00040000,
            MACA2L19 = 0x00080000,
            MACA2L20 = 0x00100000,
            MACA2L21 = 0x00200000,
            MACA2L22 = 0x00400000,
            MACA2L23 = 0x00800000,
            MACA2L24 = 0x01000000,
            MACA2L25 = 0x02000000,
            MACA2L26 = 0x04000000,
            MACA2L27 = 0x08000000,
            MACA2L28 = 0x10000000,
            MACA2L29 = 0x20000000,
            MACA2L30 = 0x40000000,
        };
    };

    struct ETHERNET_MAC_MACA3HR {
        static constexpr uint32_t address = 0x40028058;
        enum bits : uint32_t {
            MACA3H0  = 0x00000001,
            MACA3H1  = 0x00000002,
            MACA3H2  = 0x00000004,
            MACA3H3  = 0x00000008,
            MACA3H4  = 0x00000010,
            MACA3H5  = 0x00000020,
            MACA3H6  = 0x00000040,
            MACA3H7  = 0x00000080,
            MACA3H8  = 0x00000100,
            MACA3H9  = 0x00000200,
            MACA3H10 = 0x00000400,
            MACA3H11 = 0x00000800,
            MACA3H12 = 0x00001000,
            MACA3H13 = 0x00002000,
            MACA3H14 = 0x00004000,
            MACA3H15 = 0x00008000,
            MBC0     = 0x01000000,
            MBC1     = 0x02000000,
            MBC2     = 0x04000000,
            MBC3     = 0x08000000,
            MBC4     = 0x10000000,
            MBC5     = 0x20000000,
            SA       = 0x40000000,
            AE       = 0x80000000,
        };
    };

    struct ETHERNET_MAC_MACA3LR {
        static constexpr uint32_t address = 0x4002805c;
        enum bits : uint32_t {
            MBCA3L0  = 0x00000001,
            MBCA3L1  = 0x00000002,
            MBCA3L2  = 0x00000004,
            MBCA3L3  = 0x00000008,
            MBCA3L4  = 0x00000010,
            MBCA3L5  = 0x00000020,
            MBCA3L6  = 0x00000040,
            MBCA3L7  = 0x00000080,
            MBCA3L8  = 0x00000100,
            MBCA3L9  = 0x00000200,
            MBCA3L10 = 0x00000400,
            MBCA3L11 = 0x00000800,
            MBCA3L12 = 0x00001000,
            MBCA3L13 = 0x00002000,
            MBCA3L14 = 0x00004000,
            MBCA3L15 = 0x00008000,
            MBCA3L16 = 0x00010000,
            MBCA3L17 = 0x00020000,
            MBCA3L18 = 0x00040000,
            MBCA3L19 = 0x00080000,
            MBCA3L20 = 0x00100000,
            MBCA3L21 = 0x00200000,
            MBCA3L22 = 0x00400000,
            MBCA3L23 = 0x00800000,
            MBCA3L24 = 0x01000000,
            MBCA3L25 = 0x02000000,
            MBCA3L26 = 0x04000000,
            MBCA3L27 = 0x08000000,
            MBCA3L28 = 0x10000000,
            MBCA3L29 = 0x20000000,
            MBCA3L30 = 0x40000000,
            MBCA3L31 = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTSCR {
        static constexpr uint32_t address = 0x40028700;
        enum bits : uint32_t {
            TSE   = 0x00000001,
            TSFCU = 0x00000002,
            TSSTI = 0x00000004,
            TSSTU = 0x00000008,
            TSITE = 0x00000010,
            TSARU = 0x00000020,
        };
    };

    struct ETHERNET_PTP_PTPSSIR {
        static constexpr uint32_t address = 0x40028704;
        enum bits : uint32_t {
            STSSI0 = 0x00000001,
            STSSI1 = 0x00000002,
            STSSI2 = 0x00000004,
            STSSI3 = 0x00000008,
            STSSI4 = 0x00000010,
            STSSI5 = 0x00000020,
            STSSI6 = 0x00000040,
            STSSI7 = 0x00000080,
        };
    };

    struct ETHERNET_PTP_PTPTSHR {
        static constexpr uint32_t address = 0x40028708;
        enum bits : uint32_t {
            STS0  = 0x00000001,
            STS1  = 0x00000002,
            STS2  = 0x00000004,
            STS3  = 0x00000008,
            STS4  = 0x00000010,
            STS5  = 0x00000020,
            STS6  = 0x00000040,
            STS7  = 0x00000080,
            STS8  = 0x00000100,
            STS9  = 0x00000200,
            STS10 = 0x00000400,
            STS11 = 0x00000800,
            STS12 = 0x00001000,
            STS13 = 0x00002000,
            STS14 = 0x00004000,
            STS15 = 0x00008000,
            STS16 = 0x00010000,
            STS17 = 0x00020000,
            STS18 = 0x00040000,
            STS19 = 0x00080000,
            STS20 = 0x00100000,
            STS21 = 0x00200000,
            STS22 = 0x00400000,
            STS23 = 0x00800000,
            STS24 = 0x01000000,
            STS25 = 0x02000000,
            STS26 = 0x04000000,
            STS27 = 0x08000000,
            STS28 = 0x10000000,
            STS29 = 0x20000000,
            STS30 = 0x40000000,
            STS31 = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTSLR {
        static constexpr uint32_t address = 0x4002870c;
        enum bits : uint32_t {
            STSS0  = 0x00000001,
            STSS1  = 0x00000002,
            STSS2  = 0x00000004,
            STSS3  = 0x00000008,
            STSS4  = 0x00000010,
            STSS5  = 0x00000020,
            STSS6  = 0x00000040,
            STSS7  = 0x00000080,
            STSS8  = 0x00000100,
            STSS9  = 0x00000200,
            STSS10 = 0x00000400,
            STSS11 = 0x00000800,
            STSS12 = 0x00001000,
            STSS13 = 0x00002000,
            STSS14 = 0x00004000,
            STSS15 = 0x00008000,
            STSS16 = 0x00010000,
            STSS17 = 0x00020000,
            STSS18 = 0x00040000,
            STSS19 = 0x00080000,
            STSS20 = 0x00100000,
            STSS21 = 0x00200000,
            STSS22 = 0x00400000,
            STSS23 = 0x00800000,
            STSS24 = 0x01000000,
            STSS25 = 0x02000000,
            STSS26 = 0x04000000,
            STSS27 = 0x08000000,
            STSS28 = 0x10000000,
            STSS29 = 0x20000000,
            STSS30 = 0x40000000,
            STPNS  = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTSHUR {
        static constexpr uint32_t address = 0x40028710;
        enum bits : uint32_t {
            TSUS0  = 0x00000001,
            TSUS1  = 0x00000002,
            TSUS2  = 0x00000004,
            TSUS3  = 0x00000008,
            TSUS4  = 0x00000010,
            TSUS5  = 0x00000020,
            TSUS6  = 0x00000040,
            TSUS7  = 0x00000080,
            TSUS8  = 0x00000100,
            TSUS9  = 0x00000200,
            TSUS10 = 0x00000400,
            TSUS11 = 0x00000800,
            TSUS12 = 0x00001000,
            TSUS13 = 0x00002000,
            TSUS14 = 0x00004000,
            TSUS15 = 0x00008000,
            TSUS16 = 0x00010000,
            TSUS17 = 0x00020000,
            TSUS18 = 0x00040000,
            TSUS19 = 0x00080000,
            TSUS20 = 0x00100000,
            TSUS21 = 0x00200000,
            TSUS22 = 0x00400000,
            TSUS23 = 0x00800000,
            TSUS24 = 0x01000000,
            TSUS25 = 0x02000000,
            TSUS26 = 0x04000000,
            TSUS27 = 0x08000000,
            TSUS28 = 0x10000000,
            TSUS29 = 0x20000000,
            TSUS30 = 0x40000000,
            TSUS31 = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTSLUR {
        static constexpr uint32_t address = 0x40028714;
        enum bits : uint32_t {
            TSUSS0  = 0x00000001,
            TSUSS1  = 0x00000002,
            TSUSS2  = 0x00000004,
            TSUSS3  = 0x00000008,
            TSUSS4  = 0x00000010,
            TSUSS5  = 0x00000020,
            TSUSS6  = 0x00000040,
            TSUSS7  = 0x00000080,
            TSUSS8  = 0x00000100,
            TSUSS9  = 0x00000200,
            TSUSS10 = 0x00000400,
            TSUSS11 = 0x00000800,
            TSUSS12 = 0x00001000,
            TSUSS13 = 0x00002000,
            TSUSS14 = 0x00004000,
            TSUSS15 = 0x00008000,
            TSUSS16 = 0x00010000,
            TSUSS17 = 0x00020000,
            TSUSS18 = 0x00040000,
            TSUSS19 = 0x00080000,
            TSUSS20 = 0x00100000,
            TSUSS21 = 0x00200000,
            TSUSS22 = 0x00400000,
            TSUSS23 = 0x00800000,
            TSUSS24 = 0x01000000,
            TSUSS25 = 0x02000000,
            TSUSS26 = 0x04000000,
            TSUSS27 = 0x08000000,
            TSUSS28 = 0x10000000,
            TSUSS29 = 0x20000000,
            TSUSS30 = 0x40000000,
            TSUPNS  = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTSAR {
        static constexpr uint32_t address = 0x40028718;
        enum bits : uint32_t {
            TSA0  = 0x00000001,
            TSA1  = 0x00000002,
            TSA2  = 0x00000004,
            TSA3  = 0x00000008,
            TSA4  = 0x00000010,
            TSA5  = 0x00000020,
            TSA6  = 0x00000040,
            TSA7  = 0x00000080,
            TSA8  = 0x00000100,
            TSA9  = 0x00000200,
            TSA10 = 0x00000400,
            TSA11 = 0x00000800,
            TSA12 = 0x00001000,
            TSA13 = 0x00002000,
            TSA14 = 0x00004000,
            TSA15 = 0x00008000,
            TSA16 = 0x00010000,
            TSA17 = 0x00020000,
            TSA18 = 0x00040000,
            TSA19 = 0x00080000,
            TSA20 = 0x00100000,
            TSA21 = 0x00200000,
            TSA22 = 0x00400000,
            TSA23 = 0x00800000,
            TSA24 = 0x01000000,
            TSA25 = 0x02000000,
            TSA26 = 0x04000000,
            TSA27 = 0x08000000,
            TSA28 = 0x10000000,
            TSA29 = 0x20000000,
            TSA30 = 0x40000000,
            TSA31 = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTTHR {
        static constexpr uint32_t address = 0x4002871c;
        enum bits : uint32_t {
            TTSH0  = 0x00000001,
            TTSH1  = 0x00000002,
            TTSH2  = 0x00000004,
            TTSH3  = 0x00000008,
            TTSH4  = 0x00000010,
            TTSH5  = 0x00000020,
            TTSH6  = 0x00000040,
            TTSH7  = 0x00000080,
            TTSH8  = 0x00000100,
            TTSH9  = 0x00000200,
            TTSH10 = 0x00000400,
            TTSH11 = 0x00000800,
            TTSH12 = 0x00001000,
            TTSH13 = 0x00002000,
            TTSH14 = 0x00004000,
            TTSH15 = 0x00008000,
            TTSH16 = 0x00010000,
            TTSH17 = 0x00020000,
            TTSH18 = 0x00040000,
            TTSH19 = 0x00080000,
            TTSH20 = 0x00100000,
            TTSH21 = 0x00200000,
            TTSH22 = 0x00400000,
            TTSH23 = 0x00800000,
            TTSH24 = 0x01000000,
            TTSH25 = 0x02000000,
            TTSH26 = 0x04000000,
            TTSH27 = 0x08000000,
            TTSH28 = 0x10000000,
            TTSH29 = 0x20000000,
            TTSH30 = 0x40000000,
            TTSH31 = 0x80000000,
        };
    };

    struct ETHERNET_PTP_PTPTTLR {
        static constexpr uint32_t address = 0x40028720;
        enum bits : uint32_t {
            TTSL0  = 0x00000001,
            TTSL1  = 0x00000002,
            TTSL2  = 0x00000004,
            TTSL3  = 0x00000008,
            TTSL4  = 0x00000010,
            TTSL5  = 0x00000020,
            TTSL6  = 0x00000040,
            TTSL7  = 0x00000080,
            TTSL8  = 0x00000100,
            TTSL9  = 0x00000200,
            TTSL10 = 0x00000400,
            TTSL11 = 0x00000800,
            TTSL12 = 0x00001000,
            TTSL13 = 0x00002000,
            TTSL14 = 0x00004000,
            TTSL15 = 0x00008000,
            TTSL16 = 0x00010000,
            TTSL17 = 0x00020000,
            TTSL18 = 0x00040000,
            TTSL19 = 0x00080000,
            TTSL20 = 0x00100000,
            TTSL21 = 0x00200000,
            TTSL22 = 0x00400000,
            TTSL23 = 0x00800000,
            TTSL24 = 0x01000000,
            TTSL25 = 0x02000000,
            TTSL26 = 0x04000000,
            TTSL27 = 0x08000000,
            TTSL28 = 0x10000000,
            TTSL29 = 0x20000000,
            TTSL30 = 0x40000000,
            TTSL31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMABMR {
        static constexpr uint32_t address = 0x40029000;
        enum bits : uint32_t {
            SR    = 0x00000001,
            DA    = 0x00000002,
            DSL0  = 0x00000004,
            DSL1  = 0x00000008,
            DSL2  = 0x00000010,
            DSL3  = 0x00000020,
            DSL4  = 0x00000040,
            PBL0  = 0x00000100,
            PBL1  = 0x00000200,
            PBL2  = 0x00000400,
            PBL3  = 0x00000800,
            PBL4  = 0x00001000,
            PBL5  = 0x00002000,
            RTPR0 = 0x00004000,
            RTPR1 = 0x00008000,
            FB    = 0x00010000,
            RDP0  = 0x00020000,
            RDP1  = 0x00040000,
            RDP2  = 0x00080000,
            RDP3  = 0x00100000,
            RDP4  = 0x00200000,
            RDP5  = 0x00400000,
            USP   = 0x00800000,
            FPM   = 0x01000000,
            AAB   = 0x02000000,
        };
    };

    struct ETHERNET_DMA_DMATPDR {
        static constexpr uint32_t address = 0x40029004;
        enum bits : uint32_t {
            TPD0  = 0x00000001,
            TPD1  = 0x00000002,
            TPD2  = 0x00000004,
            TPD3  = 0x00000008,
            TPD4  = 0x00000010,
            TPD5  = 0x00000020,
            TPD6  = 0x00000040,
            TPD7  = 0x00000080,
            TPD8  = 0x00000100,
            TPD9  = 0x00000200,
            TPD10 = 0x00000400,
            TPD11 = 0x00000800,
            TPD12 = 0x00001000,
            TPD13 = 0x00002000,
            TPD14 = 0x00004000,
            TPD15 = 0x00008000,
            TPD16 = 0x00010000,
            TPD17 = 0x00020000,
            TPD18 = 0x00040000,
            TPD19 = 0x00080000,
            TPD20 = 0x00100000,
            TPD21 = 0x00200000,
            TPD22 = 0x00400000,
            TPD23 = 0x00800000,
            TPD24 = 0x01000000,
            TPD25 = 0x02000000,
            TPD26 = 0x04000000,
            TPD27 = 0x08000000,
            TPD28 = 0x10000000,
            TPD29 = 0x20000000,
            TPD30 = 0x40000000,
            TPD31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMARPDR {
        static constexpr uint32_t address = 0x40029008;
        enum bits : uint32_t {
            RPD0  = 0x00000001,
            RPD1  = 0x00000002,
            RPD2  = 0x00000004,
            RPD3  = 0x00000008,
            RPD4  = 0x00000010,
            RPD5  = 0x00000020,
            RPD6  = 0x00000040,
            RPD7  = 0x00000080,
            RPD8  = 0x00000100,
            RPD9  = 0x00000200,
            RPD10 = 0x00000400,
            RPD11 = 0x00000800,
            RPD12 = 0x00001000,
            RPD13 = 0x00002000,
            RPD14 = 0x00004000,
            RPD15 = 0x00008000,
            RPD16 = 0x00010000,
            RPD17 = 0x00020000,
            RPD18 = 0x00040000,
            RPD19 = 0x00080000,
            RPD20 = 0x00100000,
            RPD21 = 0x00200000,
            RPD22 = 0x00400000,
            RPD23 = 0x00800000,
            RPD24 = 0x01000000,
            RPD25 = 0x02000000,
            RPD26 = 0x04000000,
            RPD27 = 0x08000000,
            RPD28 = 0x10000000,
            RPD29 = 0x20000000,
            RPD30 = 0x40000000,
            RPD31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMARDLAR {
        static constexpr uint32_t address = 0x4002900c;
        enum bits : uint32_t {
            SRL0  = 0x00000001,
            SRL1  = 0x00000002,
            SRL2  = 0x00000004,
            SRL3  = 0x00000008,
            SRL4  = 0x00000010,
            SRL5  = 0x00000020,
            SRL6  = 0x00000040,
            SRL7  = 0x00000080,
            SRL8  = 0x00000100,
            SRL9  = 0x00000200,
            SRL10 = 0x00000400,
            SRL11 = 0x00000800,
            SRL12 = 0x00001000,
            SRL13 = 0x00002000,
            SRL14 = 0x00004000,
            SRL15 = 0x00008000,
            SRL16 = 0x00010000,
            SRL17 = 0x00020000,
            SRL18 = 0x00040000,
            SRL19 = 0x00080000,
            SRL20 = 0x00100000,
            SRL21 = 0x00200000,
            SRL22 = 0x00400000,
            SRL23 = 0x00800000,
            SRL24 = 0x01000000,
            SRL25 = 0x02000000,
            SRL26 = 0x04000000,
            SRL27 = 0x08000000,
            SRL28 = 0x10000000,
            SRL29 = 0x20000000,
            SRL30 = 0x40000000,
            SRL31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMATDLAR {
        static constexpr uint32_t address = 0x40029010;
        enum bits : uint32_t {
            STL0  = 0x00000001,
            STL1  = 0x00000002,
            STL2  = 0x00000004,
            STL3  = 0x00000008,
            STL4  = 0x00000010,
            STL5  = 0x00000020,
            STL6  = 0x00000040,
            STL7  = 0x00000080,
            STL8  = 0x00000100,
            STL9  = 0x00000200,
            STL10 = 0x00000400,
            STL11 = 0x00000800,
            STL12 = 0x00001000,
            STL13 = 0x00002000,
            STL14 = 0x00004000,
            STL15 = 0x00008000,
            STL16 = 0x00010000,
            STL17 = 0x00020000,
            STL18 = 0x00040000,
            STL19 = 0x00080000,
            STL20 = 0x00100000,
            STL21 = 0x00200000,
            STL22 = 0x00400000,
            STL23 = 0x00800000,
            STL24 = 0x01000000,
            STL25 = 0x02000000,
            STL26 = 0x04000000,
            STL27 = 0x08000000,
            STL28 = 0x10000000,
            STL29 = 0x20000000,
            STL30 = 0x40000000,
            STL31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMASR {
        static constexpr uint32_t address = 0x40029014;
        enum bits : uint32_t {
            TS   = 0x00000001,
            TPSS = 0x00000002,
            TBUS = 0x00000004,
            TJTS = 0x00000008,
            ROS  = 0x00000010,
            TUS  = 0x00000020,
            RS   = 0x00000040,
            RBUS = 0x00000080,
            RPSS = 0x00000100,
            PWTS = 0x00000200,
            ETS  = 0x00000400,
            FBES = 0x00002000,
            ERS  = 0x00004000,
            AIS  = 0x00008000,
            NIS  = 0x00010000,
            RPS0 = 0x00020000,
            RPS1 = 0x00040000,
            RPS2 = 0x00080000,
            TPS0 = 0x00100000,
            TPS1 = 0x00200000,
            TPS2 = 0x00400000,
            EBS0 = 0x00800000,
            EBS1 = 0x01000000,
            EBS2 = 0x02000000,
            MMCS = 0x08000000,
            PMTS = 0x10000000,
            TSTS = 0x20000000,
        };
    };

    struct ETHERNET_DMA_DMAOMR {
        static constexpr uint32_t address = 0x40029018;
        enum bits : uint32_t {
            SR     = 0x00000002,
            OSF    = 0x00000004,
            RTC0   = 0x00000008,
            RTC1   = 0x00000010,
            FUGF   = 0x00000040,
            FEF    = 0x00000080,
            ST     = 0x00002000,
            TTC0   = 0x00004000,
            TTC1   = 0x00008000,
            TTC2   = 0x00010000,
            FTF    = 0x00100000,
            TSF    = 0x00200000,
            DFRF   = 0x01000000,
            RSF    = 0x02000000,
            DTCEFD = 0x04000000,
        };
    };

    struct ETHERNET_DMA_DMAIER {
        static constexpr uint32_t address = 0x4002901c;
        enum bits : uint32_t {
            TIE   = 0x00000001,
            TPSIE = 0x00000002,
            TBUIE = 0x00000004,
            TJTIE = 0x00000008,
            ROIE  = 0x00000010,
            TUIE  = 0x00000020,
            RIE   = 0x00000040,
            RBUIE = 0x00000080,
            RPSIE = 0x00000100,
            RWTIE = 0x00000200,
            ETIE  = 0x00000400,
            FBEIE = 0x00002000,
            ERIE  = 0x00004000,
            AISE  = 0x00008000,
            NISE  = 0x00010000,
        };
    };

    struct ETHERNET_DMA_DMAMFBOCR {
        static constexpr uint32_t address = 0x40029020;
        enum bits : uint32_t {
            MFC0  = 0x00000001,
            MFC1  = 0x00000002,
            MFC2  = 0x00000004,
            MFC3  = 0x00000008,
            MFC4  = 0x00000010,
            MFC5  = 0x00000020,
            MFC6  = 0x00000040,
            MFC7  = 0x00000080,
            MFC8  = 0x00000100,
            MFC9  = 0x00000200,
            MFC10 = 0x00000400,
            MFC11 = 0x00000800,
            MFC12 = 0x00001000,
            MFC13 = 0x00002000,
            MFC14 = 0x00004000,
            MFC15 = 0x00008000,
            OMFC  = 0x00010000,
            MFA0  = 0x00020000,
            MFA1  = 0x00040000,
            MFA2  = 0x00080000,
            MFA3  = 0x00100000,
            MFA4  = 0x00200000,
            MFA5  = 0x00400000,
            MFA6  = 0x00800000,
            MFA7  = 0x01000000,
            MFA8  = 0x02000000,
            MFA9  = 0x04000000,
            MFA10 = 0x08000000,
            OFOC  = 0x10000000,
        };
    };

    struct ETHERNET_DMA_DMACHTDR {
        static constexpr uint32_t address = 0x40029048;
        enum bits : uint32_t {
            HTDAP0  = 0x00000001,
            HTDAP1  = 0x00000002,
            HTDAP2  = 0x00000004,
            HTDAP3  = 0x00000008,
            HTDAP4  = 0x00000010,
            HTDAP5  = 0x00000020,
            HTDAP6  = 0x00000040,
            HTDAP7  = 0x00000080,
            HTDAP8  = 0x00000100,
            HTDAP9  = 0x00000200,
            HTDAP10 = 0x00000400,
            HTDAP11 = 0x00000800,
            HTDAP12 = 0x00001000,
            HTDAP13 = 0x00002000,
            HTDAP14 = 0x00004000,
            HTDAP15 = 0x00008000,
            HTDAP16 = 0x00010000,
            HTDAP17 = 0x00020000,
            HTDAP18 = 0x00040000,
            HTDAP19 = 0x00080000,
            HTDAP20 = 0x00100000,
            HTDAP21 = 0x00200000,
            HTDAP22 = 0x00400000,
            HTDAP23 = 0x00800000,
            HTDAP24 = 0x01000000,
            HTDAP25 = 0x02000000,
            HTDAP26 = 0x04000000,
            HTDAP27 = 0x08000000,
            HTDAP28 = 0x10000000,
            HTDAP29 = 0x20000000,
            HTDAP30 = 0x40000000,
            HTDAP31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMACHRDR {
        static constexpr uint32_t address = 0x4002904c;
        enum bits : uint32_t {
            HRDAP0  = 0x00000001,
            HRDAP1  = 0x00000002,
            HRDAP2  = 0x00000004,
            HRDAP3  = 0x00000008,
            HRDAP4  = 0x00000010,
            HRDAP5  = 0x00000020,
            HRDAP6  = 0x00000040,
            HRDAP7  = 0x00000080,
            HRDAP8  = 0x00000100,
            HRDAP9  = 0x00000200,
            HRDAP10 = 0x00000400,
            HRDAP11 = 0x00000800,
            HRDAP12 = 0x00001000,
            HRDAP13 = 0x00002000,
            HRDAP14 = 0x00004000,
            HRDAP15 = 0x00008000,
            HRDAP16 = 0x00010000,
            HRDAP17 = 0x00020000,
            HRDAP18 = 0x00040000,
            HRDAP19 = 0x00080000,
            HRDAP20 = 0x00100000,
            HRDAP21 = 0x00200000,
            HRDAP22 = 0x00400000,
            HRDAP23 = 0x00800000,
            HRDAP24 = 0x01000000,
            HRDAP25 = 0x02000000,
            HRDAP26 = 0x04000000,
            HRDAP27 = 0x08000000,
            HRDAP28 = 0x10000000,
            HRDAP29 = 0x20000000,
            HRDAP30 = 0x40000000,
            HRDAP31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMACHTBAR {
        static constexpr uint32_t address = 0x40029050;
        enum bits : uint32_t {
            HTBAP0  = 0x00000001,
            HTBAP1  = 0x00000002,
            HTBAP2  = 0x00000004,
            HTBAP3  = 0x00000008,
            HTBAP4  = 0x00000010,
            HTBAP5  = 0x00000020,
            HTBAP6  = 0x00000040,
            HTBAP7  = 0x00000080,
            HTBAP8  = 0x00000100,
            HTBAP9  = 0x00000200,
            HTBAP10 = 0x00000400,
            HTBAP11 = 0x00000800,
            HTBAP12 = 0x00001000,
            HTBAP13 = 0x00002000,
            HTBAP14 = 0x00004000,
            HTBAP15 = 0x00008000,
            HTBAP16 = 0x00010000,
            HTBAP17 = 0x00020000,
            HTBAP18 = 0x00040000,
            HTBAP19 = 0x00080000,
            HTBAP20 = 0x00100000,
            HTBAP21 = 0x00200000,
            HTBAP22 = 0x00400000,
            HTBAP23 = 0x00800000,
            HTBAP24 = 0x01000000,
            HTBAP25 = 0x02000000,
            HTBAP26 = 0x04000000,
            HTBAP27 = 0x08000000,
            HTBAP28 = 0x10000000,
            HTBAP29 = 0x20000000,
            HTBAP30 = 0x40000000,
            HTBAP31 = 0x80000000,
        };
    };

    struct ETHERNET_DMA_DMACHRBAR {
        static constexpr uint32_t address = 0x40029054;
        enum bits : uint32_t {
            HRBAP0  = 0x00000001,
            HRBAP1  = 0x00000002,
            HRBAP2  = 0x00000004,
            HRBAP3  = 0x00000008,
            HRBAP4  = 0x00000010,
            HRBAP5  = 0x00000020,
            HRBAP6  = 0x00000040,
            HRBAP7  = 0x00000080,
            HRBAP8  = 0x00000100,
            HRBAP9  = 0x00000200,
            HRBAP10 = 0x00000400,
            HRBAP11 = 0x00000800,
            HRBAP12 = 0x00001000,
            HRBAP13 = 0x00002000,
            HRBAP14 = 0x00004000,
            HRBAP15 = 0x00008000,
            HRBAP16 = 0x00010000,
            HRBAP17 = 0x00020000,
            HRBAP18 = 0x00040000,
            HRBAP19 = 0x00080000,
            HRBAP20 = 0x00100000,
            HRBAP21 = 0x00200000,
            HRBAP22 = 0x00400000,
            HRBAP23 = 0x00800000,
            HRBAP24 = 0x01000000,
            HRBAP25 = 0x02000000,
            HRBAP26 = 0x04000000,
            HRBAP27 = 0x08000000,
            HRBAP28 = 0x10000000,
            HRBAP29 = 0x20000000,
            HRBAP30 = 0x40000000,
            HRBAP31 = 0x80000000,
        };
    };

    struct NVIC_ISER0 {
        static constexpr uint32_t address = 0xe000e100;
        enum bits : uint32_t {
            SETENA0  = 0x00000001,
            SETENA1  = 0x00000002,
            SETENA2  = 0x00000004,
            SETENA3  = 0x00000008,
            SETENA4  = 0x00000010,
            SETENA5  = 0x00000020,
            SETENA6  = 0x00000040,
            SETENA7  = 0x00000080,
            SETENA8  = 0x00000100,
            SETENA9  = 0x00000200,
            SETENA10 = 0x00000400,
            SETENA11 = 0x00000800,
            SETENA12 = 0x00001000,
            SETENA13 = 0x00002000,
            SETENA14 = 0x00004000,
            SETENA15 = 0x00008000,
            SETENA16 = 0x00010000,
            SETENA17 = 0x00020000,
            SETENA18 = 0x00040000,
            SETENA19 = 0x00080000,
            SETENA20 = 0x00100000,
            SETENA21 = 0x00200000,
            SETENA22 = 0x00400000,
            SETENA23 = 0x00800000,
            SETENA24 = 0x01000000,
            SETENA25 = 0x02000000,
            SETENA26 = 0x04000000,
            SETENA27 = 0x08000000,
            SETENA28 = 0x10000000,
            SETENA29 = 0x20000000,
            SETENA30 = 0x40000000,
            SETENA31 = 0x80000000,
        };
    };

    struct NVIC_ISER1 {
        static constexpr uint32_t address = 0xe000e104;
        enum bits : uint32_t {
            SETENA0  = 0x00000001,
            SETENA1  = 0x00000002,
            SETENA2  = 0x00000004,
            SETENA3  = 0x00000008,
            SETENA4  = 0x00000010,
            SETENA5  = 0x00000020,
            SETENA6  = 0x00000040,
            SETENA7  = 0x00000080,
            SETENA8  = 0x00000100,
            SETENA9  = 0x00000200,
            SETENA10 = 0x00000400,
            SETENA11 = 0x00000800,
            SETENA12 = 0x00001000,
            SETENA13 = 0x00002000,
            SETENA14 = 0x00004000,
            SETENA15 = 0x00008000,
            SETENA16 = 0x00010000,
            SETENA17 = 0x00020000,
            SETENA18 = 0x00040000,
            SETENA19 = 0x00080000,
            SETENA20 = 0x00100000,
            SETENA21 = 0x00200000,
            SETENA22 = 0x00400000,
            SETENA23 = 0x00800000,
            SETENA24 = 0x01000000,
            SETENA25 = 0x02000000,
            SETENA26 = 0x04000000,
            SETENA27 = 0x08000000,
            SETENA28 = 0x10000000,
            SETENA29 = 0x20000000,
            SETENA30 = 0x40000000,
            SETENA31 = 0x80000000,
        };
    };

    struct NVIC_ICER0 {
        static constexpr uint32_t address = 0xe000e180;
        enum bits : uint32_t {
            CLRENA0  = 0x00000001,
            CLRENA1  = 0x00000002,
            CLRENA2  = 0x00000004,
            CLRENA3  = 0x00000008,
            CLRENA4  = 0x00000010,
            CLRENA5  = 0x00000020,
            CLRENA6  = 0x00000040,
            CLRENA7  = 0x00000080,
            CLRENA8  = 0x00000100,
            CLRENA9  = 0x00000200,
            CLRENA10 = 0x00000400,
            CLRENA11 = 0x00000800,
            CLRENA12 = 0x00001000,
            CLRENA13 = 0x00002000,
            CLRENA14 = 0x00004000,
            CLRENA15 = 0x00008000,
            CLRENA16 = 0x00010000,
            CLRENA17 = 0x00020000,
            CLRENA18 = 0x00040000,
            CLRENA19 = 0x00080000,
            CLRENA20 = 0x00100000,
            CLRENA21 = 0x00200000,
            CLRENA22 = 0x00400000,
            CLRENA23 = 0x00800000,
            CLRENA24 = 0x01000000,
            CLRENA25 = 0x02000000,
            CLRENA26 = 0x04000000,
            CLRENA27 = 0x08000000,
            CLRENA28 = 0x10000000,
            CLRENA29 = 0x20000000,
            CLRENA30 = 0x40000000,
            CLRENA31 = 0x80000000,
        };
    };

    struct NVIC_ICER1 {
        static constexpr uint32_t address = 0xe000e184;
        enum bits : uint32_t {
            CLRENA0  = 0x00000001,
            CLRENA1  = 0x00000002,
            CLRENA2  = 0x00000004,
            CLRENA3  = 0x00000008,
            CLRENA4  = 0x00000010,
            CLRENA5  = 0x00000020,
            CLRENA6  = 0x00000040,
            CLRENA7  = 0x00000080,
            CLRENA8  = 0x00000100,
            CLRENA9  = 0x00000200,
            CLRENA10 = 0x00000400,
            CLRENA11 = 0x00000800,
            CLRENA12 = 0x00001000,
            CLRENA13 = 0x00002000,
            CLRENA14 = 0x00004000,
            CLRENA15 = 0x00008000,
            CLRENA16 = 0x00010000,
            CLRENA17 = 0x00020000,
            CLRENA18 = 0x00040000,
            CLRENA19 = 0x00080000,
            CLRENA20 = 0x00100000,
            CLRENA21 = 0x00200000,
            CLRENA22 = 0x00400000,
            CLRENA23 = 0x00800000,
            CLRENA24 = 0x01000000,
            CLRENA25 = 0x02000000,
            CLRENA26 = 0x04000000,
            CLRENA27 = 0x08000000,
            CLRENA28 = 0x10000000,
            CLRENA29 = 0x20000000,
            CLRENA30 = 0x40000000,
            CLRENA31 = 0x80000000,
        };
    };

    struct NVIC_ISPR0 {
        static constexpr uint32_t address = 0xe000e200;
        enum bits : uint32_t {
            SETPEND0  = 0x00000001,
            SETPEND1  = 0x00000002,
            SETPEND2  = 0x00000004,
            SETPEND3  = 0x00000008,
            SETPEND4  = 0x00000010,
            SETPEND5  = 0x00000020,
            SETPEND6  = 0x00000040,
            SETPEND7  = 0x00000080,
            SETPEND8  = 0x00000100,
            SETPEND9  = 0x00000200,
            SETPEND10 = 0x00000400,
            SETPEND11 = 0x00000800,
            SETPEND12 = 0x00001000,
            SETPEND13 = 0x00002000,
            SETPEND14 = 0x00004000,
            SETPEND15 = 0x00008000,
            SETPEND16 = 0x00010000,
            SETPEND17 = 0x00020000,
            SETPEND18 = 0x00040000,
            SETPEND19 = 0x00080000,
            SETPEND20 = 0x00100000,
            SETPEND21 = 0x00200000,
            SETPEND22 = 0x00400000,
            SETPEND23 = 0x00800000,
            SETPEND24 = 0x01000000,
            SETPEND25 = 0x02000000,
            SETPEND26 = 0x04000000,
            SETPEND27 = 0x08000000,
            SETPEND28 = 0x10000000,
            SETPEND29 = 0x20000000,
            SETPEND30 = 0x40000000,
            SETPEND31 = 0x80000000,
        };
    };

    struct NVIC_ISPR1 {
        static constexpr uint32_t address = 0xe000e204;
        enum bits : uint32_t {
            SETPEND0  = 0x00000001,
            SETPEND1  = 0x00000002,
            SETPEND2  = 0x00000004,
            SETPEND3  = 0x00000008,
            SETPEND4  = 0x00000010,
            SETPEND5  = 0x00000020,
            SETPEND6  = 0x00000040,
            SETPEND7  = 0x00000080,
            SETPEND8  = 0x00000100,
            SETPEND9  = 0x00000200,
            SETPEND10 = 0x00000400,
            SETPEND11 = 0x00000800,
            SETPEND12 = 0x00001000,
            SETPEND13 = 0x00002000,
            SETPEND14 = 0x00004000,
            SETPEND15 = 0x00008000,
            SETPEND16 = 0x00010000,
            SETPEND17 = 0x00020000,
            SETPEND18 = 0x00040000,
            SETPEND19 = 0x00080000,
            SETPEND20 = 0x00100000,
            SETPEND21 = 0x00200000,
            SETPEND22 = 0x00400000,
            SETPEND23 = 0x00800000,
            SETPEND24 = 0x01000000,
            SETPEND25 = 0x02000000,
            SETPEND26 = 0x04000000,
            SETPEND27 = 0x08000000,
            SETPEND28 = 0x10000000,
            SETPEND29 = 0x20000000,
            SETPEND30 = 0x40000000,
            SETPEND31 = 0x80000000,
        };
    };

    struct NVIC_ICPR0 {
        static constexpr uint32_t address = 0xe000e280;
        enum bits : uint32_t {
            CLRPEND0  = 0x00000001,
            CLRPEND1  = 0x00000002,
            CLRPEND2  = 0x00000004,
            CLRPEND3  = 0x00000008,
            CLRPEND4  = 0x00000010,
            CLRPEND5  = 0x00000020,
            CLRPEND6  = 0x00000040,
            CLRPEND7  = 0x00000080,
            CLRPEND8  = 0x00000100,
            CLRPEND9  = 0x00000200,
            CLRPEND10 = 0x00000400,
            CLRPEND11 = 0x00000800,
            CLRPEND12 = 0x00001000,
            CLRPEND13 = 0x00002000,
            CLRPEND14 = 0x00004000,
            CLRPEND15 = 0x00008000,
            CLRPEND16 = 0x00010000,
            CLRPEND17 = 0x00020000,
            CLRPEND18 = 0x00040000,
            CLRPEND19 = 0x00080000,
            CLRPEND20 = 0x00100000,
            CLRPEND21 = 0x00200000,
            CLRPEND22 = 0x00400000,
            CLRPEND23 = 0x00800000,
            CLRPEND24 = 0x01000000,
            CLRPEND25 = 0x02000000,
            CLRPEND26 = 0x04000000,
            CLRPEND27 = 0x08000000,
            CLRPEND28 = 0x10000000,
            CLRPEND29 = 0x20000000,
            CLRPEND30 = 0x40000000,
            CLRPEND31 = 0x80000000,
        };
    };

    struct NVIC_ICPR1 {
        static constexpr uint32_t address = 0xe000e284;
        enum bits : uint32_t {
            CLRPEND0  = 0x00000001,
            CLRPEND1  = 0x00000002,
            CLRPEND2  = 0x00000004,
            CLRPEND3  = 0x00000008,
            CLRPEND4  = 0x00000010,
            CLRPEND5  = 0x00000020,
            CLRPEND6  = 0x00000040,
            CLRPEND7  = 0x00000080,
            CLRPEND8  = 0x00000100,
            CLRPEND9  = 0x00000200,
            CLRPEND10 = 0x00000400,
            CLRPEND11 = 0x00000800,
            CLRPEND12 = 0x00001000,
            CLRPEND13 = 0x00002000,
            CLRPEND14 = 0x00004000,
            CLRPEND15 = 0x00008000,
            CLRPEND16 = 0x00010000,
            CLRPEND17 = 0x00020000,
            CLRPEND18 = 0x00040000,
            CLRPEND19 = 0x00080000,
            CLRPEND20 = 0x00100000,
            CLRPEND21 = 0x00200000,
            CLRPEND22 = 0x00400000,
            CLRPEND23 = 0x00800000,
            CLRPEND24 = 0x01000000,
            CLRPEND25 = 0x02000000,
            CLRPEND26 = 0x04000000,
            CLRPEND27 = 0x08000000,
            CLRPEND28 = 0x10000000,
            CLRPEND29 = 0x20000000,
            CLRPEND30 = 0x40000000,
            CLRPEND31 = 0x80000000,
        };
    };

    struct NVIC_IABR0 {
        static constexpr uint32_t address = 0xe000e300;
        enum bits : uint32_t {
            ACTIVE0  = 0x00000001,
            ACTIVE1  = 0x00000002,
            ACTIVE2  = 0x00000004,
            ACTIVE3  = 0x00000008,
            ACTIVE4  = 0x00000010,
            ACTIVE5  = 0x00000020,
            ACTIVE6  = 0x00000040,
            ACTIVE7  = 0x00000080,
            ACTIVE8  = 0x00000100,
            ACTIVE9  = 0x00000200,
            ACTIVE10 = 0x00000400,
            ACTIVE11 = 0x00000800,
            ACTIVE12 = 0x00001000,
            ACTIVE13 = 0x00002000,
            ACTIVE14 = 0x00004000,
            ACTIVE15 = 0x00008000,
            ACTIVE16 = 0x00010000,
            ACTIVE17 = 0x00020000,
            ACTIVE18 = 0x00040000,
            ACTIVE19 = 0x00080000,
            ACTIVE20 = 0x00100000,
            ACTIVE21 = 0x00200000,
            ACTIVE22 = 0x00400000,
            ACTIVE23 = 0x00800000,
            ACTIVE24 = 0x01000000,
            ACTIVE25 = 0x02000000,
            ACTIVE26 = 0x04000000,
            ACTIVE27 = 0x08000000,
            ACTIVE28 = 0x10000000,
            ACTIVE29 = 0x20000000,
            ACTIVE30 = 0x40000000,
            ACTIVE31 = 0x80000000,
        };
    };

    struct NVIC_IABR1 {
        static constexpr uint32_t address = 0xe000e304;
        enum bits : uint32_t {
            ACTIVE0  = 0x00000001,
            ACTIVE1  = 0x00000002,
            ACTIVE2  = 0x00000004,
            ACTIVE3  = 0x00000008,
            ACTIVE4  = 0x00000010,
            ACTIVE5  = 0x00000020,
            ACTIVE6  = 0x00000040,
            ACTIVE7  = 0x00000080,
            ACTIVE8  = 0x00000100,
            ACTIVE9  = 0x00000200,
            ACTIVE10 = 0x00000400,
            ACTIVE11 = 0x00000800,
            ACTIVE12 = 0x00001000,
            ACTIVE13 = 0x00002000,
            ACTIVE14 = 0x00004000,
            ACTIVE15 = 0x00008000,
            ACTIVE16 = 0x00010000,
            ACTIVE17 = 0x00020000,
            ACTIVE18 = 0x00040000,
            ACTIVE19 = 0x00080000,
            ACTIVE20 = 0x00100000,
            ACTIVE21 = 0x00200000,
            ACTIVE22 = 0x00400000,
            ACTIVE23 = 0x00800000,
            ACTIVE24 = 0x01000000,
            ACTIVE25 = 0x02000000,
            ACTIVE26 = 0x04000000,
            ACTIVE27 = 0x08000000,
            ACTIVE28 = 0x10000000,
            ACTIVE29 = 0x20000000,
            ACTIVE30 = 0x40000000,
            ACTIVE31 = 0x80000000,
        };
    };

    struct NVIC_IPR0 {
        static constexpr uint32_t address = 0xe000e400;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR1 {
        static constexpr uint32_t address = 0xe000e404;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR2 {
        static constexpr uint32_t address = 0xe000e408;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR3 {
        static constexpr uint32_t address = 0xe000e40c;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR4 {
        static constexpr uint32_t address = 0xe000e410;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR5 {
        static constexpr uint32_t address = 0xe000e414;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR6 {
        static constexpr uint32_t address = 0xe000e418;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR7 {
        static constexpr uint32_t address = 0xe000e41c;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR8 {
        static constexpr uint32_t address = 0xe000e420;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR9 {
        static constexpr uint32_t address = 0xe000e424;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR10 {
        static constexpr uint32_t address = 0xe000e428;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR11 {
        static constexpr uint32_t address = 0xe000e42c;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR12 {
        static constexpr uint32_t address = 0xe000e430;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR13 {
        static constexpr uint32_t address = 0xe000e434;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct NVIC_IPR14 {
        static constexpr uint32_t address = 0xe000e438;
        enum bits : uint32_t {
            IPR_N00 = 0x00000001,
            IPR_N01 = 0x00000002,
            IPR_N02 = 0x00000004,
            IPR_N03 = 0x00000008,
            IPR_N04 = 0x00000010,
            IPR_N05 = 0x00000020,
            IPR_N06 = 0x00000040,
            IPR_N07 = 0x00000080,
            IPR_N10 = 0x00000100,
            IPR_N11 = 0x00000200,
            IPR_N12 = 0x00000400,
            IPR_N13 = 0x00000800,
            IPR_N14 = 0x00001000,
            IPR_N15 = 0x00002000,
            IPR_N16 = 0x00004000,
            IPR_N17 = 0x00008000,
            IPR_N20 = 0x00010000,
            IPR_N21 = 0x00020000,
            IPR_N22 = 0x00040000,
            IPR_N23 = 0x00080000,
            IPR_N24 = 0x00100000,
            IPR_N25 = 0x00200000,
            IPR_N26 = 0x00400000,
            IPR_N27 = 0x00800000,
            IPR_N30 = 0x01000000,
            IPR_N31 = 0x02000000,
            IPR_N32 = 0x04000000,
            IPR_N33 = 0x08000000,
            IPR_N34 = 0x10000000,
            IPR_N35 = 0x20000000,
            IPR_N36 = 0x40000000,
            IPR_N37 = 0x80000000,
        };
    };

    struct MPU_MPU_TYPER {
        static constexpr uint32_t address = 0xe000ed90;
        enum bits : uint32_t {
            SEPARATE = 0x00000001,
            DREGION0 = 0x00000100,
            DREGION1 = 0x00000200,
            DREGION2 = 0x00000400,
            DREGION3 = 0x00000800,
            DREGION4 = 0x00001000,
            DREGION5 = 0x00002000,
            DREGION6 = 0x00004000,
            DREGION7 = 0x00008000,
            IREGION0 = 0x00010000,
            IREGION1 = 0x00020000,
            IREGION2 = 0x00040000,
            IREGION3 = 0x00080000,
            IREGION4 = 0x00100000,
            IREGION5 = 0x00200000,
            IREGION6 = 0x00400000,
            IREGION7 = 0x00800000,
        };
    };

    struct MPU_MPU_CTRL {
        static constexpr uint32_t address = 0xe000ed94;
        enum bits : uint32_t {
            ENABLE     = 0x00000001,
            HFNMIENA   = 0x00000002,
            PRIVDEFENA = 0x00000004,
        };
    };

    struct MPU_MPU_RNR {
        static constexpr uint32_t address = 0xe000ed98;
        enum bits : uint32_t {
            REGION0 = 0x00000001,
            REGION1 = 0x00000002,
            REGION2 = 0x00000004,
            REGION3 = 0x00000008,
            REGION4 = 0x00000010,
            REGION5 = 0x00000020,
            REGION6 = 0x00000040,
            REGION7 = 0x00000080,
        };
    };

    struct MPU_MPU_RBAR {
        static constexpr uint32_t address = 0xe000ed9c;
        enum bits : uint32_t {
            REGION0 = 0x00000001,
            REGION1 = 0x00000002,
            REGION2 = 0x00000004,
            REGION3 = 0x00000008,
            VALID   = 0x00000010,
            ADDR0   = 0x00000020,
            ADDR1   = 0x00000040,
            ADDR2   = 0x00000080,
            ADDR3   = 0x00000100,
            ADDR4   = 0x00000200,
            ADDR5   = 0x00000400,
            ADDR6   = 0x00000800,
            ADDR7   = 0x00001000,
            ADDR8   = 0x00002000,
            ADDR9   = 0x00004000,
            ADDR10  = 0x00008000,
            ADDR11  = 0x00010000,
            ADDR12  = 0x00020000,
            ADDR13  = 0x00040000,
            ADDR14  = 0x00080000,
            ADDR15  = 0x00100000,
            ADDR16  = 0x00200000,
            ADDR17  = 0x00400000,
            ADDR18  = 0x00800000,
            ADDR19  = 0x01000000,
            ADDR20  = 0x02000000,
            ADDR21  = 0x04000000,
            ADDR22  = 0x08000000,
            ADDR23  = 0x10000000,
            ADDR24  = 0x20000000,
            ADDR25  = 0x40000000,
            ADDR26  = 0x80000000,
        };
    };

    struct MPU_MPU_RASR {
        static constexpr uint32_t address = 0xe000eda0;
        enum bits : uint32_t {
            ENABLE = 0x00000001,
            SIZE0  = 0x00000002,
            SIZE1  = 0x00000004,
            SIZE2  = 0x00000008,
            SIZE3  = 0x00000010,
            SIZE4  = 0x00000020,
            SRD0   = 0x00000100,
            SRD1   = 0x00000200,
            SRD2   = 0x00000400,
            SRD3   = 0x00000800,
            SRD4   = 0x00001000,
            SRD5   = 0x00002000,
            SRD6   = 0x00004000,
            SRD7   = 0x00008000,
            B      = 0x00010000,
            C      = 0x00020000,
            S      = 0x00040000,
            TEX0   = 0x00080000,
            TEX1   = 0x00100000,
            TEX2   = 0x00200000,
            AP0    = 0x01000000,
            AP1    = 0x02000000,
            AP2    = 0x04000000,
            XN     = 0x10000000,
        };
    };

    struct SCB_ACTRL_ACTRL {
        static constexpr uint32_t address = 0xe000e008;
        enum bits : uint32_t {
            DISFOLD        = 0x00000004,
            FPEXCODIS      = 0x00000400,
            DISRAMODE      = 0x00000800,
            DISITMATBFLUSH = 0x00001000,
        };
    };

    struct NVIC_STIR_STIR {
        static constexpr uint32_t address = 0xe000ef00;
        enum bits : uint32_t {
            INTID0 = 0x00000001,
            INTID1 = 0x00000002,
            INTID2 = 0x00000004,
            INTID3 = 0x00000008,
            INTID4 = 0x00000010,
            INTID5 = 0x00000020,
            INTID6 = 0x00000040,
            INTID7 = 0x00000080,
            INTID8 = 0x00000100,
        };
    };

    struct SCB_CPUID {
        static constexpr uint32_t address = 0xe000ed00;
        enum bits : uint32_t {
            Revision0    = 0x00000001,
            Revision1    = 0x00000002,
            Revision2    = 0x00000004,
            Revision3    = 0x00000008,
            PartNo0      = 0x00000010,
            PartNo1      = 0x00000020,
            PartNo2      = 0x00000040,
            PartNo3      = 0x00000080,
            PartNo4      = 0x00000100,
            PartNo5      = 0x00000200,
            PartNo6      = 0x00000400,
            PartNo7      = 0x00000800,
            PartNo8      = 0x00001000,
            PartNo9      = 0x00002000,
            PartNo10     = 0x00004000,
            PartNo11     = 0x00008000,
            Constant0    = 0x00010000,
            Constant1    = 0x00020000,
            Constant2    = 0x00040000,
            Constant3    = 0x00080000,
            Variant0     = 0x00100000,
            Variant1     = 0x00200000,
            Variant2     = 0x00400000,
            Variant3     = 0x00800000,
            Implementer0 = 0x01000000,
            Implementer1 = 0x02000000,
            Implementer2 = 0x04000000,
            Implementer3 = 0x08000000,
            Implementer4 = 0x10000000,
            Implementer5 = 0x20000000,
            Implementer6 = 0x40000000,
            Implementer7 = 0x80000000,
        };
    };

    struct SCB_ICSR {
        static constexpr uint32_t address = 0xe000ed04;
        enum bits : uint32_t {
            VECTACTIVE0  = 0x00000001,
            VECTACTIVE1  = 0x00000002,
            VECTACTIVE2  = 0x00000004,
            VECTACTIVE3  = 0x00000008,
            VECTACTIVE4  = 0x00000010,
            VECTACTIVE5  = 0x00000020,
            VECTACTIVE6  = 0x00000040,
            VECTACTIVE7  = 0x00000080,
            VECTACTIVE8  = 0x00000100,
            RETTOBASE    = 0x00000800,
            VECTPENDING0 = 0x00001000,
            VECTPENDING1 = 0x00002000,
            VECTPENDING2 = 0x00004000,
            VECTPENDING3 = 0x00008000,
            VECTPENDING4 = 0x00010000,
            VECTPENDING5 = 0x00020000,
            VECTPENDING6 = 0x00040000,
            ISRPENDING   = 0x00400000,
            PENDSTCLR    = 0x02000000,
            PENDSTSET    = 0x04000000,
            PENDSVCLR    = 0x08000000,
            PENDSVSET    = 0x10000000,
            NMIPENDSET   = 0x80000000,
        };
    };

    struct SCB_VTOR {
        static constexpr uint32_t address = 0xe000ed08;
        enum bits : uint32_t {
            TBLOFF0  = 0x00000200,
            TBLOFF1  = 0x00000400,
            TBLOFF2  = 0x00000800,
            TBLOFF3  = 0x00001000,
            TBLOFF4  = 0x00002000,
            TBLOFF5  = 0x00004000,
            TBLOFF6  = 0x00008000,
            TBLOFF7  = 0x00010000,
            TBLOFF8  = 0x00020000,
            TBLOFF9  = 0x00040000,
            TBLOFF10 = 0x00080000,
            TBLOFF11 = 0x00100000,
            TBLOFF12 = 0x00200000,
            TBLOFF13 = 0x00400000,
            TBLOFF14 = 0x00800000,
            TBLOFF15 = 0x01000000,
            TBLOFF16 = 0x02000000,
            TBLOFF17 = 0x04000000,
            TBLOFF18 = 0x08000000,
            TBLOFF19 = 0x10000000,
            TBLOFF20 = 0x20000000,
        };
    };

    struct SCB_AIRCR {
        static constexpr uint32_t address = 0xe000ed0c;
        enum bits : uint32_t {
            VECTRESET     = 0x00000001,
            VECTCLRACTIVE = 0x00000002,
            SYSRESETREQ   = 0x00000004,
            PRIGROUP0     = 0x00000100,
            PRIGROUP1     = 0x00000200,
            PRIGROUP2     = 0x00000400,
            ENDIANESS     = 0x00008000,
            VECTKEYSTAT0  = 0x00010000,
            VECTKEYSTAT1  = 0x00020000,
            VECTKEYSTAT2  = 0x00040000,
            VECTKEYSTAT3  = 0x00080000,
            VECTKEYSTAT4  = 0x00100000,
            VECTKEYSTAT5  = 0x00200000,
            VECTKEYSTAT6  = 0x00400000,
            VECTKEYSTAT7  = 0x00800000,
            VECTKEYSTAT8  = 0x01000000,
            VECTKEYSTAT9  = 0x02000000,
            VECTKEYSTAT10 = 0x04000000,
            VECTKEYSTAT11 = 0x08000000,
            VECTKEYSTAT12 = 0x10000000,
            VECTKEYSTAT13 = 0x20000000,
            VECTKEYSTAT14 = 0x40000000,
            VECTKEYSTAT15 = 0x80000000,
        };
    };

    struct SCB_SCR {
        static constexpr uint32_t address = 0xe000ed10;
        enum bits : uint32_t {
            SLEEPONEXIT = 0x00000002,
            SLEEPDEEP   = 0x00000004,
            SEVEONPEND  = 0x00000010,
        };
    };

    struct SCB_CCR {
        static constexpr uint32_t address = 0xe000ed14;
        enum bits : uint32_t {
            NONBASETHRDENA = 0x00000001,
            USERSETMPEND   = 0x00000002,
            UNALIGN__TRP   = 0x00000008,
            DIV_0_TRP      = 0x00000010,
            BFHFNMIGN      = 0x00000100,
            STKALIGN       = 0x00000200,
        };
    };

    struct SCB_SHPR1 {
        static constexpr uint32_t address = 0xe000ed18;
        enum bits : uint32_t {
            PRI_40 = 0x00000001,
            PRI_41 = 0x00000002,
            PRI_42 = 0x00000004,
            PRI_43 = 0x00000008,
            PRI_44 = 0x00000010,
            PRI_45 = 0x00000020,
            PRI_46 = 0x00000040,
            PRI_47 = 0x00000080,
            PRI_50 = 0x00000100,
            PRI_51 = 0x00000200,
            PRI_52 = 0x00000400,
            PRI_53 = 0x00000800,
            PRI_54 = 0x00001000,
            PRI_55 = 0x00002000,
            PRI_56 = 0x00004000,
            PRI_57 = 0x00008000,
            PRI_60 = 0x00010000,
            PRI_61 = 0x00020000,
            PRI_62 = 0x00040000,
            PRI_63 = 0x00080000,
            PRI_64 = 0x00100000,
            PRI_65 = 0x00200000,
            PRI_66 = 0x00400000,
            PRI_67 = 0x00800000,
        };
    };

    struct SCB_SHPR2 {
        static constexpr uint32_t address = 0xe000ed1c;
        enum bits : uint32_t {
            PRI_110 = 0x01000000,
            PRI_111 = 0x02000000,
            PRI_112 = 0x04000000,
            PRI_113 = 0x08000000,
            PRI_114 = 0x10000000,
            PRI_115 = 0x20000000,
            PRI_116 = 0x40000000,
            PRI_117 = 0x80000000,
        };
    };

    struct SCB_SHPR3 {
        static constexpr uint32_t address = 0xe000ed20;
        enum bits : uint32_t {
            PRI_140 = 0x00010000,
            PRI_141 = 0x00020000,
            PRI_142 = 0x00040000,
            PRI_143 = 0x00080000,
            PRI_144 = 0x00100000,
            PRI_145 = 0x00200000,
            PRI_146 = 0x00400000,
            PRI_147 = 0x00800000,
            PRI_150 = 0x01000000,
            PRI_151 = 0x02000000,
            PRI_152 = 0x04000000,
            PRI_153 = 0x08000000,
            PRI_154 = 0x10000000,
            PRI_155 = 0x20000000,
            PRI_156 = 0x40000000,
            PRI_157 = 0x80000000,
        };
    };

    struct SCB_SHCRS {
        static constexpr uint32_t address = 0xe000ed24;
        enum bits : uint32_t {
            MEMFAULTACT    = 0x00000001,
            BUSFAULTACT    = 0x00000002,
            USGFAULTACT    = 0x00000008,
            SVCALLACT      = 0x00000080,
            MONITORACT     = 0x00000100,
            PENDSVACT      = 0x00000400,
            SYSTICKACT     = 0x00000800,
            USGFAULTPENDED = 0x00001000,
            MEMFAULTPENDED = 0x00002000,
            BUSFAULTPENDED = 0x00004000,
            SVCALLPENDED   = 0x00008000,
            MEMFAULTENA    = 0x00010000,
            BUSFAULTENA    = 0x00020000,
            USGFAULTENA    = 0x00040000,
        };
    };

    struct SCB_CFSR_UFSR_BFSR_MMFSR {
        static constexpr uint32_t address = 0xe000ed28;
        enum bits : uint32_t {
            IACCVIOL    = 0x00000001,
            DACCVIOL    = 0x00000002,
            MUNSTKERR   = 0x00000008,
            MSTKERR     = 0x00000010,
            MLSPERR     = 0x00000020,
            MMARVALID   = 0x00000080,
            IBUSERR     = 0x00000100,
            PRECISERR   = 0x00000200,
            IMPRECISERR = 0x00000400,
            UNSTKERR    = 0x00000800,
            STKERR      = 0x00001000,
            LSPERR      = 0x00002000,
            BFARVALID   = 0x00008000,
            UNDEFINSTR  = 0x00010000,
            INVSTATE    = 0x00020000,
            INVPC       = 0x00040000,
            NOCP        = 0x00080000,
            UNALIGNED   = 0x01000000,
            DIVBYZERO   = 0x02000000,
        };
    };

    struct SCB_HFSR {
        static constexpr uint32_t address = 0xe000ed2c;
        enum bits : uint32_t {
            VECTTBL  = 0x00000002,
            FORCED   = 0x40000000,
            DEBUG_VT = 0x80000000,
        };
    };

    struct SCB_MMFAR {
        static constexpr uint32_t address = 0xe000ed34;
        enum bits : uint32_t {
            MMFAR0  = 0x00000001,
            MMFAR1  = 0x00000002,
            MMFAR2  = 0x00000004,
            MMFAR3  = 0x00000008,
            MMFAR4  = 0x00000010,
            MMFAR5  = 0x00000020,
            MMFAR6  = 0x00000040,
            MMFAR7  = 0x00000080,
            MMFAR8  = 0x00000100,
            MMFAR9  = 0x00000200,
            MMFAR10 = 0x00000400,
            MMFAR11 = 0x00000800,
            MMFAR12 = 0x00001000,
            MMFAR13 = 0x00002000,
            MMFAR14 = 0x00004000,
            MMFAR15 = 0x00008000,
            MMFAR16 = 0x00010000,
            MMFAR17 = 0x00020000,
            MMFAR18 = 0x00040000,
            MMFAR19 = 0x00080000,
            MMFAR20 = 0x00100000,
            MMFAR21 = 0x00200000,
            MMFAR22 = 0x00400000,
            MMFAR23 = 0x00800000,
            MMFAR24 = 0x01000000,
            MMFAR25 = 0x02000000,
            MMFAR26 = 0x04000000,
            MMFAR27 = 0x08000000,
            MMFAR28 = 0x10000000,
            MMFAR29 = 0x20000000,
            MMFAR30 = 0x40000000,
            MMFAR31 = 0x80000000,
        };
    };

    struct SCB_BFAR {
        static constexpr uint32_t address = 0xe000ed38;
        enum bits : uint32_t {
            BFAR0  = 0x00000001,
            BFAR1  = 0x00000002,
            BFAR2  = 0x00000004,
            BFAR3  = 0x00000008,
            BFAR4  = 0x00000010,
            BFAR5  = 0x00000020,
            BFAR6  = 0x00000040,
            BFAR7  = 0x00000080,
            BFAR8  = 0x00000100,
            BFAR9  = 0x00000200,
            BFAR10 = 0x00000400,
            BFAR11 = 0x00000800,
            BFAR12 = 0x00001000,
            BFAR13 = 0x00002000,
            BFAR14 = 0x00004000,
            BFAR15 = 0x00008000,
            BFAR16 = 0x00010000,
            BFAR17 = 0x00020000,
            BFAR18 = 0x00040000,
            BFAR19 = 0x00080000,
            BFAR20 = 0x00100000,
            BFAR21 = 0x00200000,
            BFAR22 = 0x00400000,
            BFAR23 = 0x00800000,
            BFAR24 = 0x01000000,
            BFAR25 = 0x02000000,
            BFAR26 = 0x04000000,
            BFAR27 = 0x08000000,
            BFAR28 = 0x10000000,
            BFAR29 = 0x20000000,
            BFAR30 = 0x40000000,
            BFAR31 = 0x80000000,
        };
    };

}
