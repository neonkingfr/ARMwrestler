//************************************************************
// Desciption: N2Nv1 Register File Header File
//      Generated by genRF (Version 1.11) 04/28/2018 15:32:33
//************************************************************

#ifndef N2NV1_RF_H
#define N2NV1_RF_H

// Register 0x00
typedef union n2nv1_r00{
  struct{
    unsigned RO_DEFAULT		: 10;
    unsigned FLL_CAP_DEFAULT		: 6;
  };
  uint32_t as_int;
} n2nv1_r00_t;
#define N2Nv1_R00_DEFAULT {{0x340, 0x00}}
_Static_assert(sizeof(n2nv1_r00_t) == 4, "Punned Structure Size");

// Register 0x01
typedef union n2nv1_r01{
  struct{
    unsigned FSM_D_LEN		: 8;
    unsigned FSM_CNT		: 16;
  };
  uint32_t as_int;
} n2nv1_r01_t;
#define N2Nv1_R01_DEFAULT {{0x10, 0x00FF}}
_Static_assert(sizeof(n2nv1_r01_t) == 4, "Punned Structure Size");

// Register 0x02
typedef union n2nv1_r02{
  struct{
    unsigned FSM_GUARD_LEN		: 14;
    unsigned FSM_PW_LEN		: 10;
  };
  uint32_t as_int;
} n2nv1_r02_t;
#define N2Nv1_R02_DEFAULT {{0x0003, 0x003}}
_Static_assert(sizeof(n2nv1_r02_t) == 4, "Punned Structure Size");

// Register 0x03
typedef union n2nv1_r03{
  struct{
    unsigned FSM_RX_SAMPLE_LEN		: 3;
    unsigned FSM_RX_DATA_BITS		: 8;
    unsigned FSM_ID		: 6;
    unsigned FSM_SLOT		: 6;
    unsigned ISOLATEN		: 1;
  };
  uint32_t as_int;
} n2nv1_r03_t;
#define N2Nv1_R03_DEFAULT {{0x0, 0x3C, 0x02, 0x04, 0x0}}
_Static_assert(sizeof(n2nv1_r03_t) == 4, "Punned Structure Size");

// Register 0x04
typedef union n2nv1_r04{
  struct{
    unsigned FLL_UP_CNT		: 24;
  };
  uint32_t as_int;
} n2nv1_r04_t;
#define N2Nv1_R04_DEFAULT {{0x000485}}
_Static_assert(sizeof(n2nv1_r04_t) == 4, "Punned Structure Size");

// Register 0x05
typedef union n2nv1_r05{
  struct{
    unsigned FLL_LOW_CNT		: 24;
  };
  uint32_t as_int;
} n2nv1_r05_t;
#define N2Nv1_R05_DEFAULT {{0x00042E}}
_Static_assert(sizeof(n2nv1_r05_t) == 4, "Punned Structure Size");

// Register 0x06
typedef union n2nv1_r06{
  struct{
    unsigned TX_TUNE_OW		: 1;
    unsigned RX_TUNE_OW		: 1;
    unsigned DIV_EN_OW		: 1;
    unsigned FSM_RSTN		: 1;
    unsigned FSM_EN		: 1;
    unsigned NOT_DEFINED_6_5		: 1;
    unsigned FLL_RSTN		: 1;
    unsigned FLL_EN		: 1;
    unsigned NOT_DEFINED_6_8		: 1;
    unsigned RO_RSTN		: 1;
    unsigned RO_EN		: 1;
    unsigned NOT_DEFINED_6_11		: 1;
    unsigned EN_DIG_MONITOR		: 1;
  };
  uint32_t as_int;
} n2nv1_r06_t;
#define N2Nv1_R06_DEFAULT {{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}}
_Static_assert(sizeof(n2nv1_r06_t) == 4, "Punned Structure Size");

// Register 0x07
typedef union n2nv1_r07{
  struct{
    unsigned N2N_TX_DATA_0		: 24;
  };
  uint32_t as_int;
} n2nv1_r07_t;
#define N2Nv1_R07_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r07_t) == 4, "Punned Structure Size");

// Register 0x08
typedef union n2nv1_r08{
  struct{
    unsigned N2N_TX_DATA_1		: 24;
  };
  uint32_t as_int;
} n2nv1_r08_t;
#define N2Nv1_R08_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r08_t) == 4, "Punned Structure Size");

// Register 0x09
typedef union n2nv1_r09{
  struct{
    unsigned N2N_TX_DATA_2		: 24;
  };
  uint32_t as_int;
} n2nv1_r09_t;
#define N2Nv1_R09_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r09_t) == 4, "Punned Structure Size");

// Register 0x0A
typedef union n2nv1_r0A{
  struct{
    unsigned N2N_TX_DATA_3		: 24;
  };
  uint32_t as_int;
} n2nv1_r0A_t;
#define N2Nv1_R0A_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r0A_t) == 4, "Punned Structure Size");

// Register 0x0B
typedef union n2nv1_r0B{
  struct{
    unsigned N2N_TX_DATA_4		: 24;
  };
  uint32_t as_int;
} n2nv1_r0B_t;
#define N2Nv1_R0B_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r0B_t) == 4, "Punned Structure Size");

