#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 315
static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402fd010, const void *arg_0x402fd1a8, size_t arg_0x402fd340);



extern void *memset(void *arg_0x40300350, int arg_0x403004a8, size_t arg_0x40300640);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x40312730, const void *arg_0x403128c8);
# 25 "/home/user/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/user/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 239 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 211 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/home/user/tinyos-main/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/home/user/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/home/user/tinyos-main/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/home/user/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/home/user/tinyos-main/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/home/user/tinyos-main/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 33 "result.h"
struct public_key_msg {

  uint8_t len;
  uint8_t x[24];
  uint8_t y[24];
  uint8_t id;
} __attribute((packed)) ;
typedef struct public_key_msg public_key_msg;

struct private_key_msg {

  uint8_t len;
  uint8_t d[24];
  uint8_t id;
} __attribute((packed)) ;
typedef struct private_key_msg private_key_msg;

struct time_msg {

  uint32_t t;
  uint8_t type;
  uint8_t pass;
  uint8_t id;
} __attribute((packed)) ;
typedef struct time_msg time_msg;

struct packet_msg {

  uint8_t c_len;
  uint8_t content[52];
  uint8_t r_len;
  uint8_t r[24];
  uint8_t s[24];
} __attribute((packed)) ;
typedef struct packet_msg packet_msg;

struct ecdh_key_msg {

  uint8_t len;
  uint8_t k[24];
  uint8_t id;
} __attribute((packed)) ;
typedef struct ecdh_key_msg ecdh_key_msg;

struct uint8_msg {

  uint8_t len;
  uint8_t content[101];
} __attribute((packed)) ;
typedef struct uint8_msg uint8_msg;

enum __nesc_unnamed4299 {
  AM_PUBLIC_KEY_MSG = 11, 
  AM_PRIVATE_KEY_MSG = 12, 
  AM_TIME_MSG = 13, 
  AM_PACKET_MSG = 14, 
  AM_ECDH_KEY_MSG = 15, 
  AM_UINT8_MSG = 16
};
# 101 "NN.h"
typedef uint8_t NN_DIGIT;
typedef uint16_t NN_DOUBLE_DIGIT;


typedef uint8_t NN_UINT;
typedef uint16_t NN_UINT2;
#line 209
struct Barrett {
  NN_DIGIT mu[2 * (160 / 8 + 1) + 1];
  NN_UINT mu_len;
  NN_UINT km;
};
typedef struct Barrett Barrett;
# 71 "ECC.h"
struct Curve {


  NN_DIGIT a[160 / 8 + 1];
  NN_DIGIT b[160 / 8 + 1];


  bool a_minus3;


  bool a_zero;

  bool a_one;
};
typedef struct Curve Curve;

struct Point {


  NN_DIGIT x[160 / 8 + 1];
  NN_DIGIT y[160 / 8 + 1];
};
typedef struct Point Point;

struct ZCoordinate {

  NN_DIGIT z[160 / 8 + 1];
};
typedef struct ZCoordinate ZCoordinate;


struct Params {


  NN_DIGIT p[160 / 8 + 1];


  NN_DIGIT omega[160 / 8 + 1];


  Curve E;


  Point G;


  NN_DIGIT r[160 / 8 + 1];
};



typedef struct Params Params;


struct TPParams {


  NN_DIGIT p[160 / 8 + 1];


  Curve E;


  NN_DIGIT m[160 / 8 + 1];


  NN_DIGIT c[160 / 8 + 1];


  Point P;
};
typedef struct TPParams TPParams;


struct PointSlope {
  bool dbl;
  Point P;
  NN_DIGIT slope[160 / 8 + 1];
  struct PointSlope *next;
};
typedef struct PointSlope PointSlope;
# 38 "sha1.h"
enum __nesc_unnamed4300 {

  shaSuccess = 0, 
  shaNull, 
  shaInputTooLong, 
  shaStateError
};
#line 65
#line 52
typedef struct SHA1Context {

  uint32_t Intermediate_Hash[20 / 4];

  uint32_t Length_Low;
  uint32_t Length_High;


  uint16_t Message_Block_Index;
  uint8_t Message_Block[64];

  int Computed;
  int Corrupted;
} SHA1Context;
# 43 "/home/user/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4301 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/home/user/tinyos-main/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4302 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 102 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4303 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/home/user/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4304 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4305 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/user/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4306 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4307 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4308 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 60 "/home/user/tinyos-main/tos/platforms/micaz/platform_message.h"
#line 57
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 62
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 66
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/user/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[102];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 50 "/home/user/tinyos-main/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/home/user/tinyos-main/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4310 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4311 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4312 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4313 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4314 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4315 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4316 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMilli testECDSAM__LocalTime__precision_tag;
typedef TMilli testECDSAM__myTimer__precision_tag;
enum HilTimerMilliC____nesc_unnamed4317 {
  HilTimerMilliC__TIMER_COUNT = 1U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403cdc40);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403cdc40);
# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/home/user/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/user/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void testECDSAM__PubKeyMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
static void testECDSAM__Boot__booted(void );
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void testECDSAM__SerialControl__startDone(error_t error);
#line 138
static void testECDSAM__SerialControl__stopDone(error_t error);
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void testECDSAM__myTimer__fired(void );
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void testECDSAM__PacketMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 110
static void testECDSAM__PriKeyMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 110
static void testECDSAM__TimeMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/home/user/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
# 52 "/home/user/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomLfsrC__Random__rand16(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomLfsrC__Init__init(void );
# 65 "NN.nc"
static NN_DIGIT NNM__NN__LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 81
static void NNM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 79
static void NNM__NN__ModBarrett(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);
#line 123
static unsigned int NNM__NN__Digits(NN_DIGIT *a, NN_UINT digits);
#line 85
static void NNM__NN__ModSub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 113
static int NNM__NN__Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 75
static void NNM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf);
#line 49
static void NNM__NN__AssignDigit(NN_DIGIT *a, NN_DIGIT b, NN_UINT digits);
#line 77
static void NNM__NN__BarrettSetBuf(Barrett *pbuf);
#line 89
static void NNM__NN__ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);



static void NNM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 47
static void NNM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 41
static void NNM__NN__Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len);

static void NNM__NN__Encode(unsigned char *a, NN_UINT digits, NN_DIGIT *b, NN_UINT len);
#line 73
static void NNM__NN__Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);
#line 57
static NN_DIGIT NNM__NN__Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 83
static void NNM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 117
static int NNM__NN__One(NN_DIGIT *a, NN_UINT digits);

static unsigned int NNM__NN__Bits(NN_DIGIT *a, NN_UINT digits);





static int NNM__NN__Equal(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 99
static void NNM__NN__ModSqrOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 51
static void NNM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits);
#line 67
static NN_DIGIT NNM__NN__RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 103
static void NNM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 115
static int NNM__NN__Zero(NN_DIGIT *a, NN_UINT digits);
# 100 "ECC.nc"
static Params *ECCM__ECC__get_param(void );
#line 40
static void ECCM__ECC__gen_private_key(NN_DIGIT *PrivateKey);
#line 38
static void ECCM__ECC__init(void );
#line 69
static void ECCM__ECC__add_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2);
#line 54
static void ECCM__ECC__BarrettSetBuf(void );
#line 72
static void ECCM__ECC__dbl_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1);
#line 88
static void ECCM__ECC__win_mul_base(Point *P0, NN_DIGIT *n);
#line 58
static void ECCM__ECC__add(Point *P0, Point *P1, Point *P2);
#line 42
static void ECCM__ECC__gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey);
#line 80
static void ECCM__ECC__win_precompute(Point *baseP, Point *pointArray);
# 37 "CurveParam.nc"
static void secp160r1__CurveParam__get_param(Params *para);

static NN_UINT secp160r1__CurveParam__omega_mul(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *omega, NN_UINT digits);
# 41 "ECDSA.nc"
static void ECDSAM__ECDSA__sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d);
#line 38
static error_t ECDSAM__ECDSA__init(Point *pKey);





static uint8_t ECDSAM__ECDSA__verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q);
# 37 "SHA1.nc"
static int SHA1M__SHA1__reset(SHA1Context *context);
static int SHA1M__SHA1__update(SHA1Context *context, const uint8_t *message_array, uint32_t length);
static int SHA1M__SHA1__digest(SHA1Context *context, uint8_t Message_Digest[20]);
# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/home/user/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 61 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40af7568);
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40af7568, 
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 61 "/home/user/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40b2be68, 
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(
# 47 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40b2be68, 
# 103 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 106 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40b398e0, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40bfb760, 
# 67 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40bfb760, 
# 96 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40bfb120, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0, 
# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0);
# 23 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0, 
# 23 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/user/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 50 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 47 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm128Timer3P__Capture__size_type HplAtm128Timer3P__Capture__get(void );
#line 60
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 104 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/home/user/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/home/user/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 33 "/home/user/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4318 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/user/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403cdc40);
# 76 "/home/user/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4319 {

  SchedulerBasicP__NUM_TASKS = 8U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/home/user/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/home/user/tinyos-main/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t testECDSAM__PubKeyMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t testECDSAM__SerialControl__start(void );
# 61 "/home/user/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t testECDSAM__LocalTime__get(void );
# 40 "ECC.nc"
static void testECDSAM__ECC__gen_private_key(NN_DIGIT *PrivateKey);
#line 38
static void testECDSAM__ECC__init(void );



static void testECDSAM__ECC__gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey);
# 52 "/home/user/tinyos-main/tos/interfaces/Random.nc"
static uint16_t testECDSAM__Random__rand16(void );
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void testECDSAM__myTimer__startOneShot(uint32_t dt);
# 43 "NN.nc"
static void testECDSAM__NN__Encode(unsigned char *a, NN_UINT digits, NN_DIGIT *b, NN_UINT len);
# 67 "/home/user/tinyos-main/tos/interfaces/Leds.nc"
static void testECDSAM__Leds__led0Toggle(void );
# 41 "ECDSA.nc"
static void testECDSAM__ECDSA__sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d);
#line 38
static error_t testECDSAM__ECDSA__init(Point *pKey);





static uint8_t testECDSAM__ECDSA__verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q);
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t testECDSAM__PacketMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 80
static error_t testECDSAM__PriKeyMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 80
static error_t testECDSAM__TimeMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 28 "testECDSAM.nc"
message_t testECDSAM__report;
Point testECDSAM__PublicKey;
NN_DIGIT testECDSAM__PrivateKey[160 / 8 + 1];
uint8_t testECDSAM__message[52];
NN_DIGIT testECDSAM__r[160 / 8 + 1];
NN_DIGIT testECDSAM__s[160 / 8 + 1];
uint8_t testECDSAM__type;
uint32_t testECDSAM__t;
uint8_t testECDSAM__pass;
uint16_t testECDSAM__round_index;

static void testECDSAM__init_data(void );
static inline void testECDSAM__gen_PrivateKey(void );
static inline void testECDSAM__ecc_init(void );
static inline void testECDSAM__gen_PublicKey(void );
static inline void testECDSAM__ecdsa_init(void );
static inline void testECDSAM__sign(void );
static inline void testECDSAM__verify(void );


static void testECDSAM__init_data(void );
#line 85
static inline void testECDSAM__gen_PrivateKey(void );
#line 150
static inline void testECDSAM__ecc_init(void );
#line 171
static inline void testECDSAM__gen_PublicKey(void );
#line 194
static inline void testECDSAM__ecdsa_init(void );
#line 216
static inline void testECDSAM__sign(void );
#line 239
static inline void testECDSAM__verify(void );
#line 262
static inline void testECDSAM__Boot__booted(void );



static inline void testECDSAM__SerialControl__startDone(error_t e);



static inline void testECDSAM__SerialControl__stopDone(error_t e);


static inline void testECDSAM__myTimer__fired(void );




static inline void testECDSAM__PubKeyMsg__sendDone(message_t *sent, error_t error);










static inline void testECDSAM__PriKeyMsg__sendDone(message_t *sent, error_t success);



static inline void testECDSAM__PacketMsg__sendDone(message_t *sent, error_t success);










static inline void testECDSAM__TimeMsg__sendDone(message_t *sent, error_t success);
# 42 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/home/user/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
# 68 "/home/user/tinyos-main/tos/system/RandomLfsrC.nc"
uint16_t RandomLfsrC__shiftReg;
uint16_t RandomLfsrC__initSeed;
uint16_t RandomLfsrC__mask;


static inline error_t RandomLfsrC__Init__init(void );









static uint16_t RandomLfsrC__Random__rand16(void );
# 39 "CurveParam.nc"
static NN_UINT NNM__CurveParam__omega_mul(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *omega, NN_UINT digits);
# 86 "NNM.nc"
static inline void NNM__NN_DigitDiv(NN_DIGIT *a, NN_DIGIT b[2], NN_DIGIT c);
static void NNM__NN_Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len);
static void NNM__NN_Encode(unsigned char *a, NN_UINT len, NN_DIGIT *b, NN_UINT digits);
static inline void NNM__NN_Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
static void NNM__NN_AssignZero(NN_DIGIT *a, NN_UINT digits);

static NN_DIGIT NNM__NN_Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
static NN_DIGIT NNM__NN_Sub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
static void NNM__NN_Mult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
static NN_DIGIT NNM__NN_LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
static NN_DIGIT NNM__NN_RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
static inline void NNM__NN_Div(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT cDigits, NN_DIGIT *d, NN_UINT dDigits);
static inline void NNM__NN_Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);
static void NNM__NN_ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);



static int NNM__NN_Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
static int NNM__NN_Zero(NN_DIGIT *a, NN_UINT digits);
static unsigned int NNM__NN_Bits(NN_DIGIT *a, NN_UINT digits);
static unsigned int NNM__NN_Digits(NN_DIGIT *a, NN_UINT digits);

inline static NN_DIGIT NNM__NN_SubDigitMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT c, NN_DIGIT *d, NN_UINT digits);
static unsigned int NNM__NN_DigitBits(NN_DIGIT a);

Barrett *NNM__pBarrett;
#line 164
static inline void NNM__NN_DigitDiv(NN_DIGIT *a, NN_DIGIT b[2], NN_DIGIT c);
#line 180
static void NNM__NN_Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len);
#line 204
static void NNM__NN_Encode(unsigned char *a, NN_UINT len, NN_DIGIT *b, NN_UINT digits);
#line 224
static inline void NNM__NN_Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);








static void NNM__NN_AssignZero(NN_DIGIT *a, NN_UINT digits);
#line 263
static NN_DIGIT NNM__NN_Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits) __attribute((noinline)) ;
#line 357
static NN_DIGIT NNM__NN_Sub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits) __attribute((noinline)) ;
#line 454
static void NNM__NN_Mult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits) __attribute((noinline)) ;
#line 1758
static void NNM__NN_Sqr(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits) __attribute((noinline)) ;
#line 2740
static NN_DIGIT NNM__NN_LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 2766
static NN_DIGIT NNM__NN_RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 2795
static inline void NNM__NN_Div(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT cDigits, NN_DIGIT *d, NN_UINT dDigits);
#line 2846
static inline void NNM__NN_Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);
#line 2860
static void NNM__NN_ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 3022
static void NNM__NN_ModDivOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 3108
static int NNM__NN_Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 3127
static int NNM__NN_Zero(NN_DIGIT *a, NN_UINT digits);
#line 3142
static unsigned int NNM__NN_Bits(NN_DIGIT *a, NN_UINT digits);
#line 3154
static unsigned int NNM__NN_Digits(NN_DIGIT *a, NN_UINT digits);
#line 3267
inline static NN_DIGIT NNM__NN_SubDigitMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT c, NN_DIGIT *d, NN_UINT digits);
#line 3364
static unsigned int NNM__NN_DigitBits(NN_DIGIT a);
#line 3376
static inline void NNM__NN__Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len);








static inline void NNM__NN__Encode(unsigned char *a, NN_UINT digits, NN_DIGIT *b, NN_UINT len);






static inline void NNM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);




static inline void NNM__NN__AssignDigit(NN_DIGIT *a, NN_DIGIT b, NN_UINT digits);





static inline void NNM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits);
#line 3415
static inline NN_DIGIT NNM__NN__Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 3439
static inline NN_DIGIT NNM__NN__LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);





static inline NN_DIGIT NNM__NN__RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 3457
static inline void NNM__NN__Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);







static void NNM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf);
#line 3495
static inline void NNM__NN__BarrettSetBuf(Barrett *pbuf);








static void NNM__NN__ModBarrett(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);
#line 3535
static inline void NNM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);








static void NNM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 3562
static void NNM__NN__ModSub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 3581
static inline void NNM__NN__ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 3607
static void NNM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 3683
static void NNM__NN__ModSqrOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 3731
static inline void NNM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 3879
static inline int NNM__NN__Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);





static inline int NNM__NN__Zero(NN_DIGIT *a, NN_UINT digits);





static inline int NNM__NN__One(NN_DIGIT *a, NN_UINT digits);
#line 3905
static inline unsigned int NNM__NN__Bits(NN_DIGIT *a, NN_UINT digits);
#line 3917
static inline unsigned int NNM__NN__Digits(NN_DIGIT *a, NN_UINT digits);
#line 3929
static inline int NNM__NN__Equal(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
# 37 "CurveParam.nc"
static void ECCM__CurveParam__get_param(Params *para);
# 52 "/home/user/tinyos-main/tos/interfaces/Random.nc"
static uint16_t ECCM__Random__rand16(void );
# 65 "NN.nc"
static NN_DIGIT ECCM__NN__LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 81
static void ECCM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 123
static unsigned int ECCM__NN__Digits(NN_DIGIT *a, NN_UINT digits);
#line 85
static void ECCM__NN__ModSub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 75
static void ECCM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf);
#line 49
static void ECCM__NN__AssignDigit(NN_DIGIT *a, NN_DIGIT b, NN_UINT digits);
#line 77
static void ECCM__NN__BarrettSetBuf(Barrett *pbuf);
#line 93
static void ECCM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 47
static void ECCM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);









