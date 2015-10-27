//*******************************************************************
//Author: Gyouho Kim
//Description: SNSv6 Header File
//*******************************************************************

//Register 0x0
typedef union snsv6_r0{
  struct{ // LSB First
    unsigned CDCW_IRQ_EN	: 1;
    unsigned CDCW_MODE_PAR	: 1;
    unsigned CDCW_MODE_REF	: 1;
    unsigned CDCW_CTRL_DIV	: 2;
    unsigned CDCW_CTRL_RING	: 2;
    unsigned CDCW_ENABLE 	: 1;
    unsigned CDCW_RESETn 	: 1;
    unsigned CDCW_ISO		: 1;
    unsigned CDCW_PG_VBAT 	: 1;
    unsigned CDCW_PG_V1P2 	: 1;
    unsigned CDCW_PG_VLDO 	: 1;
  };
  uint32_t as_int;
} snsv6_r0_t;
#define SNSv6_R0_DEFAULT {{0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1}} // LSB is left
_Static_assert(sizeof(snsv6_r0_t) == 4, "Punned Structure Size");

//Register 1
typedef union snsv6_r1{
  struct{
    unsigned CDCW_N_CYCLE_SINGLE	: 10;
    unsigned CDCW_N_INIT_CLK		: 10;
  }; 
  uint32_t as_int;
} snsv6_r1_t;
#define SNSv6_R1_DEFAULT {{0x8, 0x80}}
_Static_assert(sizeof(snsv6_r1_t) == 4, "Punned Structure Size");

//Register 2
typedef union snsv6_r2{
  struct{
    unsigned CDCW_T_CHARGE		: 10;
    unsigned CDCW_N_CYCLE_SET	: 10;
  }; 
  uint32_t as_int;
} snsv6_r2_t;
#define SNSv6_R2_DEFAULT {{0x80, 0x10}}
_Static_assert(sizeof(snsv6_r2_t) == 4, "Punned Structure Size");

//Register 3-13
//Read Only

//Register 14
typedef union snsv6_r14{
  struct{
    unsigned TEMP_SENSOR_R_bmod 	: 4;
    unsigned TEMP_SENSOR_R_tmod		: 4;
    unsigned TEMP_SENSOR_P_bmod		: 4;
    unsigned TEMP_SENSOR_P_tmod		: 4;
    unsigned TEMP_SENSOR_ENABLEb	: 1;
    unsigned TEMP_SENSOR_DELAY_SEL	: 3;
    unsigned TEMP_SENSOR_IRQ_EN		: 1;
    unsigned TEMP_SENSOR_ISO		: 1;
    unsigned TEMP_SENSOR_RESETn		: 1;
  };
  uint32_t as_int;
} snsv6_r14_t;
#define SNSv6_R14_DEFAULT {0x0, 0xF, 0x0, 0xF, 0x1, 0x5, 1, 1, 0}
_Static_assert(sizeof(snsv6_r14_t) == 4, "Punned Structure Size");

//Register 15
typedef union snsv6_r15{
  struct{
    unsigned TEMP_SENSOR_SEL_CT 	: 3;
    unsigned TEMP_SENSOR_AMP_BIAS	: 3;
    unsigned TEMP_SENSOR_R_REF		: 8;
    unsigned TEMP_SENSOR_R_PTAT		: 8;
  };
  uint32_t as_int;
} snsv6_r15_t;
#define SNSv6_R15_DEFAULT {0x5, 0x2, 0x7F, 0x8F}
_Static_assert(sizeof(snsv6_r15_t) == 4, "Punned Structure Size");

//Register 16
//Read Only


//Register 17
typedef union snsv6_r17{
  struct{ // LSB first
    unsigned CDC_LDO_CDC_LDO_ENB        : 1;
    unsigned CDC_LDO_CDC_LDO_DLY_ENB    : 1;
    unsigned CDC_LDO_CDC_VREF_MUX_SEL   : 2;
    unsigned CDC_LDO_CDC_VREF_SEL       : 6;
    unsigned CDC_LDO_CDC_CURRENT_2X     : 1;
    unsigned ADC_LDO_ADC_LDO_ENB        : 1;
    unsigned ADC_LDO_ADC_LDO_DLY_ENB    : 1;
    unsigned ADC_LDO_ADC_VREF_MUX_SEL   : 2;
    unsigned ADC_LDO_ADC_VREF_SEL       : 6;
    unsigned ADC_LDO_ADC_CURRENT_2X     : 1;
  };
  uint32_t as_int;
} snsv6_r17_t;
#define SNSv6_R17_DEFAULT {{0x1, 0x1, 0x2, 0x04, 0x1, 0x1, 1, 0x2, 0x04, 1}}
_Static_assert(sizeof(snsv6_r17_t) == 4, "Punned Structure Size");