// Register 0x0C
typedef union n2nv1_r0C{
  struct{
    unsigned N2N_TX_DATA_5		: 24;
  };
  uint32_t as_int;
} n2nv1_r0C_t;
#define N2Nv1_R0C_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r0C_t) == 4, "Punned Structure Size");

// Register 0x0D
typedef union n2nv1_r0D{
  struct{
    unsigned N2N_TX_DATA_6		: 24;
  };
  uint32_t as_int;
} n2nv1_r0D_t;
#define N2Nv1_R0D_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r0D_t) == 4, "Punned Structure Size");

// Register 0x0E
typedef union n2nv1_r0E{
  struct{
    unsigned N2N_TX_DATA_7		: 24;
  };
  uint32_t as_int;
} n2nv1_r0E_t;
#define N2Nv1_R0E_DEFAULT {{0x000000}}
_Static_assert(sizeof(n2nv1_r0E_t) == 4, "Punned Structure Size");

// Register 0x0F
typedef union n2nv1_r0F{
  struct{
    unsigned DIG_MONITOR_SEL1		: 4;
    unsigned DIG_MONITOR_SEL2		: 4;
    unsigned DIG_MONITOR_SEL3		: 4;
    unsigned DIG_MONITOR_SEL4		: 4;
  };
  uint32_t as_int;
} n2nv1_r0F_t;
#define N2Nv1_R0F_DEFAULT {{0x0, 0x0, 0x0, 0x0}}
_Static_assert(sizeof(n2nv1_r0F_t) == 4, "Punned Structure Size");

// Register 0x10
// -- READ-ONLY --

// Register 0x11
// -- READ-ONLY --

// Register 0x12
// -- READ-ONLY --

// Register 0x13
// -- READ-ONLY --

// Register 0x14
// -- READ-ONLY --

// Register 0x15
// -- READ-ONLY --

// Register 0x16
// -- READ-ONLY --

// Register 0x17
// -- READ-ONLY --

// Register 0x18
// -- READ-ONLY --

// Register 0x19
// -- READ-ONLY --

// Register 0x1A
// -- READ-ONLY --

// Register 0x1B
// -- READ-ONLY --

// Register 0x1C
// -- READ-ONLY --

// Register 0x1D
// -- READ-ONLY --

// Register 0x1E
// -- READ-ONLY --

// Register 0x1F
// -- READ-ONLY --

// Register 0x20
// -- READ-ONLY --

// Register 0x21
// -- READ-ONLY --

// Register 0x22
// -- READ-ONLY --

// Register 0x23
// -- READ-ONLY --

// Register 0x24
// -- READ-ONLY --

// Register 0x25
typedef union n2nv1_r25{
  struct{
    unsigned N2N_TRX_TX_BIAS_TUNE		: 8;
    unsigned N2N_TRX_RX_BIAS_TUNE		: 8;
  };
  uint32_t as_int;
} n2nv1_r25_t;
#define N2Nv1_R25_DEFAULT {{0x07, 0x03}}
_Static_assert(sizeof(n2nv1_r25_t) == 4, "Punned Structure Size");

// Register 0x26
typedef union n2nv1_r26{
  struct{
    unsigned N2N_TRX_TX_EN_OW		: 1;
    unsigned N2N_TRX_RX_EN_OW		: 1;
    unsigned N2N_TRX_RO_EN		: 1;
    unsigned N2N_TRX_DEBUG_IF_EN		: 1;
    unsigned N2N_TRX_CL_CTRL		: 6;
    unsigned N2N_TRX_CL_EN		: 1;
  };
  uint32_t as_int;
} n2nv1_r26_t;
#define N2Nv1_R26_DEFAULT {{0x0, 0x0, 0x0, 0x0, 0x0B, 0x0}}
_Static_assert(sizeof(n2nv1_r26_t) == 4, "Punned Structure Size");

// Register 0x27
// -- EMPTY --

// Register 0x28
// -- READ-ONLY --

// Register 0x29
typedef union n2nv1_r29{
  struct{
    unsigned IRQ_RPLY_REG_ADDR		: 8;
    unsigned IRQ_RPLY_SHORT_ADDR		: 8;
  };
  uint32_t as_int;
} n2nv1_r29_t;
#define N2Nv1_R29_DEFAULT {{0x00, 0x10}}
_Static_assert(sizeof(n2nv1_r29_t) == 4, "Punned Structure Size");

// Register 0x2A
// -- EMPTY --

// Register 0x2B
// -- EMPTY --

// Register 0x2C
// -- EMPTY --

// Register 0x2D
// -- EMPTY --

// Register 0x2E
// -- EMPTY --

// Register 0x2F
// -- EMPTY --

// Register 0x30
typedef union n2nv1_r30{
  struct{
    unsigned LC_CLK_RING		: 2;
    unsigned LC_CLK_DIV		: 2;
    unsigned MBUS_IGNORE_RX_FAIL		: 1;
  };
  uint32_t as_int;
} n2nv1_r30_t;
#define N2Nv1_R30_DEFAULT {{0x0, 0x1, 0x1}}
_Static_assert(sizeof(n2nv1_r30_t) == 4, "Punned Structure Size");

#endif // N2NV1_RF_H