static NN_DIGIT ECCM__NN__Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 83
static void ECCM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 119
static unsigned int ECCM__NN__Bits(NN_DIGIT *a, NN_UINT digits);





static int ECCM__NN__Equal(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 99
static void ECCM__NN__ModSqrOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 51
static void ECCM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits);
#line 67
static NN_DIGIT ECCM__NN__RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits);
#line 103
static void ECCM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 115
static int ECCM__NN__Zero(NN_DIGIT *a, NN_UINT digits);
# 42 "ECCM.nc"
Params ECCM__param;


Barrett ECCM__Bbuf;





Point ECCM__pBaseArray[(1 << 4) - 1];

NN_DIGIT ECCM__mask[8 / 4];



static inline void ECCM__c_add_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2);
static void ECCM__c_add_mix(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2);
static void ECCM__c_dbl_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1);









static void ECCM__p_clear(Point *P0);






static void ECCM__p_copy(Point *P0, Point *P1);
#line 94
static inline bool ECCM__p_equal(Point *P1, Point *P2);








static bool ECCM__Z_is_one(NN_DIGIT *Z);
#line 117
static void ECCM__c_add(Point *P0, Point *P1, Point *P2);
#line 148
static void ECCM__c_add_mix(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2);
#line 226
static inline void ECCM__c_add_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2);
#line 358
static void ECCM__c_dbl_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1);
#line 455
static inline void ECCM__c_m_dbl_projective(Point *P0, NN_DIGIT *Z0, uint8_t m);
#line 586
static void ECCM__ECC__init(void );
#line 607
static inline void ECCM__ECC__BarrettSetBuf(void );
#line 699
static inline void ECCM__ECC__add(Point *P0, Point *P1, Point *P2);
#line 781
static inline void ECCM__ECC__win_precompute(Point *baseP, Point *pointArray);
#line 804
static void ECCM__win_mul(Point *P0, NN_DIGIT *n, Point *pointArray);
#line 898
static inline void ECCM__ECC__win_mul_base(Point *P0, NN_DIGIT *n);
#line 977
static inline Params *ECCM__ECC__get_param(void );




static inline void ECCM__ECC__add_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2);



static inline void ECCM__ECC__dbl_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1);







static void ECCM__ECC__gen_private_key(NN_DIGIT *PrivateKey);
#line 1034
static inline void ECCM__ECC__gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey);
# 41 "secp160r1.nc"
static inline void secp160r1__CurveParam__get_param(Params *para);
#line 337
static NN_UINT secp160r1__CurveParam__omega_mul(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *omega, NN_UINT digits) __attribute((noinline)) ;
# 37 "SHA1.nc"
static int ECDSAM__SHA1__reset(SHA1Context *context);
static int ECDSAM__SHA1__update(SHA1Context *context, const uint8_t *message_array, uint32_t length);
static int ECDSAM__SHA1__digest(SHA1Context *context, uint8_t Message_Digest[20]);
# 100 "ECC.nc"
static Params *ECDSAM__ECC__get_param(void );
#line 40
static void ECDSAM__ECC__gen_private_key(NN_DIGIT *PrivateKey);
#line 38
static void ECDSAM__ECC__init(void );
#line 69
static void ECDSAM__ECC__add_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2);
#line 54
static void ECDSAM__ECC__BarrettSetBuf(void );
#line 72
static void ECDSAM__ECC__dbl_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1);
#line 88
static void ECDSAM__ECC__win_mul_base(Point *P0, NN_DIGIT *n);
#line 58
static void ECDSAM__ECC__add(Point *P0, Point *P1, Point *P2);
# 81 "NN.nc"
static void ECDSAM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 123
static unsigned int ECDSAM__NN__Digits(NN_DIGIT *a, NN_UINT digits);
#line 113
static int ECDSAM__NN__Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 75
static void ECDSAM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf);

static void ECDSAM__NN__BarrettSetBuf(Barrett *pbuf);
#line 89
static void ECDSAM__NN__ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);



static void ECDSAM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits);
#line 47
static void ECDSAM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits);
#line 41
static void ECDSAM__NN__Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len);
#line 73
static void ECDSAM__NN__Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits);









static void ECDSAM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits);
#line 117
static int ECDSAM__NN__One(NN_DIGIT *a, NN_UINT digits);

static unsigned int ECDSAM__NN__Bits(NN_DIGIT *a, NN_UINT digits);
#line 51
static void ECDSAM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits);
#line 103
static void ECDSAM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits);
#line 115
static int ECDSAM__NN__Zero(NN_DIGIT *a, NN_UINT digits);
# 65 "ECDSAM.nc"
Params *ECDSAM__param;


Barrett ECDSAM__Bbuf;



Point ECDSAM__pqBaseArray[(1 << 2 * 2) - 1];
NN_DIGIT ECDSAM__s_mask[8 / 2];
#line 150
static inline void ECDSAM__shamir_init(Point *pKey, Point *pointArray);
#line 197
static inline void ECDSAM__shamir(Point *P0, NN_DIGIT *u1, NN_DIGIT *u2);
#line 289
static error_t ECDSAM__ECDSA__init(Point *pKey) __attribute((noinline)) ;
#line 309
static void ECDSAM__ECDSA__sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d) __attribute((noinline)) ;
#line 386
static uint8_t ECDSAM__ECDSA__verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q) __attribute((noinline)) ;
# 56 "SHA1M.nc"
static inline void SHA1M__SHA1PadMessage(SHA1Context *arg_0x409f0158);
static void SHA1M__SHA1ProcessMessageBlock(SHA1Context *arg_0x409f06e8);
#line 74
static int SHA1M__SHA1__reset(SHA1Context *context);
#line 115
static int SHA1M__SHA1__digest(SHA1Context *context, uint8_t Message_Digest[20]);
#line 167
static int SHA1M__SHA1__update(SHA1Context *context, const uint8_t *message_array, uint32_t length);
#line 230
static void SHA1M__SHA1ProcessMessageBlock(SHA1Context *context);
#line 386
static inline void SHA1M__SHA1PadMessage(SHA1Context *context);
# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4320 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 59 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 85
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 103
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 131
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 187
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 207
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4321 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40af7568);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4322 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4323 {

  VirtualizeTimerC__0__NUM_TIMERS = 1, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4324 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 64 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void );
# 53 "/home/user/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );




static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40b2be68, 
# 103 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40b398e0, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/home/user/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/user/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4325 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4326 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4327 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4328 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4329 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4330 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4331 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4332 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4333 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4334 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4335 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4336 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40bfb760, 
# 96 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40bfb120, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0, 
# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0);
# 23 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c232a0, 
# 23 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4337 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4338 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4339 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4340 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4341 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4342 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/home/user/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 96 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 116
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 173
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 274
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__fired(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 59 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 136
static inline void HplAtm128Timer3P__Timer__start(void );
#line 191
static inline uint16_t HplAtm128Timer3P__Capture__get(void );





static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 104 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 65 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/user/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4343 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 51 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 92 "/home/user/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/home/user/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 88 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 88
{
#line 88
  union __nesc_unnamed4344 {
#line 88
    Atm128TimerCtrlCapture_t f;
#line 88
    uint16_t t;
  } 
#line 88
  c = { .f = x };

#line 88
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 95
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 78
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 78
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 68
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 68
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 70
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 136 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 136
{
#line 136
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 78 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer3P__Timer__start();
#line 78
}
#line 78
# 59 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 59
{
#line 59
  * (volatile uint16_t *)0x88 = t;
}

# 67 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/home/user/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/home/user/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/home/user/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/user/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 57 "/home/user/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 42
}
#line 42
# 84 "/home/user/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/home/user/tinyos-main/tos/interfaces/Leds.nc"
inline static void testECDSAM__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t testECDSAM__TimeMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(AM_TIME_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 64 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/home/user/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void )
{
  return /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get();
}

# 61 "/home/user/tinyos-main/tos/lib/timer/LocalTime.nc"
inline static uint32_t testECDSAM__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 44 "ECDSA.nc"
inline static uint8_t testECDSAM__ECDSA__verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = ECDSAM__ECDSA__verify(msg, len, r, s, Q);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 239 "testECDSAM.nc"
static inline void testECDSAM__verify(void )
#line 239
{
  uint32_t time_a;
#line 240
  uint32_t time_b;
  time_msg *pTime;

  testECDSAM__type = 4;

  time_a = testECDSAM__LocalTime__get();

  testECDSAM__pass = testECDSAM__ECDSA__verify(testECDSAM__message, 52, testECDSAM__r, testECDSAM__s, &testECDSAM__PublicKey);

  time_b = testECDSAM__LocalTime__get();

  testECDSAM__t = time_b - time_a;

  pTime = (time_msg *)testECDSAM__report.data;
  pTime->type = 4;
  pTime->t = testECDSAM__t;
  pTime->pass = testECDSAM__pass;
  testECDSAM__TimeMsg__send(1, &testECDSAM__report, sizeof(time_msg ));
  if (testECDSAM__pass == 1) {
    testECDSAM__Leds__led0Toggle();
    }
}

# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t testECDSAM__PacketMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(AM_PACKET_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 3385 "NNM.nc"
static inline void NNM__NN__Encode(unsigned char *a, NN_UINT digits, NN_DIGIT *b, NN_UINT len)

{
  NNM__NN_Encode(a, digits, b, len);
}

# 43 "NN.nc"
inline static void testECDSAM__NN__Encode(unsigned char *a, NN_UINT digits, NN_DIGIT *b, NN_UINT len){
#line 43
  NNM__NN__Encode(a, digits, b, len);
#line 43
}
#line 43
# 41 "ECDSA.nc"
inline static void testECDSAM__ECDSA__sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d){
#line 41
  ECDSAM__ECDSA__sign(msg, len, r, s, d);
#line 41
}
#line 41
# 216 "testECDSAM.nc"
static inline void testECDSAM__sign(void )
#line 216
{
  uint32_t time_a;
#line 217
  uint32_t time_b;
  packet_msg *pPacket;

  testECDSAM__type = 3;

  time_a = testECDSAM__LocalTime__get();

  testECDSAM__ECDSA__sign(testECDSAM__message, 52, testECDSAM__r, testECDSAM__s, testECDSAM__PrivateKey);
#line 224
  ;

  time_b = testECDSAM__LocalTime__get();

  testECDSAM__t = time_b - time_a;

  pPacket = (packet_msg *)testECDSAM__report.data;
  pPacket->c_len = 52;
  memcpy(pPacket->content, testECDSAM__message, 52);
  pPacket->r_len = 160 / 8 * (8 / 8);
  testECDSAM__NN__Encode(pPacket->r, 160 / 8 * (8 / 8), testECDSAM__r, 160 / 8);
  testECDSAM__NN__Encode(pPacket->s, 160 / 8 * (8 / 8), testECDSAM__s, 160 / 8);
  testECDSAM__PacketMsg__send(1, &testECDSAM__report, sizeof(packet_msg ));
}

# 38 "ECDSA.nc"
inline static error_t testECDSAM__ECDSA__init(Point *pKey){
#line 38
  unsigned char __nesc_result;
#line 38

#line 38
  __nesc_result = ECDSAM__ECDSA__init(pKey);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 194 "testECDSAM.nc"
static inline void testECDSAM__ecdsa_init(void )
#line 194
{
  uint32_t time_a;
#line 195
  uint32_t time_b;
  time_msg *pTime;

  testECDSAM__type = 2;

  time_a = testECDSAM__LocalTime__get();

  testECDSAM__ECDSA__init(&testECDSAM__PublicKey);

  time_b = testECDSAM__LocalTime__get();

  testECDSAM__t = time_b - time_a;

  pTime = (time_msg *)testECDSAM__report.data;
  pTime->type = 2;
  pTime->t = testECDSAM__t;
  pTime->pass = 0;
  testECDSAM__TimeMsg__send(1, &testECDSAM__report, sizeof(time_msg ));
}

# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t testECDSAM__PubKeyMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(AM_PUBLIC_KEY_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 1034 "ECCM.nc"
static inline void ECCM__ECC__gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey)
#line 1034
{



  ECCM__win_mul(PublicKey, PrivateKey, ECCM__pBaseArray);
}

# 42 "ECC.nc"
inline static void testECDSAM__ECC__gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey){
#line 42
  ECCM__ECC__gen_public_key(PublicKey, PrivateKey);
#line 42
}
#line 42
# 171 "testECDSAM.nc"
static inline void testECDSAM__gen_PublicKey(void )
#line 171
{
  uint32_t time_a;
#line 172
  uint32_t time_b;
  public_key_msg *pPublicKey;

  testECDSAM__type = 1;

  time_a = testECDSAM__LocalTime__get();


  testECDSAM__ECC__gen_public_key(&testECDSAM__PublicKey, testECDSAM__PrivateKey);

  time_b = testECDSAM__LocalTime__get();

  testECDSAM__t = time_b - time_a;

  pPublicKey = (public_key_msg *)testECDSAM__report.data;
  pPublicKey->len = 160 / 8 * (8 / 8);
  testECDSAM__NN__Encode(pPublicKey->x, 160 / 8 * (8 / 8), testECDSAM__PublicKey.x, 160 / 8);
  testECDSAM__NN__Encode(pPublicKey->y, 160 / 8 * (8 / 8), testECDSAM__PublicKey.y, 160 / 8);
  testECDSAM__PubKeyMsg__send(1, &testECDSAM__report, sizeof(public_key_msg ));
}

#line 304
static inline void testECDSAM__TimeMsg__sendDone(message_t *sent, error_t success)
#line 304
{

  if (testECDSAM__type == 0) {

      testECDSAM__gen_PublicKey();
    }
  else {
#line 309
    if (testECDSAM__type == 1) {

        testECDSAM__ecdsa_init();
      }
    else {
#line 312
      if (testECDSAM__type == 2) {

          testECDSAM__sign();
        }
      else {
#line 315
        if (testECDSAM__type == 3) {

            testECDSAM__verify();
          }
        else {
#line 318
          if (testECDSAM__type == 4) {
              if (testECDSAM__round_index < 10) {
                  testECDSAM__init_data();
                  testECDSAM__round_index++;
                }
            }
          }
        }
      }
    }
}

#line 293
static inline void testECDSAM__PacketMsg__sendDone(message_t *sent, error_t success)
#line 293
{
  time_msg *pTime;

  testECDSAM__type = 3;
  pTime = (time_msg *)testECDSAM__report.data;
  pTime->type = 3;
  pTime->t = testECDSAM__t;
  pTime->pass = 0;
  testECDSAM__TimeMsg__send(1, &testECDSAM__report, sizeof(time_msg ));
}

# 38 "ECC.nc"
inline static void testECDSAM__ECC__init(void ){
#line 38
  ECCM__ECC__init();
#line 38
}
#line 38
# 150 "testECDSAM.nc"
static inline void testECDSAM__ecc_init(void )
#line 150
{
  uint32_t time_a;
#line 151
  uint32_t time_b;
  time_msg *pTime;

  testECDSAM__type = 0;

  time_a = testECDSAM__LocalTime__get();

  testECDSAM__ECC__init();

  time_b = testECDSAM__LocalTime__get();

  testECDSAM__t = time_b - time_a;

  pTime = (time_msg *)testECDSAM__report.data;
  pTime->type = 0;
  pTime->t = testECDSAM__t;
  pTime->pass = 0;
  testECDSAM__TimeMsg__send(1, &testECDSAM__report, sizeof(time_msg ));
}

#line 289
static inline void testECDSAM__PriKeyMsg__sendDone(message_t *sent, error_t success)
#line 289
{
  testECDSAM__ecc_init();
}

#line 278
static inline void testECDSAM__PubKeyMsg__sendDone(message_t *sent, error_t error)
#line 278
{
  time_msg *pTime;

  testECDSAM__type = 1;
  pTime = (time_msg *)testECDSAM__report.data;
  pTime->type = 1;
  pTime->t = testECDSAM__t;
  pTime->pass = 0;
  testECDSAM__TimeMsg__send(1, &testECDSAM__report, sizeof(time_msg ));
}

# 105 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result)
#line 105
{
  return;
}

# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40b2be68, message_t * msg, error_t error){
#line 110
  switch (arg_0x40b2be68) {
#line 110
    case AM_PUBLIC_KEY_MSG:
#line 110
      testECDSAM__PubKeyMsg__sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_PRIVATE_KEY_MSG:
#line 110
      testECDSAM__PriKeyMsg__sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_TIME_MSG:
#line 110
      testECDSAM__TimeMsg__sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_PACKET_MSG:
#line 110
      testECDSAM__PacketMsg__sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x40b2be68, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 101 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40bfb760, message_t * msg, error_t error){
#line 100
  switch (arg_0x40bfb760) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40bfb760, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 60 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 102;
}