//Register 18
typedef union snsv6_r18{
  struct{
    unsigned SAR_ADC_ADC_DOUT_ISO       : 1;
    unsigned SAR_ADC_OSC_ENB            : 1;
    unsigned SAR_ADC_START_CONV         : 1;
    unsigned SAR_ADC_BYPASS_NUMBER      : 4;
    unsigned SAR_ADC_SINGLE_CONV        : 1;
    unsigned SAR_ADC_SIGNAL_SEL         : 2;
    unsigned SAR_ADC_EXT_SIGNAL_SEL     : 2;
    unsigned SAR_ADC_OSC_SEL            : 3;
    unsigned SAR_ADC_OSC_DIV            : 2;
    unsigned SAR_ADC_IRQ_EN             : 1;
    unsigned SAR_ADC_DONE               : 1;
  };
  uint32_t as_int;
} snsv6_r18_t;
#define SNSv6_R18_DEFAULT {{0x1, 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x6, 0x1, 0x1}}
_Static_assert(sizeof(snsv6_r18_t) == 4, "Punned Structure Size");
  
//Register 19
typedef union snsv6_r19{
  struct{
    unsigned SAR_ADC_COMP_CAP_L         : 5;
    unsigned SAR_ADC_COMP_CAP_R         : 5;
    unsigned SAR_ADC_FAST_DIV_EN        : 1;
  };
  uint32_t as_int;
} snsv6_r19_t;
#define SNSv6_R19_DEFAULT {{0x1F, 0x1F, 0x0}}
_Static_assert(sizeof(snsv6_r19_t) == 4, "Punned Structure Size");

//Register 20
//Read Only


//Register 21
typedef union snsv6_r21{
  struct{
    unsigned LC_CLK_DIV		: 2;
    unsigned LC_CLK_RING    : 2;
  };
  uint32_t as_int;
} snsv6_r21_t;
#define SNSv6_R21_DEFAULT {{0x1, 0x2}}
_Static_assert(sizeof(snsv6_r21_t) == 4, "Punned Structure Size");

//Register 22
typedef union snsv6_r22{
  struct{
    unsigned SAR_ADC_IRQ_PACKET	: 24;
  };
  uint32_t as_int;
} snsv6_r22_t;
#define SNSv6_R22_DEFAULT {0x1600}
_Static_assert(sizeof(snsv6_r22_t) == 4, "Punned Structure Size");

//Register 23
typedef union snsv6_r23{
  struct{
    unsigned CDC_IRQ_PACKET	: 24;
  };
  uint32_t as_int;
} snsv6_r23_t;
#define SNSv6_R23_DEFAULT {0x1500}
_Static_assert(sizeof(snsv6_r23_t) == 4, "Punned Structure Size");

//Register 24
typedef union snsv6_r24{
  struct{
    unsigned TEMP_SENSOR_IRQ_PACKET	: 24;
  };
  uint32_t as_int;
} snsv6_r24_t;
#define SNSv6_R24_DEFAULT {0x1400}
_Static_assert(sizeof(snsv6_r24_t) == 4, "Punned Structure Size");


// Declare the structs
extern volatile snsv6_r0_t snsv6_r0;
extern volatile snsv6_r1_t snsv6_r1;
extern volatile snsv6_r2_t snsv6_r2;
extern volatile snsv6_r14_t snsv6_r14;
extern volatile snsv6_r15_t snsv6_r15;
extern volatile snsv6_r17_t snsv6_r17;
extern volatile snsv6_r18_t snsv6_r18;
extern volatile snsv6_r19_t snsv6_r19;
extern volatile snsv6_r21_t snsv6_r21;
extern volatile snsv6_r22_t snsv6_r22;
extern volatile snsv6_r23_t snsv6_r23;
extern volatile snsv6_r24_t snsv6_r24;