# 538 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40c232a0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40c232a0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40c232a0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40c232a0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40c232a0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40c232a0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 103 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 41 "secp160r1.nc"
static inline void secp160r1__CurveParam__get_param(Params *para)
{




  para->p[20] = 0x00;
  para->p[19] = 0xFF;
  para->p[18] = 0xFF;
  para->p[17] = 0xFF;
  para->p[16] = 0xFF;
  para->p[15] = 0xFF;
  para->p[14] = 0xFF;
  para->p[13] = 0xFF;
  para->p[12] = 0xFF;
  para->p[11] = 0xFF;
  para->p[10] = 0xFF;
  para->p[9] = 0xFF;
  para->p[8] = 0xFF;
  para->p[7] = 0xFF;
  para->p[6] = 0xFF;
  para->p[5] = 0xFF;
  para->p[4] = 0xFF;
  para->p[3] = 0x7F;
  para->p[2] = 0xFF;
  para->p[1] = 0xFF;
  para->p[0] = 0xFF;

  memset(para->omega, 0, 160 / 8 + 1);
  para->omega[0] = 0x01;
  para->omega[3] = 0x80;



  para->E.a[20] = 0x00;
  para->E.a[19] = 0xFF;
  para->E.a[18] = 0xFF;
  para->E.a[17] = 0xFF;
  para->E.a[16] = 0xFF;
  para->E.a[15] = 0xFF;
  para->E.a[14] = 0xFF;
  para->E.a[13] = 0xFF;
  para->E.a[12] = 0xFF;
  para->E.a[11] = 0xFF;
  para->E.a[10] = 0xFF;
  para->E.a[9] = 0xFF;
  para->E.a[8] = 0xFF;
  para->E.a[7] = 0xFF;
  para->E.a[6] = 0xFF;
  para->E.a[5] = 0xFF;
  para->E.a[4] = 0xFF;
  para->E.a[3] = 0x7F;
  para->E.a[2] = 0xFF;
  para->E.a[1] = 0xFF;
  para->E.a[0] = 0xFC;

  para->E.a_minus3 = TRUE;
  para->E.a_zero = FALSE;


  para->E.b[20] = 0x00;
  para->E.b[19] = 0x1C;
  para->E.b[18] = 0x97;
  para->E.b[17] = 0xBE;
  para->E.b[16] = 0xFC;
  para->E.b[15] = 0x54;
  para->E.b[14] = 0xBD;
  para->E.b[13] = 0x7A;
  para->E.b[12] = 0x8B;
  para->E.b[11] = 0x65;
  para->E.b[10] = 0xAC;
  para->E.b[9] = 0xF8;
  para->E.b[8] = 0x9F;
  para->E.b[7] = 0x81;
  para->E.b[6] = 0xD4;
  para->E.b[5] = 0xD4;
  para->E.b[4] = 0xAD;
  para->E.b[3] = 0xC5;
  para->E.b[2] = 0x65;
  para->E.b[1] = 0xFA;
  para->E.b[0] = 0x45;


  para->G.x[20] = 0x00;
  para->G.x[19] = 0x4A;
  para->G.x[18] = 0x96;
  para->G.x[17] = 0xB5;
  para->G.x[16] = 0x68;
  para->G.x[15] = 0x8E;
  para->G.x[14] = 0xF5;
  para->G.x[13] = 0x73;
  para->G.x[12] = 0x28;
  para->G.x[11] = 0x46;
  para->G.x[10] = 0x64;
  para->G.x[9] = 0x69;
  para->G.x[8] = 0x89;
  para->G.x[7] = 0x68;
  para->G.x[6] = 0xC3;
  para->G.x[5] = 0x8B;
  para->G.x[4] = 0xB9;
  para->G.x[3] = 0x13;
  para->G.x[2] = 0xCB;
  para->G.x[1] = 0xFC;
  para->G.x[0] = 0x82;

  para->G.y[20] = 0x00;
  para->G.y[19] = 0x23;
  para->G.y[18] = 0xA6;
  para->G.y[17] = 0x28;
  para->G.y[16] = 0x55;
  para->G.y[15] = 0x31;
  para->G.y[14] = 0x68;
  para->G.y[13] = 0x94;
  para->G.y[12] = 0x7D;
  para->G.y[11] = 0x59;
  para->G.y[10] = 0xDC;
  para->G.y[9] = 0xC9;
  para->G.y[8] = 0x12;
  para->G.y[7] = 0x04;
  para->G.y[6] = 0x23;
  para->G.y[5] = 0x51;
  para->G.y[4] = 0x37;
  para->G.y[3] = 0x7A;
  para->G.y[2] = 0xC5;
  para->G.y[1] = 0xFB;
  para->G.y[0] = 0x32;


  para->r[20] = 0x01;
  para->r[19] = 0x0;
  para->r[18] = 0x0;
  para->r[17] = 0x0;
  para->r[16] = 0x0;
  para->r[15] = 0x0;
  para->r[14] = 0x0;
  para->r[13] = 0x0;
  para->r[12] = 0x0;
  para->r[11] = 0x0;
  para->r[10] = 0x01;
  para->r[9] = 0xF4;
  para->r[8] = 0xC8;
  para->r[7] = 0xF9;
  para->r[6] = 0x27;
  para->r[5] = 0xAE;
  para->r[4] = 0xD3;
  para->r[3] = 0xCA;
  para->r[2] = 0x75;
  para->r[1] = 0x22;
  para->r[0] = 0x57;
}

# 37 "CurveParam.nc"
inline static void ECCM__CurveParam__get_param(Params *para){
#line 37
  secp160r1__CurveParam__get_param(para);
#line 37
}
#line 37
# 75 "NN.nc"
inline static void ECCM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf){
#line 75
  NNM__NN__ModBarrettInit(c, cDigits, pbuf);
#line 75
}
#line 75
# 3267 "NNM.nc"
inline static NN_DIGIT NNM__NN_SubDigitMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT c, NN_DIGIT *d, NN_UINT digits)
{


  NN_DIGIT borrow;
  unsigned int i;

  if (c == 0) {
    return 0;
    }
#line 3276
  borrow = 0;
  for (i = 0; i < digits; i++) {
       __asm volatile ("push r1\n\t"
      "sub %2, %1\n\t"
      "mov %0, %2\n\t"
      "ldi %1, 0\n\t"
      "rol %1\n\t"
      "mul %3, %4\n\t"
      "sub %0, r0\n\t"
      "adc %1, r1\n\t"
      "pop r1\n\t" : 
      "+r"(a[i]), "+r"(borrow) : 
      "r"(b[i]), "r"(c), "r"(d[i]));}


  return borrow;
}

#line 164
static inline void NNM__NN_DigitDiv(NN_DIGIT *a, NN_DIGIT b[2], NN_DIGIT c)
{
  NN_DOUBLE_DIGIT t;

  t = ((NN_DOUBLE_DIGIT )b[1] << 8) ^ (NN_DOUBLE_DIGIT )b[0];

  *a = t / c;
}

#line 2795
static inline void NNM__NN_Div(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT cDigits, NN_DIGIT *d, NN_UINT dDigits)
{
  NN_DIGIT ai;
#line 2797
  NN_DIGIT cc[2 * (160 / 8 + 1) + 2];
#line 2797
  NN_DIGIT dd[160 / 8 + 1 + 1];
#line 2797
  NN_DIGIT t;

  int i;
  int ddDigits;
#line 2800
  int shift;

  ddDigits = NNM__NN_Digits(d, dDigits);
  if (ddDigits == 0) {
    return;
    }


  shift = 8 - NNM__NN_DigitBits(d[ddDigits - 1]);
  NNM__NN_AssignZero(cc, ddDigits);
  cc[cDigits] = NNM__NN_LShift(cc, c, shift, cDigits);
  NNM__NN_LShift(dd, d, shift, ddDigits);
  t = dd[ddDigits - 1];

  if (a != (void *)0) {
    NNM__NN_AssignZero(a, cDigits);
    }
  for (i = cDigits - ddDigits; i >= 0; i--) {


      if (t == 0xff) {
        ai = cc[i + ddDigits];
        }
      else {
#line 2823
        NNM__NN_DigitDiv(&ai, &cc[i + ddDigits - 1], t + 1);
        }
#line 2824
      cc[i + ddDigits] -= NNM__NN_SubDigitMult(&cc[i], &cc[i], ai, dd, ddDigits);



      while (cc[i + ddDigits] || NNM__NN_Cmp(&cc[i], dd, ddDigits) >= 0) {
          ai++;
          cc[i + ddDigits] -= NNM__NN_Sub(&cc[i], &cc[i], dd, ddDigits);
        }
      if (a != (void *)0) {
        a[i] = ai;
        }
    }

  NNM__NN_AssignZero(b, dDigits);
  NNM__NN_RShift(b, cc, shift, ddDigits);
}

#line 224
static inline void NNM__NN_Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{
  memcpy(a, b, digits * (8 / 8));
}

#line 3392
static inline void NNM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{
  NNM__NN_Assign(a, b, digits);
}

# 47 "NN.nc"
inline static void ECCM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits){
#line 47
  NNM__NN__Assign(a, b, digits);
#line 47
}
#line 47
# 781 "ECCM.nc"
static inline void ECCM__ECC__win_precompute(Point *baseP, Point *pointArray)
{
  uint8_t i;

  ECCM__NN__Assign(pointArray[0].x, baseP->x, 160 / 8 + 1);
  ECCM__NN__Assign(pointArray[0].y, baseP->y, 160 / 8 + 1);

  for (i = 1; i < (1 << 4) - 1; i++) {



      ECCM__c_add(&pointArray[i], &pointArray[i - 1], baseP);
    }


  for (i = 0; i < 8 / 4; i++) 
    ECCM__mask[i] = 0xf << 4 * i;
}

# 3397 "NNM.nc"
static inline void NNM__NN__AssignDigit(NN_DIGIT *a, NN_DIGIT b, NN_UINT digits)
{
  NNM__NN_AssignZero(a, digits);
  a[0] = b;
}

# 49 "NN.nc"
inline static void ECCM__NN__AssignDigit(NN_DIGIT *a, NN_DIGIT b, NN_UINT digits){
#line 49
  NNM__NN__AssignDigit(a, b, digits);
#line 49
}
#line 49
# 39 "CurveParam.nc"
inline static NN_UINT NNM__CurveParam__omega_mul(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *omega, NN_UINT digits){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = secp160r1__CurveParam__omega_mul(a, b, omega, digits);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 3731 "NNM.nc"
static inline void NNM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{



  NN_DIGIT y[160 / 8 + 1];

#line 3737
  {
#line 3737
    NNM__NN_AssignZero(y, digits);
#line 3737
    y[0] = 1;
  }
#line 3737
  ;
  NNM__NN_ModDivOpt(a, y, b, c, digits);
}

# 103 "NN.nc"
inline static void ECCM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits){
#line 103
  NNM__NN__ModInv(a, b, c, digits);
#line 103
}
#line 103
# 3917 "NNM.nc"
static inline unsigned int NNM__NN__Digits(NN_DIGIT *a, NN_UINT digits)
{
  return NNM__NN_Digits(a, digits);
}

# 123 "NN.nc"
inline static unsigned int ECCM__NN__Digits(NN_DIGIT *a, NN_UINT digits){
#line 123
  unsigned int __nesc_result;
#line 123

#line 123
  __nesc_result = NNM__NN__Digits(a, digits);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 3445 "NNM.nc"
static inline NN_DIGIT NNM__NN__RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits)
{
  return NNM__NN_RShift(a, b, c, digits);
}

# 67 "NN.nc"
inline static NN_DIGIT ECCM__NN__RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = NNM__NN__RShift(a, b, c, digits);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 3415 "NNM.nc"
static inline NN_DIGIT NNM__NN__Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{
  return NNM__NN_Add(a, b, c, digits);
}

# 57 "NN.nc"
inline static NN_DIGIT ECCM__NN__Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = NNM__NN__Add(a, b, c, digits);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 85
inline static void ECCM__NN__ModSub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits){
#line 85
  NNM__NN__ModSub(a, b, c, d, digits);
#line 85
}
#line 85








inline static void ECCM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits){
#line 93
  NNM__NN__ModMultOpt(a, b, c, d, omega, digits);
#line 93
}
#line 93
# 3535 "NNM.nc"
static inline void NNM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{
  while (NNM__NN_Cmp(b, c, digits) > 0) 
    NNM__NN_Sub(b, b, c, digits);
}

# 81 "NN.nc"
inline static void ECCM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits){
#line 81
  NNM__NN__ModSmall(b, c, digits);
#line 81
}
#line 81
# 3439 "NNM.nc"
static inline NN_DIGIT NNM__NN__LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits)
{
  return NNM__NN_LShift(a, b, c, digits);
}

# 65 "NN.nc"
inline static NN_DIGIT ECCM__NN__LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = NNM__NN__LShift(a, b, c, digits);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
#line 99
inline static void ECCM__NN__ModSqrOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits){
#line 99
  NNM__NN__ModSqrOpt(a, b, d, omega, digits);
#line 99
}
#line 99
#line 83
inline static void ECCM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits){
#line 83
  NNM__NN__ModAdd(a, b, c, d, digits);
#line 83
}
#line 83
# 3885 "NNM.nc"
static inline int NNM__NN__Zero(NN_DIGIT *a, NN_UINT digits)
{
  return NNM__NN_Zero(a, digits);
}

# 115 "NN.nc"
inline static int ECCM__NN__Zero(NN_DIGIT *a, NN_UINT digits){
#line 115
  int __nesc_result;
#line 115

#line 115
  __nesc_result = NNM__NN__Zero(a, digits);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 455 "ECCM.nc"
static inline void ECCM__c_m_dbl_projective(Point *P0, NN_DIGIT *Z0, uint8_t m)
#line 455
{
  uint8_t i;
  NN_DIGIT W[160 / 8 + 1];
  NN_DIGIT A[160 / 8 + 1];
  NN_DIGIT B[160 / 8 + 1];
  NN_DIGIT t1[160 / 8 + 1];
  NN_DIGIT y2[160 / 8 + 1];

  if (ECCM__NN__Zero(Z0, 160 / 8 + 1)) {
      return;
    }


  ECCM__NN__LShift(P0->y, P0->y, 1, 160 / 8 + 1);
  ECCM__NN__ModSmall(P0->y, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModSqrOpt(W, Z0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSqrOpt(W, W, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  for (i = 0; i < m; i++) {
      if (ECCM__param.E.a_minus3) {

          ECCM__NN__ModSqrOpt(A, P0->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
          ECCM__NN__ModSub(A, A, W, ECCM__param.p, 160 / 8 + 1);
          ECCM__NN__LShift(t1, A, 1, 160 / 8 + 1);
          ECCM__NN__ModSmall(t1, ECCM__param.p, 160 / 8 + 1);
          ECCM__NN__ModAdd(A, A, t1, ECCM__param.p, 160 / 8 + 1);
        }
      else {
#line 482
        if (ECCM__param.E.a_zero) {

            ECCM__NN__ModSqrOpt(t1, P0->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__LShift(A, t1, 1, 160 / 8 + 1);
            ECCM__NN__ModSmall(A, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModAdd(A, A, t1, ECCM__param.p, 160 / 8 + 1);
          }
        else 
#line 488
          {

            ECCM__NN__ModSqrOpt(t1, P0->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__LShift(A, t1, 1, 160 / 8 + 1);
            ECCM__NN__ModSmall(A, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModAdd(A, A, t1, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModMultOpt(t1, ECCM__param.E.a, W, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__ModAdd(A, A, t1, ECCM__param.p, 160 / 8 + 1);
          }
        }
      ECCM__NN__ModSqrOpt(y2, P0->y, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(B, P0->x, y2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

      ECCM__NN__ModSqrOpt(P0->x, A, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__LShift(t1, B, 1, 160 / 8 + 1);
      ECCM__NN__ModSmall(t1, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModSub(P0->x, P0->x, t1, ECCM__param.p, 160 / 8 + 1);

      ECCM__NN__ModMultOpt(Z0, Z0, P0->y, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModSqrOpt(y2, y2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      if (i < m - 1) {

          ECCM__NN__ModMultOpt(W, W, y2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
        }

      ECCM__NN__LShift(A, A, 1, 160 / 8 + 1);
      ECCM__NN__ModSmall(A, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModSub(B, B, P0->x, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(A, A, B, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModSub(P0->y, A, y2, ECCM__param.p, 160 / 8 + 1);
    }
  if (P0->y[0] % 2 == 1) {
    ECCM__NN__Add(P0->y, P0->y, ECCM__param.p, 160 / 8 + 1);
    }
#line 521
  ECCM__NN__RShift(P0->y, P0->y, 1, 160 / 8 + 1);
}

# 38 "ECC.nc"
inline static void ECDSAM__ECC__init(void ){
#line 38
  ECCM__ECC__init();
#line 38
}
#line 38
# 977 "ECCM.nc"
static inline Params *ECCM__ECC__get_param(void )
#line 977
{
  return &ECCM__param;
}

# 100 "ECC.nc"
inline static Params *ECDSAM__ECC__get_param(void ){
#line 100
  struct Params *__nesc_result;
#line 100

#line 100
  __nesc_result = ECCM__ECC__get_param();
#line 100

#line 100
  return __nesc_result;
#line 100
}
#line 100
# 699 "ECCM.nc"
static inline void ECCM__ECC__add(Point *P0, Point *P1, Point *P2)
{



  ECCM__c_add(P0, P1, P2);
}

# 58 "ECC.nc"
inline static void ECDSAM__ECC__add(Point *P0, Point *P1, Point *P2){
#line 58
  ECCM__ECC__add(P0, P1, P2);
#line 58
}
#line 58
# 47 "NN.nc"
inline static void ECDSAM__NN__Assign(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits){
#line 47
  NNM__NN__Assign(a, b, digits);
#line 47
}
#line 47
# 150 "ECDSAM.nc"
static inline void ECDSAM__shamir_init(Point *pKey, Point *pointArray)
{
  uint16_t i;
  uint16_t j;







  ECDSAM__NN__Assign(pointArray[0].x, pKey->x, 160 / 8 + 1);
  ECDSAM__NN__Assign(pointArray[0].y, pKey->y, 160 / 8 + 1);

  for (i = 1; i < (1 << 2) - 1; i++) {
      ECDSAM__ECC__add(&pointArray[i], &pointArray[i - 1], pKey);
    }
#line 179
  for (i = 0; i < (1 << 2) - 1; i++) {
      for (j = 0; j < (1 << 2) - 1 + 1; j++) {
          if (i == 0 && j == 0) {
              ECDSAM__NN__Assign(pointArray[(1 << 2) - 1].x, ECDSAM__param->G.x, 160 / 8 + 1);
              ECDSAM__NN__Assign(pointArray[(1 << 2) - 1].y, ECDSAM__param->G.y, 160 / 8 + 1);
            }
          else {
#line 184
            if (j == 0) {
                ECDSAM__ECC__add(&pointArray[(1 << 2) - 1 + ((1 << 2) - 1 + 1) * i], &pointArray[(1 << 2) - 1 + ((1 << 2) - 1 + 1) * (i - 1)], & ECDSAM__param->G);
              }
            else 
#line 186
              {
                ECDSAM__ECC__add(&pointArray[(1 << 2) - 1 + ((1 << 2) - 1 + 1) * i + j], &pointArray[(1 << 2) - 1 + ((1 << 2) - 1 + 1) * i], &pointArray[j - 1]);
              }
            }
        }
    }
  for (i = 0; i < 8 / 2; i++) 
    ECDSAM__s_mask[i] = 0x03 << 2 * i;
}

# 75 "NN.nc"
inline static void ECDSAM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf){
#line 75
  NNM__NN__ModBarrettInit(c, cDigits, pbuf);
#line 75
}
#line 75
# 3495 "NNM.nc"
static inline void NNM__NN__BarrettSetBuf(Barrett *pbuf)
#line 3495
{
  NNM__pBarrett = pbuf;
}

# 77 "NN.nc"
inline static void ECDSAM__NN__BarrettSetBuf(Barrett *pbuf){
#line 77
  NNM__NN__BarrettSetBuf(pbuf);
#line 77
}
#line 77
# 40 "ECC.nc"
inline static void ECDSAM__ECC__gen_private_key(NN_DIGIT *PrivateKey){
#line 40
  ECCM__ECC__gen_private_key(PrivateKey);
#line 40
}
#line 40
# 3905 "NNM.nc"
static inline unsigned int NNM__NN__Bits(NN_DIGIT *a, NN_UINT digits)
{
  return NNM__NN_Bits(a, digits);
}

# 119 "NN.nc"
inline static unsigned int ECCM__NN__Bits(NN_DIGIT *a, NN_UINT digits){
#line 119
  unsigned int __nesc_result;
#line 119

#line 119
  __nesc_result = NNM__NN__Bits(a, digits);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 52 "/home/user/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t ECCM__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomLfsrC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 115 "NN.nc"
inline static int ECDSAM__NN__Zero(NN_DIGIT *a, NN_UINT digits){
#line 115
  int __nesc_result;
#line 115

#line 115
  __nesc_result = NNM__NN__Zero(a, digits);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
#line 77
inline static void ECCM__NN__BarrettSetBuf(Barrett *pbuf){
#line 77
  NNM__NN__BarrettSetBuf(pbuf);
#line 77
}
#line 77
# 607 "ECCM.nc"
static inline void ECCM__ECC__BarrettSetBuf(void )
#line 607
{
  ECCM__NN__BarrettSetBuf(&ECCM__Bbuf);
}

# 54 "ECC.nc"
inline static void ECDSAM__ECC__BarrettSetBuf(void ){
#line 54
  ECCM__ECC__BarrettSetBuf();
#line 54
}
#line 54
# 898 "ECCM.nc"
static inline void ECCM__ECC__win_mul_base(Point *P0, NN_DIGIT *n)
{
  ECCM__win_mul(P0, n, ECCM__pBaseArray);
}

# 88 "ECC.nc"
inline static void ECDSAM__ECC__win_mul_base(Point *P0, NN_DIGIT *n){
#line 88
  ECCM__ECC__win_mul_base(P0, n);
#line 88
}
#line 88
# 81 "NN.nc"
inline static void ECDSAM__NN__ModSmall(NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits){
#line 81
  NNM__NN__ModSmall(b, c, digits);
#line 81
}
#line 81
# 37 "SHA1.nc"
inline static int ECDSAM__SHA1__reset(SHA1Context *context){
#line 37
  int __nesc_result;
#line 37

#line 37
  __nesc_result = SHA1M__SHA1__reset(context);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37

inline static int ECDSAM__SHA1__update(SHA1Context *context, const uint8_t *message_array, uint32_t length){
#line 38
  int __nesc_result;
#line 38

#line 38
  __nesc_result = SHA1M__SHA1__update(context, message_array, length);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38

inline static int ECDSAM__SHA1__digest(SHA1Context *context, uint8_t Message_Digest[20]){
#line 39
  int __nesc_result;
#line 39

#line 39
  __nesc_result = SHA1M__SHA1__digest(context, Message_Digest);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 386 "SHA1M.nc"
static inline void SHA1M__SHA1PadMessage(SHA1Context *context)
{






  if (context->Message_Block_Index > 55) {
      context->Message_Block[context->Message_Block_Index++] = 0x80;
      while (context->Message_Block_Index < 64) {
          context->Message_Block[context->Message_Block_Index++] = 0;
        }

      SHA1M__SHA1ProcessMessageBlock(context);

      while (context->Message_Block_Index < 56) {
          context->Message_Block[context->Message_Block_Index++] = 0;
        }
    }
  else 
#line 405
    {
      context->Message_Block[context->Message_Block_Index++] = 0x80;
      while (context->Message_Block_Index < 56) {
          context->Message_Block[context->Message_Block_Index++] = 0;
        }
    }




  context->Message_Block[56] = context->Length_High >> 24;
  context->Message_Block[57] = context->Length_High >> 16;
  context->Message_Block[58] = context->Length_High >> 8;
  context->Message_Block[59] = context->Length_High;
  context->Message_Block[60] = context->Length_Low >> 24;
  context->Message_Block[61] = context->Length_Low >> 16;
  context->Message_Block[62] = context->Length_Low >> 8;
  context->Message_Block[63] = context->Length_Low;

  SHA1M__SHA1ProcessMessageBlock(context);
}

# 3376 "NNM.nc"
static inline void NNM__NN__Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len)
{
  NNM__NN_Decode(a, digits, b, len);
}

# 41 "NN.nc"
inline static void ECDSAM__NN__Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len){
#line 41
  NNM__NN__Decode(a, digits, b, len);
#line 41
}
#line 41
#line 119
inline static unsigned int ECDSAM__NN__Bits(NN_DIGIT *a, NN_UINT digits){
#line 119
  unsigned int __nesc_result;
#line 119

#line 119
  __nesc_result = NNM__NN__Bits(a, digits);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 2846 "NNM.nc"
static inline void NNM__NN_Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits)
{

  NNM__NN__ModBarrett(a, b, bDigits, c, cDigits);
}

#line 3457
static inline void NNM__NN__Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits)
{
  NNM__NN_Mod(a, b, bDigits, c, cDigits);
}

# 73 "NN.nc"
inline static void ECDSAM__NN__Mod(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits){
#line 73
  NNM__NN__Mod(a, b, bDigits, c, cDigits);
#line 73
}
#line 73
# 3581 "NNM.nc"
static inline void NNM__NN__ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits)
{
  NNM__NN_ModMult(a, b, c, d, digits);
}

# 89 "NN.nc"
inline static void ECDSAM__NN__ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits){
#line 89
  NNM__NN__ModMult(a, b, c, d, digits);
#line 89
}
#line 89
#line 83
inline static void ECDSAM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits){
#line 83
  NNM__NN__ModAdd(a, b, c, d, digits);
#line 83
}
#line 83
# 3879 "NNM.nc"
static inline int NNM__NN__Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{
  return NNM__NN_Cmp(a, b, digits);
}

# 113 "NN.nc"
inline static int ECDSAM__NN__Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits){
#line 113
  int __nesc_result;
#line 113

#line 113
  __nesc_result = NNM__NN__Cmp(a, b, digits);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 93
inline static void ECDSAM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits){
#line 93
  NNM__NN__ModMultOpt(a, b, c, d, omega, digits);
#line 93
}
#line 93










inline static void ECDSAM__NN__ModInv(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits){
#line 103
  NNM__NN__ModInv(a, b, c, digits);
#line 103
}
#line 103
# 3891 "NNM.nc"
static inline int NNM__NN__One(NN_DIGIT *a, NN_UINT digits)
{
  uint8_t i;

  for (i = 1; i < digits; i++) 
    if (a[i]) {
      return FALSE;
      }
#line 3898
  if (a[0] == 1) {
    return TRUE;
    }
  return FALSE;
}

# 117 "NN.nc"
inline static int ECDSAM__NN__One(NN_DIGIT *a, NN_UINT digits){
#line 117
  int __nesc_result;
#line 117

#line 117
  __nesc_result = NNM__NN__One(a, digits);
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 3403 "NNM.nc"
static inline void NNM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits)
{
  NNM__NN_AssignZero(a, digits);
}

# 51 "NN.nc"
inline static void ECCM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits){
#line 51
  NNM__NN__AssignZero(a, digits);
#line 51
}
#line 51
# 3929 "NNM.nc"
static inline int NNM__NN__Equal(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{
  return !NNM__NN_Cmp(a, b, digits);
}

# 125 "NN.nc"
inline static int ECCM__NN__Equal(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits){
#line 125
  int __nesc_result;
#line 125

#line 125
  __nesc_result = NNM__NN__Equal(a, b, digits);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 94 "ECCM.nc"
static inline bool ECCM__p_equal(Point *P1, Point *P2)
{
  if (ECCM__NN__Equal(P1->x, P2->x, 160 / 8 + 1)) {
    if (ECCM__NN__Equal(P1->y, P2->y, 160 / 8 + 1)) {
      return TRUE;
      }
    }
#line 99
  return FALSE;
}

#line 226
static inline void ECCM__c_add_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2)
{
  NN_DIGIT n0[160 / 8 + 1];
  NN_DIGIT n1[160 / 8 + 1];
  NN_DIGIT n2[160 / 8 + 1];
  NN_DIGIT n3[160 / 8 + 1];
  NN_DIGIT n4[160 / 8 + 1];
  NN_DIGIT n5[160 / 8 + 1];
  NN_DIGIT n6[160 / 8 + 1];

  if (ECCM__NN__Zero(Z1, 160 / 8 + 1)) 
    {
      ECCM__p_copy(P0, P2);
      ECCM__NN__Assign(Z0, Z2, 160 / 8 + 1);
      return;
    }

  if (ECCM__NN__Zero(Z2, 160 / 8 + 1)) 
    {
      ECCM__p_copy(P0, P1);
      ECCM__NN__Assign(Z0, Z1, 160 / 8 + 1);
      return;
    }


  if (ECCM__p_equal(P1, P2)) 
    {
      ECCM__c_dbl_projective(P0, Z0, P1, Z1);
      return;
    }



  if (ECCM__Z_is_one(Z2)) 
    {

      ECCM__NN__Assign(n1, P1->x, 160 / 8 + 1);
      ECCM__NN__Assign(n2, P1->y, 160 / 8 + 1);
    }
  else 
    {

      ECCM__NN__ModSqrOpt(n0, Z2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(n1, P1->x, n0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

      ECCM__NN__ModMultOpt(n0, n0, Z2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(n2, P1->y, n0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }


  if (ECCM__Z_is_one(Z1)) 
    {

      ECCM__NN__Assign(n3, P2->x, 160 / 8 + 1);
      ECCM__NN__Assign(n4, P2->y, 160 / 8 + 1);
    }
  else 
    {

      ECCM__NN__ModSqrOpt(n0, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(n3, P2->x, n0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

      ECCM__NN__ModMultOpt(n0, n0, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(n4, P2->y, n0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }


  ECCM__NN__ModSub(n5, n1, n3, ECCM__param.p, 160 / 8 + 1);
  ECCM__NN__ModSub(n6, n2, n4, ECCM__param.p, 160 / 8 + 1);

  if (ECCM__NN__Zero(n5, 160 / 8 + 1)) {
    if (ECCM__NN__Zero(n6, 160 / 8 + 1)) 
      {

        ECCM__c_dbl_projective(P0, Z0, P1, Z1);
        return;
      }
    else 
      {

        ECCM__NN__AssignZero(Z0, 160 / 8 + 1);
        return;
      }
    }

  ECCM__NN__ModAdd(n1, n1, n3, ECCM__param.p, 160 / 8 + 1);
  ECCM__NN__ModAdd(n2, n2, n4, ECCM__param.p, 160 / 8 + 1);


  if (ECCM__Z_is_one(Z1) && ECCM__Z_is_one(Z2)) 
    {
      ECCM__NN__Assign(Z0, n5, 160 / 8 + 1);
    }
  else 
    {
      if (ECCM__Z_is_one(Z1)) {
        ECCM__NN__Assign(n0, Z2, 160 / 8 + 1);
        }
      else {
#line 323
        if (ECCM__Z_is_one(Z2)) {
          ECCM__NN__Assign(n0, Z1, 160 / 8 + 1);
          }
        else {
#line 326
          ECCM__NN__ModMultOpt(n0, Z1, Z2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
          }
        }
#line 328
      ECCM__NN__ModMultOpt(Z0, n0, n5, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }


  ECCM__NN__ModSqrOpt(n0, n6, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSqrOpt(n4, n5, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModMultOpt(n3, n1, n4, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSub(P0->x, n0, n3, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__LShift(n0, P0->x, 1, 160 / 8 + 1);
  ECCM__NN__ModSmall(n0, ECCM__param.p, 160 / 8 + 1);
  ECCM__NN__ModSub(n0, n3, n0, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__ModMultOpt(n0, n0, n6, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModMultOpt(n5, n4, n5, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModMultOpt(n1, n2, n5, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSub(n0, n0, n1, ECCM__param.p, 160 / 8 + 1);

  if (n0[0] % 2 == 1) {
    ECCM__NN__Add(n0, n0, ECCM__param.p, 160 / 8 + 1);
    }
  ECCM__NN__RShift(P0->y, n0, 1, 160 / 8 + 1);
}

#line 982
static inline void ECCM__ECC__add_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2)
#line 982
{
  return ECCM__c_add_projective(P0, Z0, P1, Z1, P2, Z2);
}

# 69 "ECC.nc"
inline static void ECDSAM__ECC__add_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2, NN_DIGIT *Z2){
#line 69
  ECCM__ECC__add_proj(P0, Z0, P1, Z1, P2, Z2);
#line 69
}
#line 69
# 986 "ECCM.nc"
static inline void ECCM__ECC__dbl_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1)
#line 986
{
  return ECCM__c_dbl_projective(P0, Z0, P1, Z1);
}

# 72 "ECC.nc"
inline static void ECDSAM__ECC__dbl_proj(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1){
#line 72
  ECCM__ECC__dbl_proj(P0, Z0, P1, Z1);
#line 72
}
#line 72
# 123 "NN.nc"
inline static unsigned int ECDSAM__NN__Digits(NN_DIGIT *a, NN_UINT digits){
#line 123
  unsigned int __nesc_result;
#line 123

#line 123
  __nesc_result = NNM__NN__Digits(a, digits);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
#line 51
inline static void ECDSAM__NN__AssignZero(NN_DIGIT *a, NN_UINT digits){
#line 51
  NNM__NN__AssignZero(a, digits);
#line 51
}
#line 51
# 197 "ECDSAM.nc"
static inline void ECDSAM__shamir(Point *P0, NN_DIGIT *u1, NN_DIGIT *u2)
#line 197
{
#line 229
  int16_t i;
#line 229
  int16_t tmp;
#line 229
  int16_t tmp2;
  int8_t j;
#line 230
  int8_t k;
  NN_DIGIT windex;
  NN_DIGIT Z0[160 / 8 + 1];
  NN_DIGIT Z1[160 / 8 + 1];


  ECDSAM__NN__AssignZero(P0->x, 160 / 8 + 1);
  ECDSAM__NN__AssignZero(P0->y, 160 / 8 + 1);


  ECDSAM__NN__AssignZero(Z0, 160 / 8 + 1);
  ECDSAM__NN__AssignZero(Z1, 160 / 8 + 1);
  Z1[0] = 0x01;

  tmp = ECDSAM__NN__Digits(u1, 160 / 8 + 1);
  tmp2 = ECDSAM__NN__Digits(u2, 160 / 8 + 1);
  if (tmp2 > tmp) {
    tmp = tmp2;
    }
  for (i = tmp - 1; i >= 0; i--) 
    {

      for (j = 8 / 2 - 1; j >= 0; j--) 
        {

          for (k = 0; k < 2; k++) 
            ECDSAM__ECC__dbl_proj(P0, Z0, P0, Z0);

          if (j != 0) {
              windex = ((ECDSAM__s_mask[j] & u1[i]) >> (j - 1) * 2) | ((ECDSAM__s_mask[j] & u2[i]) >> j * 2);
            }
          else 
#line 260
            {
              windex = ((ECDSAM__s_mask[j] & u1[i]) << 2) | (ECDSAM__s_mask[j] & u2[i]);
            }
          if (windex) {
              ECDSAM__ECC__add_proj(P0, Z0, P0, Z0, &ECDSAM__pqBaseArray[windex - 1], Z1);
            }
        }
    }




  if (ECDSAM__NN__One(Z0, 160 / 8 + 1) == FALSE) 
    {
      ECDSAM__NN__ModInv(Z1, Z0, ECDSAM__param->p, 160 / 8 + 1);
      ECDSAM__NN__ModMultOpt(Z0, Z1, Z1, ECDSAM__param->p, ECDSAM__param->omega, 160 / 8 + 1);
      ECDSAM__NN__ModMultOpt(P0->x, P0->x, Z0, ECDSAM__param->p, ECDSAM__param->omega, 160 / 8 + 1);
      ECDSAM__NN__ModMultOpt(Z0, Z0, Z1, ECDSAM__param->p, ECDSAM__param->omega, 160 / 8 + 1);
      ECDSAM__NN__ModMultOpt(P0->y, P0->y, Z0, ECDSAM__param->p, ECDSAM__param->omega, 160 / 8 + 1);
    }
}

# 52 "/home/user/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t testECDSAM__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomLfsrC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t testECDSAM__PriKeyMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(AM_PRIVATE_KEY_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 40 "ECC.nc"
inline static void testECDSAM__ECC__gen_private_key(NN_DIGIT *PrivateKey){
#line 40
  ECCM__ECC__gen_private_key(PrivateKey);
#line 40
}
#line 40
# 85 "testECDSAM.nc"
static inline void testECDSAM__gen_PrivateKey(void )
#line 85
{
  private_key_msg *pPrivateKey;



  testECDSAM__ECC__gen_private_key(testECDSAM__PrivateKey);
#line 144
  pPrivateKey = (private_key_msg *)testECDSAM__report.data;
  pPrivateKey->len = 160 / 8 * (8 / 8);
  testECDSAM__NN__Encode(pPrivateKey->d, 160 / 8 * (8 / 8), testECDSAM__PrivateKey, 160 / 8);
  testECDSAM__PriKeyMsg__send(1, &testECDSAM__report, sizeof(private_key_msg ));
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 212 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40b398e0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40b398e0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40bfb120, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40bfb120) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40bfb120, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/home/user/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40c232a0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40c232a0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40c232a0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 270 "testECDSAM.nc"
static inline void testECDSAM__SerialControl__stopDone(error_t e)
#line 270
{
}

# 138 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  testECDSAM__SerialControl__stopDone(error);
#line 138
}
#line 138
# 120 "/home/user/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/home/user/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 134 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 134
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 122 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 122
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/home/user/tinyos-main/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 222 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}






static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void testECDSAM__myTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 266 "testECDSAM.nc"
static inline void testECDSAM__SerialControl__startDone(error_t e)
#line 266
{
  testECDSAM__myTimer__startOneShot(5000);
}

# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  testECDSAM__SerialControl__startDone(error);
#line 113
}
#line 113
# 151 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 151
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 128 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 128
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 116 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 116
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 156 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 156
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 146 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 146
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/home/user/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 140 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 140
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 103 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 273 "testECDSAM.nc"
static inline void testECDSAM__myTimer__fired(void )
#line 273
{
  testECDSAM__round_index = 1;
  testECDSAM__init_data();
}

# 204 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40af7568){
#line 83
  switch (arg_0x40af7568) {
#line 83
    case 0U:
#line 83
      testECDSAM__myTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40af7568);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 144 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 144
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 59 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 59
{
#line 59
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 215 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 215
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 73 "/home/user/tinyos-main/tos/system/RandomLfsrC.nc"
static inline error_t RandomLfsrC__Init__init(void )
#line 73
{
  /* atomic removed: atomic calls only */
#line 74
  {
    RandomLfsrC__shiftReg = 119 * 119 * (TOS_NODE_ID + 1);
    RandomLfsrC__initSeed = RandomLfsrC__shiftReg;
    RandomLfsrC__mask = 137 * 29 * (TOS_NODE_ID + 1);
  }
  return SUCCESS;
}

# 131 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 85 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 85
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 207 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 207
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 216 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/home/user/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 190 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 190
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 96
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 96
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__Uart0Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomLfsrC__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t testECDSAM__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 262 "testECDSAM.nc"
static inline void testECDSAM__Boot__booted(void )
#line 262
{
  testECDSAM__SerialControl__start();
}

# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  testECDSAM__Boot__booted();
#line 60
}
#line 60
# 164 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/home/user/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/home/user/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/home/user/tinyos-main/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/home/user/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
}

# 76 "/home/user/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 149 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/home/user/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 88 "/home/user/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 141 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 141
{
#line 141
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 230 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 397 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/home/user/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/home/user/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/home/user/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/home/user/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/home/user/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/home/user/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 286 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 286
{
}

# 49 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 285 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 285
{
}

# 47 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 197 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 197
{
}

# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 58
  HplAtm128Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 201 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 201
{
}

# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 58
  HplAtm128Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 205 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 205
{
}

# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 58
  HplAtm128Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 209 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 209
{
}

# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 60
  HplAtm128Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 191 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Capture__get(void )
#line 191
{
#line 191
  return * (volatile uint16_t *)0x80;
}

# 216 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/user/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 60 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
}
#line 70
# 63 "/home/user/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403cdc40){
#line 75
  switch (arg_0x403cdc40) {
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403cdc40);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 68 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 518 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/home/user/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 161 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 586 "ECCM.nc"
static void ECCM__ECC__init(void )

{


  ECCM__CurveParam__get_param(&ECCM__param);


  ECCM__NN__ModBarrettInit(ECCM__param.p, 160 / 8 + 1, &ECCM__Bbuf);




  ECCM__ECC__win_precompute(& ECCM__param.G, ECCM__pBaseArray);
}

# 3465 "NNM.nc"
static void NNM__NN__ModBarrettInit(NN_DIGIT *c, NN_UINT cDigits, Barrett *pbuf)
{
  NN_DIGIT tmp[2 * (160 / 8 + 1) + 1];
#line 3467
  NN_DIGIT residue[160 / 8 + 1];

  NNM__pBarrett = pbuf;
  NNM__pBarrett->km = NNM__NN_Digits(c, cDigits);

  memset(tmp, 0, (2 * (160 / 8 + 1) + 1) * (8 / 8));
  memset(NNM__pBarrett->mu, 0, (2 * (160 / 8 + 1) + 1) * (8 / 8));
  tmp[2 * NNM__pBarrett->km] = 1;

  NNM__NN_Div(NNM__pBarrett->mu, residue, tmp, 2 * NNM__pBarrett->km + 1, c, cDigits);
  NNM__pBarrett->mu_len = NNM__NN_Digits(NNM__pBarrett->mu, 2 * (160 / 8 + 1) + 1);







  while (NNM__pBarrett->mu_len % 5 != 0) 
    NNM__pBarrett->mu_len++;
}

#line 3154
static unsigned int NNM__NN_Digits(NN_DIGIT *a, NN_UINT digits)
{
  int i;

  for (i = digits - 1; i >= 0; i--) 
    if (a[i]) {
      break;
      }
  return i + 1;
}

#line 3364
static unsigned int NNM__NN_DigitBits(NN_DIGIT a)
{
  unsigned int i;

  for (i = 0; i < 8; i++, a >>= 1) 
    if (a == 0) {
      break;
      }
  return i;
}

#line 233
static void NNM__NN_AssignZero(NN_DIGIT *a, NN_UINT digits)
{

  uint8_t i;

  for (i = 0; i < digits; i++) 
    a[i] = 0;
}

#line 2740
static NN_DIGIT NNM__NN_LShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits)
{
  NN_DIGIT bi;
#line 2742
  NN_DIGIT carry;
  NN_UINT i;
#line 2743
  NN_UINT t;

  if (c >= 8) {
    return 0;
    }
  t = 8 - c;

  carry = 0;

  for (i = 0; i < digits; i++) {
      bi = b[i];
      a[i] = (bi << c) | carry;
      carry = c ? bi >> t : 0;
    }

  return carry;
}

#line 3108
static int NNM__NN_Cmp(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{
  int i;

  for (i = digits - 1; i >= 0; i--) {
      if (a[i] > b[i]) {
        return 1;
        }
      else {
#line 3116
        if (a[i] < b[i]) {
          return -1;
          }
        }
    }
#line 3120
  return 0;
}

#line 357
static __attribute((noinline)) NN_DIGIT NNM__NN_Sub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{




  NN_DIGIT borrow;

#line 364
  if (digits == 0) {
    return 0;
    }
   __asm volatile ("dec %4 \n\t"
  "ld r0, Y+ \n\t"
  "ld r2, Z+ \n\t"
  "sub r0, r2 \n\t"
  "st X+, r0 \n\t"
  "SUB_LOOP1: tst %4 \n\t"
  "breq SUB_LOOP1_EXIT \n\t"
  "dec %4 \n\t"
  "ld r0, Y+ \n\t"
  "ld r2, Z+ \n\t"
  "sbc r0, r2 \n\t"
  "st X+, r0 \n\t"
  "jmp SUB_LOOP1 \n\t"
  "SUB_LOOP1_EXIT: clr %0 \n\t"
  "rol %0 \n\t" : 
  "=a"(borrow) : 
  "x"(a), "y"(b), "z"(c), "r"(digits) : 
  "r0", "r2");


  return borrow;
}

#line 2766
static NN_DIGIT NNM__NN_RShift(NN_DIGIT *a, NN_DIGIT *b, NN_UINT c, NN_UINT digits)
{
  NN_DIGIT bi;
#line 2768
  NN_DIGIT carry;
  int i;
  NN_UINT t;

  if (c >= 8) {
    return 0;
    }
  t = 8 - c;

  carry = 0;

  for (i = digits - 1; i >= 0; i--) {
      bi = b[i];
      a[i] = (bi >> c) | carry;
      carry = c ? bi << t : 0;
    }

  return carry;
}

# 117 "ECCM.nc"
static void ECCM__c_add(Point *P0, Point *P1, Point *P2)
{
  NN_DIGIT Z0[160 / 8 + 1];
  NN_DIGIT Z1[160 / 8 + 1];
  NN_DIGIT Z2[160 / 8 + 1];

  ECCM__p_clear(P0);
  ECCM__NN__AssignZero(Z0, 160 / 8 + 1);
  ECCM__NN__AssignZero(Z1, 160 / 8 + 1);
  ECCM__NN__AssignZero(Z2, 160 / 8 + 1);
  Z1[0] = 0x01;
  Z2[0] = 0x01;


  ECCM__c_add_mix(P0, Z0, P1, Z1, P2);




  if (!ECCM__Z_is_one(Z0)) 
    {
      ECCM__NN__ModInv(Z1, Z0, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(Z0, Z1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(P0->x, P0->x, Z0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(Z0, Z0, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(P0->y, P0->y, Z0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }
}

#line 69
static void ECCM__p_clear(Point *P0)
{
  ECCM__NN__AssignZero(P0->x, 160 / 8 + 1);
  ECCM__NN__AssignZero(P0->y, 160 / 8 + 1);
}

#line 148
static void ECCM__c_add_mix(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1, Point *P2)
{
  NN_DIGIT t1[160 / 8 + 1];
  NN_DIGIT t2[160 / 8 + 1];
  NN_DIGIT t3[160 / 8 + 1];
  NN_DIGIT t4[160 / 8 + 1];
  NN_DIGIT Z2[160 / 8 + 1];


  if (ECCM__NN__Zero(P2->x, 160 / 8 + 1)) {
      if (ECCM__NN__Zero(P2->y, 160 / 8 + 1)) {
          ECCM__p_copy(P0, P1);
          ECCM__NN__Assign(Z0, Z1, 160 / 8 + 1);
          return;
        }
    }


  if (ECCM__NN__Zero(Z1, 160 / 8 + 1)) {
      ECCM__p_copy(P0, P2);
      ECCM__NN__AssignDigit(Z0, 1, 160 / 8 + 1);
      return;
    }

  ECCM__NN__ModSqrOpt(t1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t2, t1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t1, t1, P2->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t2, t2, P2->y, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModSub(t1, t1, P1->x, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModSub(t2, t2, P1->y, ECCM__param.p, 160 / 8 + 1);

  if (ECCM__NN__Zero(t1, 160 / 8 + 1)) {
      if (ECCM__NN__Zero(t2, 160 / 8 + 1)) {
          ECCM__NN__AssignDigit(Z2, 1, 160 / 8 + 1);
          ECCM__c_dbl_projective(P0, Z0, P2, Z2);
          return;
        }
      else 
#line 189
        {
          ECCM__NN__AssignDigit(Z0, 0, 160 / 8 + 1);
          return;
        }
    }

  ECCM__NN__ModMultOpt(Z0, Z1, t1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModSqrOpt(t3, t1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t4, t3, t1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t3, t3, P1->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__LShift(t1, t3, 1, 160 / 8 + 1);
  ECCM__NN__ModSmall(t1, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModSqrOpt(P0->x, t2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModSub(P0->x, P0->x, t1, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModSub(P0->x, P0->x, t4, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModSub(t3, t3, P0->x, ECCM__param.p, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t3, t3, t2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModMultOpt(t4, t4, P1->y, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);

  ECCM__NN__ModSub(P0->y, t3, t4, ECCM__param.p, 160 / 8 + 1);

  return;
}

# 3127 "NNM.nc"
static int NNM__NN_Zero(NN_DIGIT *a, NN_UINT digits)
{
  NN_UINT i;

  for (i = 0; i < digits; i++) 
    if (a[i]) {
      return 0;
      }
  return 1;
}

# 76 "ECCM.nc"
static void ECCM__p_copy(Point *P0, Point *P1)
{
  ECCM__NN__Assign(P0->x, P1->x, 160 / 8 + 1);
  ECCM__NN__Assign(P0->y, P1->y, 160 / 8 + 1);
}

# 3683 "NNM.nc"
static void NNM__NN__ModSqrOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits)
{

  NN_DIGIT t1[2 * (160 / 8 + 1)];
  NN_DIGIT t2[2 * (160 / 8 + 1)];
  NN_DIGIT *pt1;
  NN_UINT len_t1;
#line 3689
  NN_UINT len_t2;

  t1[2 * (160 / 8 + 1) - 1] = 0;
  t1[2 * (160 / 8 + 1) - 2] = 0;
  t2[2 * (160 / 8 + 1) - 1] = 0;
  t2[2 * (160 / 8 + 1) - 2] = 0;

  NNM__NN_Sqr(t1, b, 160 / 8);

  pt1 = &t1[160 / 8];
  len_t2 = 2 * (160 / 8);

  while (!NNM__NN_Zero(pt1, 160 / 8)) {
      memset(t2, 0, len_t2 * (8 / 8));
      len_t2 -= 160 / 8;
      len_t1 = len_t2;
      len_t2 = NNM__CurveParam__omega_mul(t2, pt1, omega, len_t2);
      memset(pt1, 0, len_t1 * (8 / 8));
      NNM__NN_Add(t1, t2, t1, (160 / 8 < len_t2 ? len_t2 : 160 / 8) + 1);
    }

  while (NNM__NN_Cmp(t1, d, digits) > 0) 
    NNM__NN_Sub(t1, t1, d, digits);
  NNM__NN_Assign(a, t1, digits);
}

#line 1758
static __attribute((noinline)) void NNM__NN_Sqr(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits)
{



  uint8_t n_d;

  n_d = digits / 4;









   __asm volatile (
  "push r1 \n\t"
  "push r28 \n\t"
  "push r29 \n\t"
  "clr r2 \n\t"
  "clr r3 \n\t"
  "clr r4 \n\t"
  "clr r5 \n\t"
  "clr r6 \n\t"
  "clr r7 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "clr r19 \n\t"
  "ldi r25, 4 \n\t"
  "dec %2 \n\t"
  "ldi r16, 0 \n\t"
  "SQR_LOOP1: ldi r17, 0 \n\t"
  "mul r16, r25 \n\t"
  "add r0, r25 \n\t"
  "movw r26, %A1 \n\t"
  "add r26, r0 \n\t"
  "adc r27, r1 \n\t"
  "movw r28, %A1 \n\t"
  "SQR_LOOP2: mov r0, r16 \n\t"
  "sub r0, r17 \n\t"
  "cp r0, r17 \n\t"
  "breq JMP_EQ_1 \n\t"
  "brlo JMP_SQR_LOOP2_EXIT \n\t"
  "jmp SQR_LOOP2_1 \n\t"
  "JMP_EQ_1: jmp EQ_1 \n\t"
  "JMP_SQR_LOOP2_EXIT: jmp SQR_LOOP2_EXIT \n\t"
  "SQR_LOOP2_1: ld r14, -X \n\t"
  "ld r13, -X \n\t"
  "ld r12, -X \n\t"
  "ld r11, -X \n\t"
  "ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "adc r4, r24 \n\t"
  "brcc SQR_T01 \n\t"
  "adc r5, r19 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T01: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc SQR_T02 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T02: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T03 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T03: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T04 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T04: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc SQR_T11 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T11: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T12 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T12: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T13 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T13: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T14 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T14: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T21 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T21: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T22 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T22: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T23 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T23: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T24: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T31 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T31: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T32 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T32: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T33: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "adc r10, r24 \n\t"
  "inc r17 \n\t"
  "jmp SQR_LOOP2 \n\t"
  "EQ_1: ld r14, -X \n\t"
  "ld r13, -X \n\t"
  "ld r12, -X \n\t"
  "ld r11, -X \n\t"
  "ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "adc r4, r19 \n\t"
  "brcc EQ_SQR_T01 \n\t"
  "adc r5, r19 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T01: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc EQ_SQR_T02 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T02: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc EQ_SQR_T03 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T03: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc EQ_SQR_T04 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T04: ld r15, Y+ \n\t"
  "mul r12, r15 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r19 \n\t"
  "brcc EQ_SQR_T12 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T12: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc EQ_SQR_T13 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T13: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc EQ_SQR_T14 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T14: ld r15, Y+ \n\t"
  "mul r13, r15 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "brcc EQ_SQR_T23 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T23: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "ld r15, Y+ \n\t"
  "mul r14, r15 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "adc r10, r19 \n\t"
  "SQR_LOOP2_EXIT: st Z+, r2 \n\t"
  "st Z+, r3 \n\t"
  "st Z+, r4 \n\t"
  "st Z+, r5 \n\t"
  "movw r2, r6 \n\t"
  "movw r4, r8 \n\t"
  "mov r6, r10 \n\t"
  "clr r7 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "cp r16, %2 \n\t"
  "breq SQR_LOOP1_EXIT \n\t"
  "inc r16 \n\t"
  "jmp SQR_LOOP1 \n\t"
  "SQR_LOOP1_EXIT: inc r16 \n\t"
  "SQR_LOOP3: mov r17, r16 \n\t"
  "sub r17, %2 \n\t"
  "mul r25, %2 \n\t"
  "add r0, r25 \n\t"
  "movw r26, %A1 \n\t"
  "add r26, r0 \n\t"
  "adc r27, r1 \n\t"
  "mul r17, r25 \n\t"
  "movw r28, %A1 \n\t"
  "add r28, r0 \n\t"
  "adc r29, r1 \n\t"
  "SQR_LOOP4: mov r0, r16 \n\t"
  "sub r0, r17 \n\t"
  "cp r0, r17 \n\t"
  "breq JMP_EQ_2 \n\t"
  "brlo JMP_SQR_LOOP4_EXIT \n\t"
  "jmp SQR_LOOP4_1 \n\t"
  "JMP_EQ_2: jmp EQ_2 \n\t"
  "JMP_SQR_LOOP4_EXIT: jmp SQR_LOOP4_EXIT \n\t"
  "SQR_LOOP4_1: ld r14, -X \n\t"
  "ld r13, -X \n\t"
  "ld r12, -X \n\t"
  "ld r11, -X \n\t"
  "ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "adc r4, r24 \n\t"
  "brcc SQR_T41 \n\t"
  "adc r5, r19 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T41: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc SQR_T42 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T42: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T43 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T43: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T44 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T44: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc SQR_T51 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T51: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T52 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T52: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T53 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T53: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T54 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T54: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc SQR_T61 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T61: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T62 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T62: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T63 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T63: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T64: ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc SQR_T71 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T71: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc SQR_T72 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T72: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "SQR_T73: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "adc r10, r24 \n\t"
  "inc r17 \n\t"
  "jmp SQR_LOOP4 \n\t"
  "EQ_2: ld r14, -X \n\t"
  "ld r13, -X \n\t"
  "ld r12, -X \n\t"
  "ld r11, -X \n\t"
  "ld r15, Y+ \n\t"
  "mul r11, r15 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "adc r4, r19 \n\t"
  "brcc EQ_SQR_T41 \n\t"
  "adc r5, r19 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T41: mul r12, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "adc r5, r24 \n\t"
  "brcc EQ_SQR_T42 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T42: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r24 \n\t"
  "brcc EQ_SQR_T43 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T43: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc EQ_SQR_T44 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T44: ld r15, Y+ \n\t"
  "mul r12, r15 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "adc r6, r19 \n\t"
  "brcc EQ_SQR_T52 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T52: mul r13, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "adc r7, r24 \n\t"
  "brcc EQ_SQR_T53 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T53: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "adc r8, r24 \n\t"
  "brcc EQ_SQR_T54 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T54: ld r15, Y+ \n\t"
  "mul r13, r15 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "brcc EQ_SQR_T63 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "EQ_SQR_T63: mul r14, r15 \n\t"
  "clr r24 \n\t"
  "lsl r0 \n\t"
  "rol r1 \n\t"
  "rol r24 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "adc r9, r24 \n\t"
  "adc r10, r19 \n\t"
  "ld r15, Y+ \n\t"
  "mul r14, r15 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "adc r10, r19 \n\t"
  "SQR_LOOP4_EXIT: st Z+, r2 \n\t"
  "st Z+, r3 \n\t"
  "st Z+, r4 \n\t"
  "st Z+, r5 \n\t"
  "movw r2, r6 \n\t"
  "movw r4, r8 \n\t"
  "mov r6, r10 \n\t"
  "clr r7 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "mov r0, %2 \n\t"
  "lsl r0 \n\t"
  "cp r16, r0 \n\t"
  "breq SQR_LOOP3_EXIT \n\t"
  "inc r16 \n\t"
  "jmp SQR_LOOP3 \n\t"
  "SQR_LOOP3_EXIT: st Z+, r2 \n\t"
  "st Z+, r3 \n\t"
  "st Z+, r4 \n\t"
  "st Z+, r5 \n\t"
  "pop r29 \n\t"
  "pop r28 \n\t"
  "pop r1 \n\t" :  : 


  "z"(a), "a"(b), "r"(n_d) : 
  "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r19", "r24", "r25", "r26", "r27", "r28", "r29");}

# 337 "secp160r1.nc"
static __attribute((noinline)) NN_UINT secp160r1__CurveParam__omega_mul(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *omega, NN_UINT digits)
{



  uint8_t n_d;

#line 343
  if (digits % 4 == 0) {
    n_d = digits / 4;
    }
  else {
#line 346
    n_d = digits / 4 + 1;
    }









   __asm volatile (
  "push r1 \n\t"
  "push r28 \n\t"
  "push r29 \n\t"
  "clr r2 \n\t"
  "clr r3 \n\t"
  "clr r4 \n\t"
  "clr r5 \n\t"
  "clr r6 \n\t"
  "clr r7 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "clr r19 \n\t"
  "ldi r25, 4 \n\t"
  "dec %3 \n\t"
  "ldi r16, 0 \n\t"
  "movw r28, %A2 \n\t"
  "ld r15, Y \n\t"
  "adiw r28, 3 \n\t"
  "ld r17, Y \n\t"
  "OMEGA_LOOP1: mul r16, r25 \n\t"
  "add r0, r25 \n\t"
  "movw r26, %A1 \n\t"
  "add r26, r0 \n\t"
  "adc r27, r1 \n\t"
  "movw r28, %A2 \n\t"
  "ld r14, -X \n\t"
  "ld r13, -X \n\t"
  "ld r12, -X \n\t"
  "ld r11, -X \n\t"
  "mul r11, r15 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "brcc OMEGA_T01 \n\t"
  "adc r4, r19 \n\t"
  "brcc OMEGA_T01 \n\t"
  "adc r5, r19 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T01: mul r12, r15 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "brcc OMEGA_T02 \n\t"
  "adc r5, r19 \n\t"
  "brcc OMEGA_T02 \n\t"
  "adc r6, r19 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T02: mul r13, r15 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc OMEGA_T03 \n\t"
  "adc r6, r19 \n\t"
  "brcc OMEGA_T03 \n\t"
  "adc r7, r19 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T03: mul r14, r15 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc OMEGA_T24 \n\t"
  "adc r7, r19 \n\t"
  "brcc OMEGA_T24 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T24: mul r11, r17 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc OMEGA_T31 \n\t"
  "adc r7, r19 \n\t"
  "brcc OMEGA_T31 \n\t"
  "adc r8, r19 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T31: mul r12, r17 \n\t"
  "add r6, r0 \n\t"
  "adc r7, r1 \n\t"
  "brcc OMEGA_T32 \n\t"
  "adc r8, r19 \n\t"
  "brcc OMEGA_T32 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T32: mul r13, r17 \n\t"
  "add r7, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc OMEGA_T33 \n\t"
  "adc r9, r19 \n\t"
  "adc r10, r19 \n\t"
  "OMEGA_T33: mul r14, r17 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "adc r10, r19 \n\t"
  "st Z+, r2 \n\t"
  "st Z+, r3 \n\t"
  "st Z+, r4 \n\t"
  "st Z+, r5 \n\t"
  "movw r2, r6 \n\t"
  "movw r4, r8 \n\t"
  "mov r6, r10 \n\t"
  "clr r7 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "cp r16, %3 \n\t"
  "breq OMEGA_LOOP1_EXIT \n\t"
  "inc r16 \n\t"
  "jmp OMEGA_LOOP1 \n\t"
  "OMEGA_LOOP1_EXIT: st Z+, r2 \n\t"
  "st Z+, r3 \n\t"
  "st Z+, r4 \n\t"
  "st Z+, r5 \n\t"
  "pop r29 \n\t"
  "pop r28 \n\t"
  "pop r1 \n\t" :  : 


  "z"(a), "a"(b), "a"(omega), "r"(n_d) : 
  "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r19", "r25", "r26", "r27", "r28", "r29");


  return digits + 4;
}

# 263 "NNM.nc"
static __attribute((noinline)) NN_DIGIT NNM__NN_Add(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{




  NN_DIGIT carry;

#line 270
  if (digits == 0) {
    return 0;
    }
   __asm volatile ("dec %4 \n\t"
  "ld r0, Y+ \n\t"
  "ld r2, Z+ \n\t"
  "add r0, r2 \n\t"
  "st X+, r0 \n\t"
  "ADD_LOOP1: tst %4 \n\t"
  "breq ADD_LOOP1_EXIT \n\t"
  "dec %4 \n\t"
  "ld r0, Y+ \n\t"
  "ld r2, Z+ \n\t"
  "adc r0, r2 \n\t"
  "st X+, r0 \n\t"
  "jmp ADD_LOOP1 \n\t"
  "ADD_LOOP1_EXIT: clr %0 \n\t"
  "rol %0 \n\t" : 
  "=a"(carry) : 
  "x"(a), "y"(b), "z"(c), "r"(digits) : 
  "r0", "r2");


  return carry;
}

#line 3607
static void NNM__NN__ModMultOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_DIGIT *omega, NN_UINT digits)
{

  NN_DIGIT t1[2 * (160 / 8 + 1)];
  NN_DIGIT t2[2 * (160 / 8 + 1)];
  NN_DIGIT *pt1;
  NN_UINT len_t2;
#line 3613
  NN_UINT len_t1;



  t1[2 * (160 / 8 + 1) - 1] = 0;
  t1[2 * (160 / 8 + 1) - 2] = 0;
  t2[2 * (160 / 8 + 1) - 1] = 0;
  t2[2 * (160 / 8 + 1) - 2] = 0;

  NNM__NN_Mult(t1, b, c, 160 / 8);

  pt1 = &t1[160 / 8];
  len_t2 = 2 * (160 / 8);


  while (!NNM__NN_Zero(pt1, 160 / 8)) {
      memset(t2, 0, len_t2 * (8 / 8));
      len_t2 -= 160 / 8;
      len_t1 = len_t2;
      len_t2 = NNM__CurveParam__omega_mul(t2, pt1, omega, len_t2);
      memset(pt1, 0, len_t1 * (8 / 8));
      NNM__NN_Add(t1, t2, t1, (160 / 8 < len_t2 ? len_t2 : 160 / 8) + 1);
    }

  while (NNM__NN_Cmp(t1, d, digits) > 0) 
    NNM__NN_Sub(t1, t1, d, digits);
  NNM__NN_Assign(a, t1, digits);
}

#line 454
static __attribute((noinline)) void NNM__NN_Mult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits)
{
#line 862
  uint8_t n_d;

  n_d = digits / 5;










   __asm volatile ("push r0 \n\t"
  "push r1 \n\t"
  "push r28 \n\t"
  "push r29 \n\t"
  "clr r2 \n\t"
  "clr r3 \n\t"
  "clr r4 \n\t"
  "clr r5 \n\t"
  "clr r6 \n\t"
  "clr r8 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "clr r11 \n\t"
  "clr r12 \n\t"
  "clr r25 \n\t"
  "clr r21 \n\t"
  "ldi r22, 5 \n\t"
  "dec %3 \n\t"
  "mov r24, %3 \n\t"
  "lsl r24 \n\t"
  "ldi r19, 0 \n\t"
  "LOOP1: ldi r20, 0 \n\t"
  "mul r19, r22 \n\t"
  "add r0, r22 \n\t"
  "add %A1, r0 \n\t"
  "adc %B1, r1 \n\t"
  "LOOP2: ld r17, -%a1 \n\t"
  "ld r16, -%a1 \n\t"
  "ld r15, -%a1 \n\t"
  "ld r14, -%a1 \n\t"
  "ld r13, -%a1 \n\t"
  "ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "brcc T01 \n\t"
  "adc r4, r21 \n\t"
  "brcc T01 \n\t"
  "adc r5, r21 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T01: mul r14, r18 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "brcc T02 \n\t"
  "adc r5, r21 \n\t"
  "brcc T02 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T02: mul r15, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T03 \n\t"
  "adc r6, r21 \n\t"
  "brcc T03 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T03: mul r16, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T04 \n\t"
  "adc r8, r21 \n\t"
  "brcc T04 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T04: mul r17, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T05 \n\t"
  "adc r9, r21 \n\t"
  "brcc T05 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T05: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "brcc T11 \n\t"
  "adc r5, r21 \n\t"
  "brcc T11 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T11: mul r14, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T12 \n\t"
  "adc r6, r21 \n\t"
  "brcc T12 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T12: mul r15, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T13 \n\t"
  "adc r8, r21 \n\t"
  "brcc T13 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T13: mul r16, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T14 \n\t"
  "adc r9, r21 \n\t"
  "brcc T14 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T14: mul r17, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T15 \n\t"
  "adc r10, r21 \n\t"
  "brcc T15 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T15: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T21 \n\t"
  "adc r6, r21 \n\t"
  "brcc T21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T21: mul r14, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T22 \n\t"
  "adc r8, r21 \n\t"
  "brcc T22 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T22: mul r15, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T23 \n\t"
  "adc r9, r21 \n\t"
  "brcc T23 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T23: mul r16, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T24 \n\t"
  "adc r10, r21 \n\t"
  "brcc T24 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T24: mul r17, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T25 \n\t"
  "adc r11, r21 \n\t"
  "brcc T25 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T25: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T31 \n\t"
  "adc r8, r21 \n\t"
  "brcc T31 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T31: mul r14, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T32 \n\t"
  "adc r9, r21 \n\t"
  "brcc T32 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T32: mul r15, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T33 \n\t"
  "adc r10, r21 \n\t"
  "brcc T33 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T33: mul r16, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T34 \n\t"
  "adc r11, r21 \n\t"
  "brcc T34 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T34: mul r17, r18 \n\t"
  "add r10, r0 \n\t"
  "adc r11, r1 \n\t"
  "brcc T35 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T35: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T41P \n\t"
  "adc r9, r21 \n\t"
  "brcc T41P \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T41P: mul r14, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T42P \n\t"
  "adc r10, r21 \n\t"
  "brcc T42P \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T42P: mul r15, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T43P \n\t"
  "adc r11, r21 \n\t"
  "brcc T43P \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T43P: mul r16, r18 \n\t"
  "add r10, r0 \n\t"
  "adc r11, r1 \n\t"
  "brcc T44P \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T44P: mul r17, r18 \n\t"
  "add r11, r0 \n\t"
  "adc r12, r1 \n\t"
  "adc r25, r21 \n\t"
  "cp r20, r19 \n\t"
  "breq  LOOP2_EXIT \n\t"
  "inc r20 \n\t"
  "jmp LOOP2 \n\t"
  "LOOP2_EXIT: st %a0+, r2 \n\t"
  "st %a0+, r3 \n\t"
  "st %a0+, r4 \n\t"
  "st %a0+, r5 \n\t"
  "st %a0+, r6 \n\t"
  "movw r2, r8 \n\t"
  "movw r4, r10 \n\t"
  "mov r6, r12 \n\t"
  "mov r8, r25 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "clr r11 \n\t"
  "clr r12 \n\t"
  "clr r25 \n\t"
  "mul r19, r22 \n\t"
  "add r0, r22 \n\t"
  "sub %A2, r0 \n\t"
  "sbc %B2, r1 \n\t"
  "cp r19, %3 \n\t"
  "breq LOOP1_EXIT \n\t"
  "inc r19 \n\t"
  "jmp LOOP1 \n\t"
  "LOOP1_EXIT: inc r19 \n\t"
  "add %A2, r22 \n\t"
  "adc %B2, r21 \n\t"
  "mul %3, r22 \n\t"
  "add r0, r22 \n\t"
  "add %A1, r0 \n\t"
  "adc %B1, r1 \n\t"
  "LOOP3: mov r20, r19 \n\t"
  "sub r20, %3 \n\t"
  "LOOP4: ld r17, -%a1 \n\t"
  "ld r16, -%a1 \n\t"
  "ld r15, -%a1 \n\t"
  "ld r14, -%a1 \n\t"
  "ld r13, -%a1 \n\t"
  "ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r2, r0 \n\t"
  "adc r3, r1 \n\t"
  "brcc T41 \n\t"
  "adc r4, r21 \n\t"
  "brcc T41 \n\t"
  "adc r5, r21 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T41: mul r14, r18 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "brcc T42 \n\t"
  "adc r5, r21 \n\t"
  "brcc T42 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T42: mul r15, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T43 \n\t"
  "adc r6, r21 \n\t"
  "brcc T43 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T43: mul r16, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T44 \n\t"
  "adc r8, r21 \n\t"
  "brcc T44 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T44: mul r17, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T45 \n\t"
  "adc r9, r21 \n\t"
  "brcc T45 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T45: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r3, r0 \n\t"
  "adc r4, r1 \n\t"
  "brcc T51 \n\t"
  "adc r5, r21 \n\t"
  "brcc T51 \n\t"
  "adc r6, r21 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T51: mul r14, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T52 \n\t"
  "adc r6, r21 \n\t"
  "brcc T52 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T52: mul r15, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T53 \n\t"
  "adc r8, r21 \n\t"
  "brcc T53 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T53: mul r16, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T54 \n\t"
  "adc r9, r21 \n\t"
  "brcc T54 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T54: mul r17, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T55 \n\t"
  "adc r10, r21 \n\t"
  "brcc T55 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T55: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r4, r0 \n\t"
  "adc r5, r1 \n\t"
  "brcc T61 \n\t"
  "adc r6, r21 \n\t"
  "brcc T61 \n\t"
  "adc r8, r21 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T61: mul r14, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T62 \n\t"
  "adc r8, r21 \n\t"
  "brcc T62 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T62: mul r15, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T63 \n\t"
  "adc r9, r21 \n\t"
  "brcc T63 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T63: mul r16, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T64 \n\t"
  "adc r10, r21 \n\t"
  "brcc T64 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T64: mul r17, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T65 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T65: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r5, r0 \n\t"
  "adc r6, r1 \n\t"
  "brcc T71 \n\t"
  "adc r8, r21 \n\t"
  "brcc T71 \n\t"
  "adc r9, r21 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T71: mul r14, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T72 \n\t"
  "adc r9, r21 \n\t"
  "brcc T72 \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T72: mul r15, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T73 \n\t"
  "adc r10, r21 \n\t"
  "brcc T73 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T73: mul r16, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T74 \n\t"
  "adc r11, r21 \n\t"
  "brcc T74 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T74: mul r17, r18 \n\t"
  "add r10, r0 \n\t"
  "adc r11, r1 \n\t"
  "brcc T75 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T75: ld r18, %a2+ \n\t"
  "mul r13, r18 \n\t"
  "add r6, r0 \n\t"
  "adc r8, r1 \n\t"
  "brcc T71P \n\t"
  "adc r9, r21 \n\t"
  "brcc T71P \n\t"
  "adc r10, r21 \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T71P: mul r14, r18 \n\t"
  "add r8, r0 \n\t"
  "adc r9, r1 \n\t"
  "brcc T72P \n\t"
  "adc r10, r21 \n\t"
  "brcc T72P \n\t"
  "adc r11, r21 \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T72P: mul r15, r18 \n\t"
  "add r9, r0 \n\t"
  "adc r10, r1 \n\t"
  "brcc T73P \n\t"
  "adc r11, r21 \n\t"
  "brcc T73P \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T73P: mul r16, r18 \n\t"
  "add r10, r0 \n\t"
  "adc r11, r1 \n\t"
  "brcc T74P \n\t"
  "adc r12, r21 \n\t"
  "adc r25, r21 \n\t"
  "T74P: mul r17, r18 \n\t"
  "add r11, r0 \n\t"
  "adc r12, r1 \n\t"
  "adc r25, r21 \n\t"
  "cp r20, %3 \n\t"
  "breq  LOOP4_EXIT \n\t"
  "inc r20 \n\t"
  "jmp LOOP4 \n\t"
  "LOOP4_EXIT: st %a0+, r2 \n\t"
  "st %a0+, r3 \n\t"
  "st %a0+, r4 \n\t"
  "st %a0+, r5 \n\t"
  "st %a0+, r6 \n\t"
  "movw r2, r8 \n\t"
  "movw r4, r10 \n\t"
  "mov r6, r12 \n\t"
  "mov r8, r25 \n\t"
  "clr r9 \n\t"
  "clr r10 \n\t"
  "clr r11 \n\t"
  "clr r12 \n\t"
  "clr r25 \n\t"
  "mov r0, r24 \n\t"
  "sub r0, r19 \n\t"
  "mul r0, r22 \n\t"
  "sub %A2, r0 \n\t"
  "sbc %B2, r1 \n\t"
  "add r0, r22 \n\t"
  "add %A1, r0 \n\t"
  "adc %B1, r1 \n\t"
  "cp r19, r24 \n\t"
  "breq LOOP3_EXIT \n\t"
  "inc r19 \n\t"
  "jmp LOOP3 \n\t"
  "LOOP3_EXIT: st %a0+, r2 \n\t"
  "st %a0+, r3 \n\t"
  "st %a0+, r4 \n\t"
  "st %a0+, r5 \n\t"
  "st %a0+, r6 \n\t"
  "pop r29 \n\t"
  "pop r28 \n\t"
  "pop r1 \n\t"
  "pop r0 \n\t" :  : 

  "e"(a), "e"(b), "e"(c), "a"(n_d) : 
  "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r24", "r25");}

#line 3562
static void NNM__NN__ModSub(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits)
{
  NN_DIGIT tmp[160 / 8 + 1];
  NN_DIGIT borrow;

  borrow = NNM__NN_Sub(tmp, b, c, digits);
  if (borrow) {
    NNM__NN_Add(a, tmp, d, digits);
    }
  else {
#line 3571
    NNM__NN_Assign(a, tmp, digits);
    }
}

# 358 "ECCM.nc"
static void ECCM__c_dbl_projective(Point *P0, NN_DIGIT *Z0, Point *P1, NN_DIGIT *Z1)
{
  NN_DIGIT n0[160 / 8 + 1];
  NN_DIGIT n1[160 / 8 + 1];
  NN_DIGIT n2[160 / 8 + 1];
  NN_DIGIT n3[160 / 8 + 1];

  if (ECCM__NN__Zero(Z1, 160 / 8 + 1)) 
    {
      ECCM__NN__AssignZero(Z0, 160 / 8 + 1);
      return;
    }


  if (ECCM__Z_is_one(Z1)) 
    {

      ECCM__NN__ModSqrOpt(n0, P1->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__LShift(n1, n0, 1, 160 / 8 + 1);
      ECCM__NN__ModSmall(n1, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModAdd(n0, n0, n1, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModAdd(n1, n0, ECCM__param.E.a, ECCM__param.p, 160 / 8 + 1);
    }
  else 
    {
      if (ECCM__param.E.a_minus3) 
        {


          ECCM__NN__ModSqrOpt(n1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
          ECCM__NN__ModAdd(n0, P1->x, n1, ECCM__param.p, 160 / 8 + 1);
          ECCM__NN__ModSub(n2, P1->x, n1, ECCM__param.p, 160 / 8 + 1);
          ECCM__NN__ModMultOpt(n1, n0, n2, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
          ECCM__NN__LShift(n0, n1, 1, 160 / 8 + 1);
          ECCM__NN__ModSmall(n0, ECCM__param.p, 160 / 8 + 1);
          ECCM__NN__ModAdd(n1, n0, n1, ECCM__param.p, 160 / 8 + 1);
        }
      else {
#line 395
        if (ECCM__param.E.a_zero) 
          {

            ECCM__NN__ModSqrOpt(n0, P1->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__LShift(n1, n0, 1, 160 / 8 + 1);
            ECCM__NN__ModSmall(n1, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModAdd(n1, n0, n1, ECCM__param.p, 160 / 8 + 1);
          }
        else 
          {

            ECCM__NN__ModSqrOpt(n0, P1->x, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__LShift(n1, n0, 1, 160 / 8 + 1);
            ECCM__NN__ModSmall(n1, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModAdd(n0, n0, n1, ECCM__param.p, 160 / 8 + 1);
            ECCM__NN__ModSqrOpt(n1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__ModSqrOpt(n1, n1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__ModMultOpt(n1, n1, ECCM__param.E.a, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
            ECCM__NN__ModAdd(n1, n1, n0, ECCM__param.p, 160 / 8 + 1);
          }
        }
    }

  if (ECCM__Z_is_one(Z1)) 
    {
      ECCM__NN__Assign(n0, P1->y, 160 / 8 + 1);
    }
  else 
    {
      ECCM__NN__ModMultOpt(n0, P1->y, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }
  ECCM__NN__LShift(Z0, n0, 1, 160 / 8 + 1);
  ECCM__NN__ModSmall(Z0, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__ModSqrOpt(n3, P1->y, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModMultOpt(n2, P1->x, n3, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__LShift(n2, n2, 2, 160 / 8 + 1);
  ECCM__NN__ModSmall(n2, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__LShift(n0, n2, 1, 160 / 8 + 1);
  ECCM__NN__ModSmall(n0, ECCM__param.p, 160 / 8 + 1);
  ECCM__NN__ModSqrOpt(P0->x, n1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSub(P0->x, P0->x, n0, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__ModSqrOpt(n0, n3, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__LShift(n3, n0, 3, 160 / 8 + 1);
  ECCM__NN__ModSmall(n3, ECCM__param.p, 160 / 8 + 1);


  ECCM__NN__ModSub(n0, n2, P0->x, ECCM__param.p, 160 / 8 + 1);
  ECCM__NN__ModMultOpt(n0, n1, n0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
  ECCM__NN__ModSub(P0->y, n0, n3, ECCM__param.p, 160 / 8 + 1);
}

#line 103
static bool ECCM__Z_is_one(NN_DIGIT *Z)
{
  uint8_t i;

  for (i = 1; i < 160 / 8 + 1; i++) 
    if (Z[i]) {
      return FALSE;
      }
#line 110
  if (Z[0] == 1) {
    return TRUE;
    }
  return FALSE;
}

# 3544 "NNM.nc"
static void NNM__NN__ModAdd(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits)
{
  NN_DIGIT tmp[160 / 8 + 1];
  NN_DIGIT carry;

  carry = NNM__NN_Add(tmp, b, c, digits);
  if (carry) {
    NNM__NN_Sub(a, tmp, d, digits);
    }
  else {
#line 3552
    if (NNM__NN_Cmp(tmp, d, digits) >= 0) {
      NNM__NN_Sub(a, tmp, d, digits);
      }
    else {
#line 3555
      NNM__NN_Assign(a, tmp, digits);
      }
    }
}

#line 3022
static void NNM__NN_ModDivOpt(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits)
{
  NN_DIGIT A[160 / 8 + 1];
#line 3024
  NN_DIGIT B[160 / 8 + 1];
#line 3024
  NN_DIGIT U[160 / 8 + 1];
#line 3024
  NN_DIGIT V[160 / 8 + 1];
  int tmp_even;

  NNM__NN_Assign(A, c, digits);
  NNM__NN_Assign(B, d, digits);
  NNM__NN_Assign(U, b, digits);
  NNM__NN_AssignZero(V, digits);

  while ((tmp_even = NNM__NN_Cmp(A, B, digits)) != 0) {
      if (digits == 0 || !(A[0] & 1)) {
          NNM__NN_RShift(A, A, 1, digits);
          if (digits == 0 || !(U[0] & 1)) {
              NNM__NN_RShift(U, U, 1, digits);
            }
          else 
#line 3037
            {
              NNM__NN_Add(U, U, d, digits);
              NNM__NN_RShift(U, U, 1, digits);
            }
        }
      else {
#line 3041
        if (digits == 0 || !(B[0] & 1)) {
            NNM__NN_RShift(B, B, 1, digits);
            if (digits == 0 || !(V[0] & 1)) {
                NNM__NN_RShift(V, V, 1, digits);
              }
            else 
#line 3045
              {
                NNM__NN_Add(V, V, d, digits);
                NNM__NN_RShift(V, V, 1, digits);
              }
          }
        else {
#line 3049
          if (tmp_even > 0) {
              NNM__NN_Sub(A, A, B, digits);
              NNM__NN_RShift(A, A, 1, digits);
              if (NNM__NN_Cmp(U, V, digits) < 0) {
                  NNM__NN_Add(U, U, d, digits);
                }
              NNM__NN_Sub(U, U, V, digits);
              if (digits == 0 || !(U[0] & 1)) {
                  NNM__NN_RShift(U, U, 1, digits);
                }
              else 
#line 3058
                {
                  NNM__NN_Add(U, U, d, digits);
                  NNM__NN_RShift(U, U, 1, digits);
                }
            }
          else 
#line 3062
            {
              NNM__NN_Sub(B, B, A, digits);
              NNM__NN_RShift(B, B, 1, digits);
              if (NNM__NN_Cmp(V, U, digits) < 0) {
                  NNM__NN_Add(V, V, d, digits);
                }
              NNM__NN_Sub(V, V, U, digits);
              if (digits == 0 || !(V[0] & 1)) {
                  NNM__NN_RShift(V, V, 1, digits);
                }
              else 
#line 3071
                {
                  NNM__NN_Add(V, V, d, digits);
                  NNM__NN_RShift(V, V, 1, digits);
                }
            }
          }
        }
    }
#line 3078
  NNM__NN_Assign(a, U, digits);
}

# 804 "ECCM.nc"
static void ECCM__win_mul(Point *P0, NN_DIGIT *n, Point *pointArray)
{
#line 829
  int16_t i;
#line 829
  int16_t tmp;
  int8_t j;
  NN_DIGIT windex;
  NN_DIGIT Z0[160 / 8 + 1];
  NN_DIGIT Z1[160 / 8 + 1];




  ECCM__p_clear(P0);


  ECCM__NN__AssignZero(Z0, 160 / 8 + 1);
  ECCM__NN__AssignZero(Z1, 160 / 8 + 1);
  Z1[0] = 0x01;

  tmp = ECCM__NN__Digits(n, 160 / 8 + 1);

  for (i = tmp - 1; i >= 0; i--) {
      for (j = 8 / 4 - 1; j >= 0; j--) {






          ECCM__c_m_dbl_projective(P0, Z0, 4);


          windex = ECCM__mask[j] & n[i];

          if (windex) {
              windex = windex >> j * 4;

              ECCM__c_add_mix(P0, Z0, P0, Z0, &pointArray[windex - 1]);
            }
        }
    }






  if (!ECCM__Z_is_one(Z0)) 
    {

      ECCM__NN__ModInv(Z1, Z0, ECCM__param.p, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(Z0, Z1, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(P0->x, P0->x, Z0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(Z0, Z0, Z1, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
      ECCM__NN__ModMultOpt(P0->y, P0->y, Z0, ECCM__param.p, ECCM__param.omega, 160 / 8 + 1);
    }
}

# 204 "NNM.nc"
static void NNM__NN_Encode(unsigned char *a, NN_UINT len, NN_DIGIT *b, NN_UINT digits)
{
  NN_DIGIT t;
  int j;
  unsigned int i;
#line 208
  unsigned int u;

  for (i = 0, j = len - 1; i < digits && j >= 0; i++) {
      t = b[i];
      for (u = 0; j >= 0 && u < 8; j--, u += 8) 
        a[j] = (unsigned char )(t >> u);
    }

  for (; j >= 0; j--) 
    a[j] = 0;
}

# 289 "ECDSAM.nc"
static __attribute((noinline)) error_t ECDSAM__ECDSA__init(Point *pKey)
{
  ECDSAM__ECC__init();
  ECDSAM__param = ECDSAM__ECC__get_param();


  ECDSAM__shamir_init(pKey, ECDSAM__pqBaseArray);






  ECDSAM__NN__ModBarrettInit(ECDSAM__param->r, 160 / 8 + 1, &ECDSAM__Bbuf);


  return SUCCESS;
}


static __attribute((noinline)) void ECDSAM__ECDSA__sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d)
{

  bool done = FALSE;
  NN_DIGIT k[160 / 8 + 1];
  NN_DIGIT k_inv[160 / 8 + 1];
  NN_DIGIT tmp[160 / 8 + 1];
  NN_DIGIT digest[160 / 8 + 1];
  Point P;
  uint8_t sha1sum[20];
  NN_DIGIT sha1tmp[20 / (8 / 8)];
  SHA1Context ctx;
  NN_UINT result_bit_len;
#line 321
  NN_UINT order_bit_len;



  ECDSAM__NN__BarrettSetBuf(&ECDSAM__Bbuf);

  while (!done) {



      ECDSAM__ECC__gen_private_key(k);


      if (ECDSAM__NN__Zero(k, 160 / 8 + 1) == 1) {
        continue;
        }

      ECDSAM__ECC__BarrettSetBuf();




      ECDSAM__ECC__win_mul_base(&P, k);





      ECDSAM__NN__BarrettSetBuf(&ECDSAM__Bbuf);
      ECDSAM__NN__Assign(r, P.x, 160 / 8 + 1);
      ECDSAM__NN__ModSmall(r, ECDSAM__param->r, 160 / 8 + 1);




      if (ECDSAM__NN__Zero(r, 160 / 8 + 1) == 1) {
        continue;
        }
#line 358
      ECDSAM__NN__ModInv(k_inv, k, ECDSAM__param->r, 160 / 8 + 1);

      memset(sha1sum, 0, 20);
      memset(digest, 0, (160 / 8 + 1) * (8 / 8));
      ECDSAM__SHA1__reset(&ctx);
      ECDSAM__SHA1__update(&ctx, msg, len);
      ECDSAM__SHA1__digest(&ctx, sha1sum);
      ECDSAM__NN__Decode(sha1tmp, 20 / (8 / 8), sha1sum, 20);

      result_bit_len = ECDSAM__NN__Bits(sha1tmp, 20 / (8 / 8));
      order_bit_len = ECDSAM__NN__Bits(ECDSAM__param->r, 160 / 8 + 1);
      if (result_bit_len > order_bit_len) {
          ECDSAM__NN__Mod(digest, sha1tmp, 20 / (8 / 8), ECDSAM__param->r, 160 / 8 + 1);
        }
      else 
#line 371
        {
          memset(digest, 0, (160 / 8 + 1) * (8 / 8));
          ECDSAM__NN__Assign(digest, sha1tmp, 20 / (8 / 8));
          if (result_bit_len == order_bit_len) {
            ECDSAM__NN__ModSmall(digest, ECDSAM__param->r, 160 / 8 + 1);
            }
        }
      ECDSAM__NN__ModMult(k, d, r, ECDSAM__param->r, 160 / 8 + 1);
      ECDSAM__NN__ModAdd(tmp, digest, k, ECDSAM__param->r, 160 / 8 + 1);
      ECDSAM__NN__ModMult(s, k_inv, tmp, ECDSAM__param->r, 160 / 8 + 1);
      if (ECDSAM__NN__Zero(s, 160 / 8 + 1) != 1) {
        done = TRUE;
        }
    }
}

# 994 "ECCM.nc"
static void ECCM__ECC__gen_private_key(NN_DIGIT *PrivateKey)
#line 994
{


  NN_UINT order_digit_len;
#line 997
  NN_UINT order_bit_len;
  bool done = FALSE;
  uint8_t ri;
  NN_DIGIT digit_mask;

  order_bit_len = ECCM__NN__Bits(ECCM__param.r, 160 / 8 + 1);
  order_digit_len = ECCM__NN__Digits(ECCM__param.r, 160 / 8 + 1);

  while (!done) {

      for (ri = 0; ri < order_digit_len; ri++) {



          PrivateKey[ri] = (NN_DIGIT )ECCM__Random__rand16();
        }


      for (ri = order_digit_len; ri < 160 / 8 + 1; ri++) {
          PrivateKey[ri] = 0;
        }

      if (order_bit_len % 8 != 0) {
          digit_mask = 0xff >> (8 - order_bit_len % 8);
          PrivateKey[order_digit_len - 1] = PrivateKey[order_digit_len - 1] & digit_mask;
        }
      ECCM__NN__ModSmall(PrivateKey, ECCM__param.r, 160 / 8 + 1);

      if (ECCM__NN__Zero(PrivateKey, 160 / 8 + 1) != 1) {
        done = TRUE;
        }
    }
}

# 3142 "NNM.nc"
static unsigned int NNM__NN_Bits(NN_DIGIT *a, NN_UINT digits)
{
  if ((digits = NNM__NN_Digits(a, digits)) == 0) {
    return 0;
    }
  return (digits - 1) * 8 + NNM__NN_DigitBits(a[digits - 1]);
}

# 83 "/home/user/tinyos-main/tos/system/RandomLfsrC.nc"
static uint16_t RandomLfsrC__Random__rand16(void )
#line 83
{
  bool endbit;
  uint16_t tmpShiftReg;

#line 86
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      tmpShiftReg = RandomLfsrC__shiftReg;
      endbit = (tmpShiftReg & 0x8000) != 0;
      tmpShiftReg <<= 1;
      if (endbit) {
        tmpShiftReg ^= 0x100b;
        }
#line 92
      tmpShiftReg++;
      RandomLfsrC__shiftReg = tmpShiftReg;
      tmpShiftReg = tmpShiftReg ^ RandomLfsrC__mask;
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return tmpShiftReg;
}

# 74 "SHA1M.nc"
static int SHA1M__SHA1__reset(SHA1Context *context)
{
  if (!context) {
      return shaNull;
    }

  context->Length_Low = 0;
  context->Length_High = 0;
  context->Message_Block_Index = 0;

  context->Intermediate_Hash[0] = 0x67452301;
  context->Intermediate_Hash[1] = 0xEFCDAB89;
  context->Intermediate_Hash[2] = 0x98BADCFE;
  context->Intermediate_Hash[3] = 0x10325476;
  context->Intermediate_Hash[4] = 0xC3D2E1F0;

  context->Computed = 0;
  context->Corrupted = 0;

  return shaSuccess;
}

#line 167
static int SHA1M__SHA1__update(SHA1Context *context, const uint8_t *message_array, uint32_t length)
{
  if (!length) {
      return shaSuccess;
    }

  if (!context || !message_array) {
      return shaNull;
    }

  if (context->Computed) {
      context->Corrupted = shaStateError;

      return shaStateError;
    }

  if (context->Corrupted) {
      return context->Corrupted;
    }
  while (length-- && ! context->Corrupted) {
      context->Message_Block[context->Message_Block_Index++] = 
      *message_array & 0xFF;

      context->Length_Low += 8;
      if (context->Length_Low == 0) {
          context->Length_High++;
          if (context->Length_High == 0) {

              context->Corrupted = 1;
            }
        }

      if (context->Message_Block_Index == 64) {
          SHA1M__SHA1ProcessMessageBlock(context);
        }

      message_array++;
    }

  return shaSuccess;
}

#line 230
static void SHA1M__SHA1ProcessMessageBlock(SHA1Context *context)
{
  const uint32_t K[4] = { 
  0x5A827999, 
  0x6ED9EBA1, 
  0x8F1BBCDC, 
  0xCA62C1D6 };

  uint8_t t;
  uint32_t temp;

  uint8_t s;
  uint32_t W[16];



  uint32_t A;
#line 246
  uint32_t B;
#line 246
  uint32_t C;
#line 246
  uint32_t D;
#line 246
  uint32_t E;




  for (t = 0; t < 16; t++) {
      W[t] = (uint32_t )context->Message_Block[t * 4] << 24;
      W[t] |= (uint32_t )context->Message_Block[t * 4 + 1] << 16;
      W[t] |= (uint32_t )context->Message_Block[t * 4 + 2] << 8;
      W[t] |= (uint32_t )context->Message_Block[t * 4 + 3];
    }







  A = context->Intermediate_Hash[0];
  B = context->Intermediate_Hash[1];
  C = context->Intermediate_Hash[2];
  D = context->Intermediate_Hash[3];
  E = context->Intermediate_Hash[4];

  for (t = 0; t < 20; t++) {

      s = t & 0x0f;
      if (t >= 16) {
          W[s] = ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) << 1) | ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) >> (32 - 1));
        }




      temp = ((A << 5) | (A >> (32 - 5))) + ((
      B & C) | (~B & D)) + E + W[s] + K[0];




      E = D;
      D = C;
      C = (B << 30) | (B >> (32 - 30));

      B = A;
      A = temp;
    }

  for (t = 20; t < 40; t++) {

      s = t & 0x0f;
      W[s] = ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) << 1) | ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) >> (32 - 1));




      temp = ((A << 5) | (A >> (32 - 5))) + ((B ^ C) ^ D) + E + W[s] + K[1];



      E = D;
      D = C;
      C = (B << 30) | (B >> (32 - 30));
      B = A;
      A = temp;
    }

  for (t = 40; t < 60; t++) {

      s = t & 0x0f;
      W[s] = ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) << 1) | ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) >> (32 - 1));




      temp = ((A << 5) | (A >> (32 - 5))) + (((
      B & C) | (B & D)) | (C & D)) + E + W[s] + K[2];




      E = D;
      D = C;
      C = (B << 30) | (B >> (32 - 30));
      B = A;
      A = temp;
    }

  for (t = 60; t < 80; t++) {

      s = t & 0x0f;
      W[s] = ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) << 1) | ((((W[(s + 13) & 0x0f] ^ W[(s + 8) & 0x0f]) ^ W[(s + 2) & 0x0f]) ^ W[s]) >> (32 - 1));




      temp = ((A << 5) | (A >> (32 - 5))) + ((B ^ C) ^ D) + E + W[s] + K[3];



      E = D;
      D = C;
      C = (B << 30) | (B >> (32 - 30));
      B = A;
      A = temp;
    }

  context->Intermediate_Hash[0] += A;
  context->Intermediate_Hash[1] += B;
  context->Intermediate_Hash[2] += C;
  context->Intermediate_Hash[3] += D;
  context->Intermediate_Hash[4] += E;

  context->Message_Block_Index = 0;
}

#line 115
static int SHA1M__SHA1__digest(SHA1Context *context, uint8_t Message_Digest[20])
{
  uint8_t i;

  if (!context || !Message_Digest) {
      return shaNull;
    }

  if (context->Corrupted) {
      return context->Corrupted;
    }

  if (! context->Computed) {
      SHA1M__SHA1PadMessage(context);
      for (i = 0; i < 64; ++i) {

          context->Message_Block[i] = 0;
        }
      context->Length_Low = 0;
      context->Length_High = 0;
      context->Computed = 1;
    }


  for (i = 0; i < 20; ++i) {
      Message_Digest[i] = context->Intermediate_Hash[i >> 2]
       >> 8 * (3 - (i & 0x03));
    }

  return shaSuccess;
}

# 180 "NNM.nc"
static void NNM__NN_Decode(NN_DIGIT *a, NN_UINT digits, unsigned char *b, NN_UINT len)
{
  NN_DIGIT t;
  int j;
  unsigned int i;
#line 184
  unsigned int u;

  for (i = 0, j = len - 1; i < digits && j >= 0; i++) {
      t = 0;
      for (u = 0; j >= 0 && u < 8; j--, u += 8) 
        t |= (NN_DIGIT )b[j] << u;
      a[i] = t;
    }

  for (; i < digits; i++) 
    a[i] = 0;
}

#line 3504
static void NNM__NN__ModBarrett(NN_DIGIT *a, NN_DIGIT *b, NN_UINT bDigits, NN_DIGIT *c, NN_UINT cDigits)
{

  NN_DIGIT q2[2 * (160 / 8 + 1) + 6];
#line 3507
  NN_DIGIT q1[160 / 8 + 1 + 4];
#line 3507
  NN_DIGIT r2[2 * (160 / 8 + 1) + 8];
#line 3507
  NN_DIGIT r1[160 / 8 + 1 + 4];
#line 3507
  NN_DIGIT m[160 / 8 + 1 + 4];


  memset(q2, 0, (2 * (160 / 8 + 1) + 6) * (8 / 8));
  memcpy(q1, b + NNM__pBarrett->km - 1, (bDigits - NNM__pBarrett->km + 1) * (8 / 8));
  memset(q1 + bDigits - NNM__pBarrett->km + 1, 0, 160 / 8 + 1 + 4 - bDigits + NNM__pBarrett->km - 1);
  memcpy(r1, b, (NNM__pBarrett->km + 1) * (8 / 8));
  memset(r1 + NNM__pBarrett->km + 1, 0, (160 / 8 + 1 + 4 - NNM__pBarrett->km - 1) * (8 / 8));
  memcpy(m, c, cDigits * (8 / 8));
  memset(m + cDigits, 0, 160 / 8 + 1 + 4 - cDigits);


  NNM__NN_Mult(q2, q1, NNM__pBarrett->mu, NNM__pBarrett->mu_len);

  NNM__NN_Mult(r2, q2 + NNM__pBarrett->km + 1, m, NNM__pBarrett->mu_len);
  memset(r2 + NNM__pBarrett->km + 1, 0, (2 * (160 / 8 + 1) + 8 - NNM__pBarrett->km - 1) * (8 / 8));
  if (NNM__NN_Cmp(r1, r2, NNM__pBarrett->km + 1) < 0) {
    r1[NNM__pBarrett->km + 1] = 1;
    }
#line 3525
  NNM__NN_Sub(r1, r1, r2, NNM__pBarrett->km + 2);

  while (NNM__NN_Cmp(r1, m, cDigits) >= 0) 
    NNM__NN_Sub(r1, r1, m, cDigits);

  memcpy(a, r1, cDigits * (8 / 8));
}

#line 2860
static void NNM__NN_ModMult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_DIGIT *d, NN_UINT digits)
{


  NN_DIGIT q2[2 * (160 / 8 + 1) + 8];
#line 2864
  NN_DIGIT x[2 * (160 / 8 + 1) + 8];
#line 2864
  NN_DIGIT r2[2 * (160 / 8 + 1) + 8];
#line 2864
  NN_DIGIT m[160 / 8 + 1 + 4];

  if (digits > 4) {
    memset(x + 2 * digits - 8, 0, (2 * (160 / 8 + 1) - 2 * digits + 16) * (8 / 8));
    }
  else {
#line 2869
    memset(x, 0, (2 * (160 / 8 + 1) + 8) * (8 / 8));
    }

  NNM__NN_Mult(x, b, c, digits);
  memcpy(m, d, digits * (8 / 8));
  memset(m + digits, 0, (160 / 8 + 1 + 4 - digits) * (8 / 8));


  NNM__NN_Mult(q2, x + NNM__pBarrett->km - 1, NNM__pBarrett->mu, NNM__pBarrett->mu_len);

  NNM__NN_Mult(r2, q2 + NNM__pBarrett->km + 1, m, NNM__pBarrett->mu_len);
  memset(r2 + NNM__pBarrett->km + 1, 0, (2 * (160 / 8 + 1) + 8 - NNM__pBarrett->km - 1) * (8 / 8));
  memset(x + NNM__pBarrett->km + 1, 0, (2 * (160 / 8 + 1) + 8 - NNM__pBarrett->km - 1) * (8 / 8));

  if (NNM__NN_Cmp(x, r2, NNM__pBarrett->km + 1) < 0) {
    x[NNM__pBarrett->km + 1] = 1;
    }
#line 2885
  NNM__NN_Sub(x, x, r2, NNM__pBarrett->km + 2);

  while (NNM__NN_Cmp(x, m, digits) >= 0) 
    NNM__NN_Sub(x, x, m, digits);

  memcpy(a, x, digits * (8 / 8));
}

# 386 "ECDSAM.nc"
static __attribute((noinline)) uint8_t ECDSAM__ECDSA__verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q)
{

  uint8_t sha1sum[20];
  NN_DIGIT sha1tmp[20 / (8 / 8)];
  SHA1Context ctx;
  NN_DIGIT w[160 / 8 + 1];
  NN_DIGIT u1[160 / 8 + 1];
  NN_DIGIT u2[160 / 8 + 1];
  NN_DIGIT digest[160 / 8 + 1];
  NN_UINT result_bit_len;
#line 396
  NN_UINT order_bit_len;



  Point final;

  if (ECDSAM__NN__Cmp(r, ECDSAM__param->r, 160 / 8 + 1) >= 0) {
    return 3;
    }
#line 404
  if (ECDSAM__NN__Zero(r, 160 / 8 + 1) == 1) {
    return 4;
    }
#line 406
  if (ECDSAM__NN__Cmp(s, ECDSAM__param->r, 160 / 8 + 1) >= 0) {
    return 5;
    }
#line 408
  if (ECDSAM__NN__Zero(s, 160 / 8 + 1) == 1) {
    return 6;
    }

  ECDSAM__NN__BarrettSetBuf(&ECDSAM__Bbuf);


  ECDSAM__NN__ModInv(w, s, ECDSAM__param->r, 160 / 8 + 1);


  memset(sha1sum, 0, 20);
  memset(digest, 0, (160 / 8 + 1) * (8 / 8));
  ECDSAM__SHA1__reset(&ctx);
  ECDSAM__SHA1__update(&ctx, msg, len);
  ECDSAM__SHA1__digest(&ctx, sha1sum);
  ECDSAM__NN__Decode(sha1tmp, 20 / (8 / 8), sha1sum, 20);
  result_bit_len = ECDSAM__NN__Bits(sha1tmp, 20 / (8 / 8));
  order_bit_len = ECDSAM__NN__Bits(ECDSAM__param->r, 160 / 8 + 1);
  if (result_bit_len > order_bit_len) {
      ECDSAM__NN__Mod(digest, sha1tmp, 20 / (8 / 8), ECDSAM__param->r, 160 / 8 + 1);
    }
  else 
#line 428
    {
      ECDSAM__NN__Assign(digest, sha1tmp, 20 / (8 / 8));
      if (result_bit_len == order_bit_len) {
        ECDSAM__NN__ModSmall(digest, ECDSAM__param->r, 160 / 8 + 1);
        }
    }
  ECDSAM__NN__ModMult(u1, digest, w, ECDSAM__param->r, 160 / 8 + 1);

  ECDSAM__NN__ModMult(u2, r, w, ECDSAM__param->r, 160 / 8 + 1);


  ECDSAM__ECC__BarrettSetBuf();



  ECDSAM__shamir(&final, u1, u2);
#line 455
  ECDSAM__NN__BarrettSetBuf(&ECDSAM__Bbuf);

  result_bit_len = ECDSAM__NN__Bits(final.x, 160 / 8 + 1);
  order_bit_len = ECDSAM__NN__Bits(ECDSAM__param->r, 160 / 8 + 1);
  if (result_bit_len > order_bit_len) {
      ECDSAM__NN__Mod(w, final.x, 160 / 8 + 1, ECDSAM__param->r, 160 / 8 + 1);
    }
  else 
#line 461
    {
      ECDSAM__NN__Assign(w, final.x, 160 / 8 + 1);
      if (result_bit_len == order_bit_len) {
        ECDSAM__NN__ModSmall(w, ECDSAM__param->r, 160 / 8 + 1);
        }
    }
  if (ECDSAM__NN__Cmp(w, r, 160 / 8 + 1) == 0) {
      return 1;
    }
  else 
#line 469
    {
      return 2;
    }
}

# 48 "testECDSAM.nc"
static void testECDSAM__init_data(void )
#line 48
{




  uint8_t j;


  testECDSAM__pass = 0;
  testECDSAM__t = 0;


  memset(testECDSAM__message, 0, 52);

  memset(testECDSAM__PrivateKey, 0, (160 / 8 + 1) * (8 / 8));

  memset(testECDSAM__PublicKey.x, 0, (160 / 8 + 1) * (8 / 8));
  memset(testECDSAM__PublicKey.y, 0, (160 / 8 + 1) * (8 / 8));

  memset(testECDSAM__r, 0, (160 / 8 + 1) * (8 / 8));
  memset(testECDSAM__s, 0, (160 / 8 + 1) * (8 / 8));



  for (j = 0; j < 52; j++) {
      testECDSAM__message[j] = (uint8_t )testECDSAM__Random__rand16();
    }





  testECDSAM__ECC__init();

  testECDSAM__gen_PrivateKey();
}

# 172 "/home/user/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 357 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/home/user/tinyos-main/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 173 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 187 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 180 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 180
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 412 "/home/user/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/home/user/tinyos-main/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/home/user/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 186 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 186
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/home/user/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 274 "/home/user/tinyos-main/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 274
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 279
__attribute((interrupt))   void __vector_32(void )
#line 279
{
  HplAtm128UartP__HplUart1__txDone();
}

# 198 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 198
{
  HplAtm128Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 202
{
  HplAtm128Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 206
{
  HplAtm128Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 210
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_29(void )
#line 214
{
  HplAtm128Timer3P__Timer__overflow();
}

