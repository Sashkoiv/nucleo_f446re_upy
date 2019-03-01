# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "../py/mpconfig.h" 1
# 45 "../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 27 "./mpconfigport.h"
       
# 88 "./mpconfigport.h"
extern const struct _mp_obj_fun_builtin_t mp_builtin_help_obj;
extern const struct _mp_obj_fun_builtin_t mp_builtin_input_obj;
extern const struct _mp_obj_fun_builtin_t mp_builtin_open_obj;






extern const struct _mp_obj_module_t pyb_module;
extern const struct _mp_obj_module_t stm_module;
extern const struct _mp_obj_module_t mp_module_ubinascii;
extern const struct _mp_obj_module_t mp_module_ure;
extern const struct _mp_obj_module_t mp_module_uzlib;
extern const struct _mp_obj_module_t mp_module_ujson;
extern const struct _mp_obj_module_t mp_module_uheapq;
extern const struct _mp_obj_module_t mp_module_uhashlib;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_utime;
extern const struct _mp_obj_module_t mp_module_uselect;
extern const struct _mp_obj_module_t mp_module_usocket;
extern const struct _mp_obj_module_t mp_module_network;
# 190 "./mpconfigport.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;
typedef void *machine_ptr_t;
typedef const void *machine_const_ptr_t;
typedef long mp_off_t;

void mp_hal_stdout_tx_strn_cooked(const char *str, mp_uint_t len);
# 207 "./mpconfigport.h"
# 1 "hal/f4/inc/stm32f4xx_hal.h" 1
# 48 "hal/f4/inc/stm32f4xx_hal.h"
# 1 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 1
# 235 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_rcc.h" 1
# 47 "hal/f4/inc/stm32f4xx_hal_rcc.h"
# 1 "hal/f4/inc/stm32f4xx_hal_def.h" 1
# 48 "hal/f4/inc/stm32f4xx_hal_def.h"
# 1 "cmsis/devinc/stm32f4xx.h" 1
# 140 "cmsis/devinc/stm32f4xx.h"
# 1 "cmsis/devinc/stm32f401xe.h" 1
# 85 "cmsis/devinc/stm32f401xe.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  WWDG_IRQn = 0,
  PVD_IRQn = 1,
  TAMP_STAMP_IRQn = 2,
  RTC_WKUP_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Stream0_IRQn = 11,
  DMA1_Stream1_IRQn = 12,
  DMA1_Stream2_IRQn = 13,
  DMA1_Stream3_IRQn = 14,
  DMA1_Stream4_IRQn = 15,
  DMA1_Stream5_IRQn = 16,
  DMA1_Stream6_IRQn = 17,
  ADC_IRQn = 18,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_TIM9_IRQn = 24,
  TIM1_UP_TIM10_IRQn = 25,
  TIM1_TRG_COM_TIM11_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  OTG_FS_WKUP_IRQn = 42,
  DMA1_Stream7_IRQn = 47,
  SDIO_IRQn = 49,
  TIM5_IRQn = 50,
  SPI3_IRQn = 51,
  DMA2_Stream0_IRQn = 56,
  DMA2_Stream1_IRQn = 57,
  DMA2_Stream2_IRQn = 58,
  DMA2_Stream3_IRQn = 59,
  DMA2_Stream4_IRQn = 60,
  OTG_FS_IRQn = 67,
  DMA2_Stream5_IRQn = 68,
  DMA2_Stream6_IRQn = 69,
  DMA2_Stream7_IRQn = 70,
  USART6_IRQn = 71,
  I2C3_EV_IRQn = 72,
  I2C3_ER_IRQn = 73,
  FPU_IRQn = 81,
  SPI4_IRQn = 84
} IRQn_Type;





# 1 "cmsis/inc/core_cm4.h" 1
# 168 "cmsis/inc/core_cm4.h"
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 3 4
# 1 "/usr/include/newlib/stdint.h" 1 3 4
# 12 "/usr/include/newlib/stdint.h" 3 4
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3 4







# 1 "/usr/include/newlib/sys/features.h" 1 3 4
# 9 "/usr/include/newlib/machine/_default_types.h" 2 3 4
# 27 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/usr/include/newlib/stdint.h" 2 3 4
# 1 "/usr/include/newlib/sys/_intsup.h" 1 3 4
# 49 "/usr/include/newlib/sys/_intsup.h" 3 4
       
       
       
       
       
       
# 193 "/usr/include/newlib/sys/_intsup.h" 3 4
       
       
       
       
       
       
# 14 "/usr/include/newlib/stdint.h" 2 3 4
# 1 "/usr/include/newlib/sys/_stdint.h" 1 3 4
# 19 "/usr/include/newlib/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;



typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 15 "/usr/include/newlib/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/usr/include/newlib/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "/usr/include/newlib/stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "/usr/include/newlib/stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 2 3 4
# 169 "cmsis/inc/core_cm4.h" 2
# 1 "cmsis/inc/core_cmInstr.h" 1
# 325 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline void __NOP(void)
{
  __asm volatile ("nop");
}







__attribute__( ( always_inline ) ) static inline void __WFI(void)
{
  __asm volatile ("wfi");
}







__attribute__( ( always_inline ) ) static inline void __WFE(void)
{
  __asm volatile ("wfe");
}






__attribute__( ( always_inline ) ) static inline void __SEV(void)
{
  __asm volatile ("sev");
}
# 369 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline void __ISB(void)
{
  __asm volatile ("isb");
}







__attribute__( ( always_inline ) ) static inline void __DSB(void)
{
  __asm volatile ("dsb");
}







__attribute__( ( always_inline ) ) static inline void __DMB(void)
{
  __asm volatile ("dmb");
}
# 404 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 424 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 440 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 461 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32 - op2));
}
# 487 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;

   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
   return(result);
}
# 503 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return(result);
}
# 526 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return(result);
}
# 549 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 567 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}
# 585 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}
# 603 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}







__attribute__( ( always_inline ) ) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 662 "cmsis/inc/core_cmInstr.h"
__attribute__( ( always_inline ) ) static inline uint8_t __CLZ(uint32_t value)
{
   uint32_t result;

  __asm volatile ("clz %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 170 "cmsis/inc/core_cm4.h" 2
# 1 "cmsis/inc/core_cmFunc.h" 1
# 329 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}
# 352 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 367 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 379 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}
# 394 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}
# 409 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}
# 424 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp\n" : "=r" (result) );
  return(result);
}
# 439 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0\n" : : "r" (topOfProcStack) : "sp");
}
# 451 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp\n" : "=r" (result) );
  return(result);
}
# 466 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0\n" : : "r" (topOfMainStack) : "sp");
}
# 478 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}
# 493 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 506 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}
# 529 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri_max" : "=r" (result) );
  return(result);
}
# 544 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_BASEPRI(uint32_t value)
{
  __asm volatile ("MSR basepri, %0" : : "r" (value) : "memory");
}
# 556 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 571 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 587 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_FPSCR(void)
{

  uint32_t result;


  __asm volatile ("");
  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  __asm volatile ("");
  return(result);



}
# 609 "cmsis/inc/core_cmFunc.h"
__attribute__( ( always_inline ) ) static inline void __set_FPSCR(uint32_t fpscr)
{


  __asm volatile ("");
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc");
  __asm volatile ("");

}
# 171 "cmsis/inc/core_cm4.h" 2
# 1 "cmsis/inc/core_cm4_simd.h" 1
# 158 "cmsis/inc/core_cm4_simd.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 478 "cmsis/inc/core_cm4_simd.h"
__attribute__( ( always_inline ) ) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 556 "cmsis/inc/core_cm4_simd.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 602 "cmsis/inc/core_cm4_simd.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 643 "cmsis/inc/core_cm4_simd.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}
# 172 "cmsis/inc/core_cm4.h" 2
# 251 "cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {



    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;

    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;




typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;




typedef union
{
  struct
  {
    uint32_t ISR:9;



    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;

    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;




typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 336 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8];
       uint32_t RESERVED0[24];
  volatile uint32_t ICER[8];
       uint32_t RSERVED1[24];
  volatile uint32_t ISPR[8];
       uint32_t RESERVED2[24];
  volatile uint32_t ICPR[8];
       uint32_t RESERVED3[24];
  volatile uint32_t IABR[8];
       uint32_t RESERVED4[56];
  volatile uint8_t IP[240];
       uint32_t RESERVED5[644];
  volatile uint32_t STIR;
} NVIC_Type;
# 368 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4];
  volatile const uint32_t ISAR[5];
       uint32_t RESERVED0[5];
  volatile uint32_t CPACR;
} SCB_Type;
# 585 "cmsis/inc/core_cm4.h"
typedef struct
{
       uint32_t RESERVED0[1];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 623 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 673 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32];
       uint32_t RESERVED0[864];
  volatile uint32_t TER;
       uint32_t RESERVED1[15];
  volatile uint32_t TPR;
       uint32_t RESERVED2[15];
  volatile uint32_t TCR;
       uint32_t RESERVED3[29];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
       uint32_t RESERVED4[43];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
       uint32_t RESERVED5[6];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 774 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
       uint32_t RESERVED0[1];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
       uint32_t RESERVED1[1];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
       uint32_t RESERVED2[1];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 919 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t SSPSR;
  volatile uint32_t CSPSR;
       uint32_t RESERVED0[2];
  volatile uint32_t ACPR;
       uint32_t RESERVED1[55];
  volatile uint32_t SPPR;
       uint32_t RESERVED2[131];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
       uint32_t RESERVED3[759];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
       uint32_t RESERVED4[1];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
       uint32_t RESERVED5[39];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
       uint32_t RESERVED7[8];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1073 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1166 "cmsis/inc/core_cm4.h"
typedef struct
{
       uint32_t RESERVED0[1];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1271 "cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1435 "cmsis/inc/core_cm4.h"
static inline void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((0xFFFFUL << 16) | (7UL << 8));
  reg_value = (reg_value |
                ((uint32_t)0x5FA << 16) |
                (PriorityGroupTmp << 8));
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}
# 1455 "cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_GetPriorityGrouping(void)
{
  return ((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8)) >> 8);
}
# 1467 "cmsis/inc/core_cm4.h"
static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{

  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(uint32_t)((int32_t)IRQn) >> 5] = (uint32_t)(1 << ((uint32_t)((int32_t)IRQn) & (uint32_t)0x1F));
}
# 1480 "cmsis/inc/core_cm4.h"
static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
# 1496 "cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t) ((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(uint32_t)(IRQn) >> 5] & (1 << ((uint32_t)(IRQn) & 0x1F)))?1:0));
}
# 1508 "cmsis/inc/core_cm4.h"
static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
# 1520 "cmsis/inc/core_cm4.h"
static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
# 1535 "cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(uint32_t)(IRQn) >> 5] & (1 << ((uint32_t)(IRQn) & 0x1F)))?1:0));
}
# 1550 "cmsis/inc/core_cm4.h"
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if(IRQn < 0) {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[((uint32_t)(IRQn) & 0xF)-4] = ((priority << (8 - 4)) & 0xff); }
  else {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[(uint32_t)(IRQn)] = ((priority << (8 - 4)) & 0xff); }
}
# 1570 "cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if(IRQn < 0) {
    return((uint32_t)(((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[((uint32_t)(IRQn) & 0xF)-4] >> (8 - 4))); }
  else {
    return((uint32_t)(((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[(uint32_t)(IRQn)] >> (8 - 4))); }
}
# 1592 "cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & 0x07);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7 - PriorityGroupTmp) > 4) ? 4 : 7 - PriorityGroupTmp;
  SubPriorityBits = ((PriorityGroupTmp + 4) < 7) ? 0 : PriorityGroupTmp - 7 + 4;

  return (
           ((PreemptPriority & ((1 << (PreemptPriorityBits)) - 1)) << SubPriorityBits) |
           ((SubPriority & ((1 << (SubPriorityBits )) - 1)))
         );
}
# 1620 "cmsis/inc/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & 0x07);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7 - PriorityGroupTmp) > 4) ? 4 : 7 - PriorityGroupTmp;
  SubPriorityBits = ((PriorityGroupTmp + 4) < 7) ? 0 : PriorityGroupTmp - 7 + 4;

  *pPreemptPriority = (Priority >> SubPriorityBits) & ((1 << (PreemptPriorityBits)) - 1);
  *pSubPriority = (Priority ) & ((1 << (SubPriorityBits )) - 1);
}






static inline void NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = ((0x5FA << 16) |
                 (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8)) |
                 (1UL << 2));
  __DSB();
  while(1);
}
# 1677 "cmsis/inc/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1) > (0xFFFFFFUL << 0)) return (1);

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = ticks - 1;
  NVIC_SetPriority (SysTick_IRQn, (1<<4) - 1);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2) |
                   (1UL << 1) |
                   (1UL << 0);
  return (0);
}
# 1703 "cmsis/inc/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 1717 "cmsis/inc/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if ((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL << 0)) &&
      (((ITM_Type *) (0xE0000000UL) )->TER & (1UL << 0) ) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0].u32 == 0);
    ((ITM_Type *) (0xE0000000UL) )->PORT[0].u8 = (uint8_t) ch;
  }
  return (ch);
}
# 1736 "cmsis/inc/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void) {
  int32_t ch = -1;

  if (ITM_RxBuffer != 0x5AA55AA5) {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = 0x5AA55AA5;
  }

  return (ch);
}
# 1755 "cmsis/inc/core_cm4.h"
static inline int32_t ITM_CheckChar (void) {

  if (ITM_RxBuffer == 0x5AA55AA5) {
    return (0);
  } else {
    return (1);
  }
}
# 160 "cmsis/devinc/stm32f401xe.h" 2
# 1 "cmsis/devinc/system_stm32f4xx.h" 1
# 76 "cmsis/devinc/system_stm32f4xx.h"
extern uint32_t SystemCoreClock;
# 103 "cmsis/devinc/system_stm32f4xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 161 "cmsis/devinc/stm32f401xe.h" 2
# 171 "cmsis/devinc/stm32f401xe.h"
typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CCR;
  volatile uint32_t CDR;

} ADC_Common_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
} CRC_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZ;
  volatile uint32_t APB2FZ;
}DBGMCU_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t NDTR;
  volatile uint32_t PAR;
  volatile uint32_t M0AR;
  volatile uint32_t M1AR;
  volatile uint32_t FCR;
} DMA_Stream_TypeDef;

typedef struct
{
  volatile uint32_t LISR;
  volatile uint32_t HISR;
  volatile uint32_t LIFCR;
  volatile uint32_t HIFCR;
} DMA_TypeDef;






typedef struct
{
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t OPTCR;
  volatile uint32_t OPTCR1;
} FLASH_TypeDef;





typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint16_t BSRRL;
  volatile uint16_t BSRRH;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
} GPIO_TypeDef;





typedef struct
{
  volatile uint32_t MEMRMP;
  volatile uint32_t PMC;
  volatile uint32_t EXTICR[4];
  uint32_t RESERVED[2];
  volatile uint32_t CMPCR;
} SYSCFG_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t DR;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t CCR;
  volatile uint32_t TRISE;
  volatile uint32_t FLTR;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t PLLCFGR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED0;
  volatile uint32_t APB1RSTR;
  volatile uint32_t APB2RSTR;
  uint32_t RESERVED1[2];
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  uint32_t RESERVED2;
  volatile uint32_t APB1ENR;
  volatile uint32_t APB2ENR;
  uint32_t RESERVED3[2];
  volatile uint32_t AHB1LPENR;
  volatile uint32_t AHB2LPENR;
  volatile uint32_t AHB3LPENR;
  uint32_t RESERVED4;
  volatile uint32_t APB1LPENR;
  volatile uint32_t APB2LPENR;
  uint32_t RESERVED5[2];
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  uint32_t RESERVED6[2];
  volatile uint32_t SSCGR;
  volatile uint32_t PLLI2SCFGR;

} RCC_TypeDef;





typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
  volatile uint32_t CALIBR;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMBR;
  volatile uint32_t WPR;
  volatile uint32_t SSR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
  volatile uint32_t CALR;
  volatile uint32_t TAFCR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBSSR;
  uint32_t RESERVED7;
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
} RTC_TypeDef;






typedef struct
{
  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  uint32_t RESERVED0[2];
  volatile const uint32_t FIFOCNT;
  uint32_t RESERVED1[13];
  volatile uint32_t FIFO;
} SDIO_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
  volatile uint32_t I2SPR;
} SPI_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
  volatile uint32_t OR;
} TIM_TypeDef;





typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t BRR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t GTPR;
} USART_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;




typedef struct
{
  volatile uint32_t GOTGCTL;
  volatile uint32_t GOTGINT;
  volatile uint32_t GAHBCFG;
  volatile uint32_t GUSBCFG;
  volatile uint32_t GRSTCTL;
  volatile uint32_t GINTSTS;
  volatile uint32_t GINTMSK;
  volatile uint32_t GRXSTSR;
  volatile uint32_t GRXSTSP;
  volatile uint32_t GRXFSIZ;
  volatile uint32_t DIEPTXF0_HNPTXFSIZ;
  volatile uint32_t HNPTXSTS;
  uint32_t Reserved30[2];
  volatile uint32_t GCCFG;
  volatile uint32_t CID;
  uint32_t Reserved40[48];
  volatile uint32_t HPTXFSIZ;
  volatile uint32_t DIEPTXF[0x0F];
}
USB_OTG_GlobalTypeDef;






typedef struct
{
  volatile uint32_t DCFG;
  volatile uint32_t DCTL;
  volatile uint32_t DSTS;
  uint32_t Reserved0C;
  volatile uint32_t DIEPMSK;
  volatile uint32_t DOEPMSK;
  volatile uint32_t DAINT;
  volatile uint32_t DAINTMSK;
  uint32_t Reserved20;
  uint32_t Reserved9;
  volatile uint32_t DVBUSDIS;
  volatile uint32_t DVBUSPULSE;
  volatile uint32_t DTHRCTL;
  volatile uint32_t DIEPEMPMSK;
  volatile uint32_t DEACHINT;
  volatile uint32_t DEACHMSK;
  uint32_t Reserved40;
  volatile uint32_t DINEP1MSK;
  uint32_t Reserved44[15];
  volatile uint32_t DOUTEP1MSK;
}
USB_OTG_DeviceTypeDef;





typedef struct
{
  volatile uint32_t DIEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DIEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DIEPTSIZ;
  volatile uint32_t DIEPDMA;
  volatile uint32_t DTXFSTS;
  uint32_t Reserved18;
}
USB_OTG_INEndpointTypeDef;





typedef struct
{
  volatile uint32_t DOEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DOEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DOEPTSIZ;
  volatile uint32_t DOEPDMA;
  uint32_t Reserved18[2];
}
USB_OTG_OUTEndpointTypeDef;





typedef struct
{
  volatile uint32_t HCFG;
  volatile uint32_t HFIR;
  volatile uint32_t HFNUM;
  uint32_t Reserved40C;
  volatile uint32_t HPTXSTS;
  volatile uint32_t HAINT;
  volatile uint32_t HAINTMSK;
}
USB_OTG_HostTypeDef;





typedef struct
{
  volatile uint32_t HCCHAR;
  volatile uint32_t HCSPLT;
  volatile uint32_t HCINT;
  volatile uint32_t HCINTMSK;
  volatile uint32_t HCTSIZ;
  volatile uint32_t HCDMA;
  uint32_t Reserved[2];
}
USB_OTG_HostChannelTypeDef;
# 141 "cmsis/devinc/stm32f4xx.h" 2
# 154 "cmsis/devinc/stm32f4xx.h"
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  ERROR = 0,
  SUCCESS = !ERROR
} ErrorStatus;
# 49 "hal/f4/inc/stm32f4xx_hal_def.h" 2






typedef enum
{
  HAL_OK = 0x00,
  HAL_ERROR = 0x01,
  HAL_BUSY = 0x02,
  HAL_TIMEOUT = 0x03
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00,
  HAL_LOCKED = 0x01
} HAL_LockTypeDef;
# 48 "hal/f4/inc/stm32f4xx_hal_rcc.h" 2
# 62 "hal/f4/inc/stm32f4xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLM;


  uint32_t PLLN;


  uint32_t PLLP;


  uint32_t PLLQ;


}RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;


  uint32_t LSIState;


  RCC_PLLInitTypeDef PLL;

}RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;


}RCC_ClkInitTypeDef;
# 1137 "hal/f4/inc/stm32f4xx_hal_rcc.h"
# 1 "hal/f4/inc/stm32f4xx_hal_rcc_ex.h" 1
# 134 "hal/f4/inc/stm32f4xx_hal_rcc_ex.h"
typedef struct
{





  uint32_t PLLI2SN;



  uint32_t PLLI2SR;



}RCC_PLLI2SInitTypeDef;





typedef struct
{
  uint32_t PeriphClockSelection;


  RCC_PLLI2SInitTypeDef PLLI2S;


  uint32_t RTCClockSelection;


}RCC_PeriphCLKInitTypeDef;
# 1145 "hal/f4/inc/stm32f4xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
# 1138 "hal/f4/inc/stm32f4xx_hal_rcc.h" 2




void HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);


void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
void HAL_RCC_DisableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);


void HAL_RCC_NMI_IRQHandler(void);


void HAL_RCC_CCSCallback(void);
# 236 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_gpio.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

}GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0,
  GPIO_PIN_SET
}GPIO_PinState;
# 242 "hal/f4/inc/stm32f4xx_hal_gpio.h"
# 1 "hal/f4/inc/stm32f4xx_hal_gpio_ex.h" 1
# 243 "hal/f4/inc/stm32f4xx_hal_gpio.h" 2



void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);


GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 240 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_dma.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_dma.h"
typedef struct
{
  uint32_t Channel;


  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;


  uint32_t FIFOMode;




  uint32_t FIFOThreshold;


  uint32_t MemBurst;





  uint32_t PeriphBurst;




}DMA_InitTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00,
  HAL_DMA_STATE_READY = 0x01,
  HAL_DMA_STATE_READY_MEM0 = 0x11,
  HAL_DMA_STATE_READY_MEM1 = 0x21,
  HAL_DMA_STATE_READY_HALF_MEM0 = 0x31,
  HAL_DMA_STATE_READY_HALF_MEM1 = 0x41,
  HAL_DMA_STATE_BUSY = 0x02,
  HAL_DMA_STATE_BUSY_MEM0 = 0x12,
  HAL_DMA_STATE_BUSY_MEM1 = 0x22,
  HAL_DMA_STATE_TIMEOUT = 0x03,
  HAL_DMA_STATE_ERROR = 0x04,
}HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00,
  HAL_DMA_HALF_TRANSFER = 0x01,
}HAL_DMA_LevelCompleteTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Stream_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferM1CpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);

  volatile uint32_t ErrorCode;
}DMA_HandleTypeDef;
# 664 "hal/f4/inc/stm32f4xx_hal_dma.h"
# 1 "hal/f4/inc/stm32f4xx_hal_dma_ex.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_dma_ex.h"
typedef enum
{
  MEMORY0 = 0x00,
  MEMORY1 = 0x01,

}HAL_DMA_MemoryTypeDef;






HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_ChangeMemory(DMA_HandleTypeDef *hdma, uint32_t Address, HAL_DMA_MemoryTypeDef memory);
# 665 "hal/f4/inc/stm32f4xx_hal_dma.h" 2




HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *hdma);


HAL_StatusTypeDef HAL_DMA_Start (DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, uint32_t CompleteLevel, uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);


HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 244 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_cortex.h" 1
# 130 "hal/f4/inc/stm32f4xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);


uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);
# 248 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_adc.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_adc.h"
typedef enum
{
  HAL_ADC_STATE_RESET = 0x00,
  HAL_ADC_STATE_READY = 0x01,
  HAL_ADC_STATE_BUSY = 0x02,
  HAL_ADC_STATE_BUSY_REG = 0x12,
  HAL_ADC_STATE_BUSY_INJ = 0x22,
  HAL_ADC_STATE_BUSY_INJ_REG = 0x32,
  HAL_ADC_STATE_TIMEOUT = 0x03,
  HAL_ADC_STATE_ERROR = 0x04,
  HAL_ADC_STATE_EOC = 0x05,
  HAL_ADC_STATE_EOC_REG = 0x15,
  HAL_ADC_STATE_EOC_INJ = 0x25,
  HAL_ADC_STATE_EOC_INJ_REG = 0x35,
  HAL_ADC_STATE_AWD = 0x06

}HAL_ADC_StateTypeDef;




typedef struct
{
  uint32_t ClockPrescaler;


  uint32_t Resolution;

  uint32_t DataAlign;

  uint32_t ScanConvMode;


  uint32_t EOCSelection;


  uint32_t ContinuousConvMode;

  uint32_t DMAContinuousRequests;

  uint32_t NbrOfConversion;


  uint32_t DiscontinuousConvMode;


  uint32_t NbrOfDiscConversion;


  uint32_t ExternalTrigConvEdge;

  uint32_t ExternalTrigConv;

}ADC_InitTypeDef;




typedef struct
{
  ADC_TypeDef *Instance;

  ADC_InitTypeDef Init;

  volatile uint32_t NbrOfCurrentConversionRank;

  DMA_HandleTypeDef *DMA_Handle;

  HAL_LockTypeDef Lock;

  volatile HAL_ADC_StateTypeDef State;

  volatile uint32_t ErrorCode;
}ADC_HandleTypeDef;




typedef struct
{
  uint32_t Channel;

  uint32_t Rank;

  uint32_t SamplingTime;

  uint32_t Offset;
}ADC_ChannelConfTypeDef;




typedef struct
{
  uint32_t WatchdogMode;

  uint32_t HighThreshold;

  uint32_t LowThreshold;

  uint32_t Channel;


  uint32_t ITMode;


  uint32_t WatchdogNumber;
}ADC_AnalogWDGConfTypeDef;
# 691 "hal/f4/inc/stm32f4xx_hal_adc.h"
# 1 "hal/f4/inc/stm32f4xx_hal_adc_ex.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t InjectedChannel;

  uint32_t InjectedRank;

  uint32_t InjectedSamplingTime;

  uint32_t InjectedOffset;

  uint32_t InjectedNbrOfConversion;


  uint32_t AutoInjectedConv;

  uint32_t InjectedDiscontinuousConvMode;

  uint32_t ExternalTrigInjecConvEdge;

  uint32_t ExternalTrigInjecConv;

}ADC_InjectionConfTypeDef;




typedef struct
{
  uint32_t Mode;

  uint32_t DMAAccessMode;

  uint32_t TwoSamplingDelay;

}ADC_MultiModeTypeDef;
# 258 "hal/f4/inc/stm32f4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedPollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADCEx_InjectedGetValue(ADC_HandleTypeDef* hadc, uint32_t InjectedRank);
HAL_StatusTypeDef HAL_ADCEx_MultiModeStart_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADCEx_MultiModeStop_DMA(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADCEx_MultiModeGetValue(ADC_HandleTypeDef* hadc);
void HAL_ADCEx_InjectedConvCpltCallback(ADC_HandleTypeDef* hadc);


HAL_StatusTypeDef HAL_ADCEx_InjectedConfigChannel(ADC_HandleTypeDef* hadc,ADC_InjectionConfTypeDef* sConfigInjected);
HAL_StatusTypeDef HAL_ADCEx_MultiModeConfigChannel(ADC_HandleTypeDef* hadc, ADC_MultiModeTypeDef* multimode);
# 692 "hal/f4/inc/stm32f4xx_hal_adc.h" 2



HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspInit(ADC_HandleTypeDef* hadc);
void HAL_ADC_MspDeInit(ADC_HandleTypeDef* hadc);


HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout);

HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef* hadc, uint32_t EventType, uint32_t Timeout);

HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef* hadc);

void HAL_ADC_IRQHandler(ADC_HandleTypeDef* hadc);

HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef* hadc);

uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef* hadc);

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef* hadc, ADC_ChannelConfTypeDef* sConfig);
HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef* hadc, ADC_AnalogWDGConfTypeDef* AnalogWDGConfig);


HAL_ADC_StateTypeDef HAL_ADC_GetState(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc);
# 252 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_can.h" 1
# 256 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 271 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_dac.h" 1
# 272 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 283 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_flash.h" 1
# 61 "hal/f4/inc/stm32f4xx_hal_flash.h"
typedef enum
{
  FLASH_ERROR_RD = 0x01,
  FLASH_ERROR_PGS = 0x02,
  FLASH_ERROR_PGP = 0x04,
  FLASH_ERROR_PGA = 0x08,
  FLASH_ERROR_WRP = 0x10,
  FLASH_ERROR_OPERATION = 0x20
}FLASH_ErrorTypeDef;




typedef enum
{
  FLASH_PROC_NONE = 0,
  FLASH_PROC_SECTERASE,
  FLASH_PROC_MASSERASE,
  FLASH_PROC_PROGRAM
} FLASH_ProcedureTypeDef;





typedef struct
{
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;

  volatile uint32_t NbSectorsToErase;

  volatile uint8_t VoltageForErase;

  volatile uint32_t Sector;

  volatile uint32_t Bank;

  volatile uint32_t Address;

  HAL_LockTypeDef Lock;

  volatile FLASH_ErrorTypeDef ErrorCode;

}FLASH_ProcessTypeDef;
# 323 "hal/f4/inc/stm32f4xx_hal_flash.h"
# 1 "hal/f4/inc/stm32f4xx_hal_flash_ex.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_flash_ex.h"
typedef struct
{
  uint32_t TypeErase;


  uint32_t Banks;


  uint32_t Sector;


  uint32_t NbSectors;


  uint32_t VoltageRange;


} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;


  uint32_t WRPState;


  uint32_t WRPSector;


  uint32_t Banks;


  uint32_t RDPLevel;


  uint32_t BORLevel;


  uint8_t USERConfig;

} FLASH_OBProgramInitTypeDef;






typedef struct
{
  uint32_t OptionType;


  uint32_t PCROPState;



  uint16_t Sectors;
# 140 "hal/f4/inc/stm32f4xx_hal_flash_ex.h"
} FLASH_AdvOBProgramInitTypeDef;
# 726 "hal/f4/inc/stm32f4xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *SectorError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);



HAL_StatusTypeDef HAL_FLASHEx_AdvOBProgram (FLASH_AdvOBProgramInitTypeDef *pAdvOBInit);
void HAL_FLASHEx_AdvOBGetConfig(FLASH_AdvOBProgramInitTypeDef *pAdvOBInit);
HAL_StatusTypeDef HAL_FLASHEx_OB_SelectPCROP(void);
HAL_StatusTypeDef HAL_FLASHEx_OB_DeSelectPCROP(void);






void FLASH_Erase_Sector(uint32_t Sector, uint8_t VoltageRange);
# 324 "hal/f4/inc/stm32f4xx_hal_flash.h" 2
# 1 "hal/f4/inc/stm32f4xx_hal_flash_ramfunc.h" 1
# 325 "hal/f4/inc/stm32f4xx_hal_flash.h" 2



HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);

void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);


HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);

HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);


FLASH_ErrorTypeDef HAL_FLASH_GetError(void);

HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 284 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 311 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_i2c.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_i2c.h"
typedef struct
{
  uint32_t ClockSpeed;


  uint32_t DutyCycle;


  uint32_t OwnAddress1;


  uint32_t AddressingMode;


  uint32_t DualAddressMode;


  uint32_t OwnAddress2;


  uint32_t GeneralCallMode;


  uint32_t NoStretchMode;


}I2C_InitTypeDef;




typedef enum
{
  HAL_I2C_STATE_RESET = 0x00,
  HAL_I2C_STATE_READY = 0x01,
  HAL_I2C_STATE_BUSY = 0x02,
  HAL_I2C_STATE_BUSY_TX = 0x12,
  HAL_I2C_STATE_BUSY_RX = 0x22,
  HAL_I2C_STATE_MEM_BUSY_TX = 0x32,
  HAL_I2C_STATE_MEM_BUSY_RX = 0x42,
  HAL_I2C_STATE_TIMEOUT = 0x03,
  HAL_I2C_STATE_ERROR = 0x04

}HAL_I2C_StateTypeDef;




typedef enum
{
  HAL_I2C_ERROR_NONE = 0x00,
  HAL_I2C_ERROR_BERR = 0x01,
  HAL_I2C_ERROR_ARLO = 0x02,
  HAL_I2C_ERROR_AF = 0x04,
  HAL_I2C_ERROR_OVR = 0x08,
  HAL_I2C_ERROR_DMA = 0x10,
  HAL_I2C_ERROR_TIMEOUT = 0x20

}HAL_I2C_ErrorTypeDef;




typedef struct
{
  I2C_TypeDef *Instance;

  I2C_InitTypeDef Init;

  uint8_t *pBuffPtr;

  uint16_t XferSize;

  volatile uint16_t XferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_I2C_StateTypeDef State;

  volatile HAL_I2C_ErrorTypeDef ErrorCode;

}I2C_HandleTypeDef;
# 396 "hal/f4/inc/stm32f4xx_hal_i2c.h"
# 1 "hal/f4/inc/stm32f4xx_hal_i2c_ex.h" 1
# 94 "hal/f4/inc/stm32f4xx_hal_i2c_ex.h"
HAL_StatusTypeDef HAL_I2CEx_AnalogFilter_Config(I2C_HandleTypeDef *hi2c, uint32_t AnalogFilter);
HAL_StatusTypeDef HAL_I2CEx_DigitalFilter_Config(I2C_HandleTypeDef *hi2c, uint32_t DigitalFilter);
# 397 "hal/f4/inc/stm32f4xx_hal_i2c.h" 2



HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DeInit (I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef *hi2c);



HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);


void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c);


HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef *hi2c);
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef *hi2c);
# 312 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 327 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_pwr.h" 1
# 61 "hal/f4/inc/stm32f4xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 294 "hal/f4/inc/stm32f4xx_hal_pwr.h"
# 1 "hal/f4/inc/stm32f4xx_hal_pwr_ex.h" 1
# 164 "hal/f4/inc/stm32f4xx_hal_pwr_ex.h"
void HAL_PWREx_EnableFlashPowerDown(void);
void HAL_PWREx_DisableFlashPowerDown(void);
HAL_StatusTypeDef HAL_PWREx_EnableBkUpReg(void);
HAL_StatusTypeDef HAL_PWREx_DisableBkUpReg(void);


void HAL_PWREx_EnableMainRegulatorLowVoltage(void);
void HAL_PWREx_DisableMainRegulatorLowVoltage(void);
void HAL_PWREx_EnableLowRegulatorLowVoltage(void);
void HAL_PWREx_DisableLowRegulatorLowVoltage(void);
# 295 "hal/f4/inc/stm32f4xx_hal_pwr.h" 2




void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);



void HAL_PWR_PVDConfig(PWR_PVDTypeDef *sConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);


void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTANDBYMode(void);

void HAL_PWR_PVD_IRQHandler(void);
void HAL_PWR_PVDCallback(void);
# 328 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_rng.h" 1
# 332 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_rtc.h" 1
# 61 "hal/f4/inc/stm32f4xx_hal_rtc.h"
typedef enum
{
  HAL_RTC_STATE_RESET = 0x00,
  HAL_RTC_STATE_READY = 0x01,
  HAL_RTC_STATE_BUSY = 0x02,
  HAL_RTC_STATE_TIMEOUT = 0x03,
  HAL_RTC_STATE_ERROR = 0x04

}HAL_RTCStateTypeDef;




typedef struct
{
  uint32_t HourFormat;


  uint32_t AsynchPrediv;


  uint32_t SynchPrediv;


  uint32_t OutPut;


  uint32_t OutPutPolarity;


  uint32_t OutPutType;

}RTC_InitTypeDef;




typedef struct
{
  uint8_t Hours;



  uint8_t Minutes;


  uint8_t Seconds;


  uint32_t SubSeconds;


  uint8_t TimeFormat;


  uint32_t DayLightSaving;


  uint32_t StoreOperation;


}RTC_TimeTypeDef;




typedef struct
{
  uint8_t WeekDay;


  uint8_t Month;


  uint8_t Date;


  uint8_t Year;


}RTC_DateTypeDef;




typedef struct
{
  RTC_TimeTypeDef AlarmTime;

  uint32_t AlarmMask;


  uint32_t AlarmSubSecondMask;


  uint32_t AlarmDateWeekDaySel;


  uint8_t AlarmDateWeekDay;



  uint32_t Alarm;

}RTC_AlarmTypeDef;




typedef struct
{
  RTC_TypeDef *Instance;

  RTC_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_RTCStateTypeDef State;

}RTC_HandleTypeDef;
# 717 "hal/f4/inc/stm32f4xx_hal_rtc.h"
# 1 "hal/f4/inc/stm32f4xx_hal_rtc_ex.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_rtc_ex.h"
typedef struct
{
  uint32_t Tamper;


  uint32_t PinSelection;


  uint32_t Trigger;


  uint32_t Filter;


  uint32_t SamplingFrequency;


  uint32_t PrechargeDuration;


  uint32_t TamperPullUp;


  uint32_t TimeStampOnTamperDetection;

}RTC_TamperTypeDef;
# 631 "hal/f4/inc/stm32f4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp_IT(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_GetTimeStamp(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTimeStamp, RTC_DateTypeDef *sTimeStampDate, uint32_t Format);

HAL_StatusTypeDef HAL_RTCEx_SetTamper(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_SetTamper_IT(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTamper(RTC_HandleTypeDef *hrtc, uint32_t Tamper);
void HAL_RTCEx_TamperTimeStampIRQHandler(RTC_HandleTypeDef *hrtc);

void HAL_RTCEx_Tamper1EventCallback(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_Tamper2EventCallback(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_TimeStampEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForTimeStampEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper1Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper2Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);


HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer_IT(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
uint32_t HAL_RTCEx_DeactivateWakeUpTimer(RTC_HandleTypeDef *hrtc);
uint32_t HAL_RTCEx_GetWakeUpTimer(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerIRQHandler(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForWakeUpTimerEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);


void HAL_RTCEx_BKUPWrite(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister, uint32_t Data);
uint32_t HAL_RTCEx_BKUPRead(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister);

HAL_StatusTypeDef HAL_RTCEx_SetCoarseCalib(RTC_HandleTypeDef *hrtc, uint32_t CalibSign, uint32_t Value);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCoarseCalib(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetSmoothCalib(RTC_HandleTypeDef *hrtc, uint32_t SmoothCalibPeriod, uint32_t SmoothCalibPlusPulses, uint32_t SmouthCalibMinusPulsesValue);
HAL_StatusTypeDef HAL_RTCEx_SetSynchroShift(RTC_HandleTypeDef *hrtc, uint32_t ShiftAdd1S, uint32_t ShiftSubFS);
HAL_StatusTypeDef HAL_RTCEx_SetCalibrationOutPut(RTC_HandleTypeDef *hrtc, uint32_t CalibOutput);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCalibrationOutPut(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_EnableBypassShadow(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DisableBypassShadow(RTC_HandleTypeDef *hrtc);


void HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForAlarmBEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 718 "hal/f4/inc/stm32f4xx_hal_rtc.h" 2




HAL_StatusTypeDef HAL_RTC_Init(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_DeInit(RTC_HandleTypeDef *hrtc);
void HAL_RTC_MspInit(RTC_HandleTypeDef *hrtc);
void HAL_RTC_MspDeInit(RTC_HandleTypeDef *hrtc);


HAL_StatusTypeDef HAL_RTC_SetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);


HAL_StatusTypeDef HAL_RTC_SetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetAlarm_IT(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_DeactivateAlarm(RTC_HandleTypeDef *hrtc, uint32_t Alarm);
HAL_StatusTypeDef HAL_RTC_GetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Alarm, uint32_t Format);
void HAL_RTC_AlarmIRQHandler(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_PollForAlarmAEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc);


HAL_StatusTypeDef HAL_RTC_WaitForSynchro(RTC_HandleTypeDef* hrtc);


HAL_RTCStateTypeDef HAL_RTC_GetState(RTC_HandleTypeDef *hrtc);

HAL_StatusTypeDef RTC_EnterInitMode(RTC_HandleTypeDef* hrtc);
uint8_t RTC_ByteToBcd2(uint8_t Value);
uint8_t RTC_Bcd2ToByte(uint8_t Value);
# 336 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2







# 1 "hal/f4/inc/stm32f4xx_hal_sd.h" 1
# 47 "hal/f4/inc/stm32f4xx_hal_sd.h"
# 1 "hal/f4/inc/stm32f4xx_ll_sdmmc.h" 1
# 66 "hal/f4/inc/stm32f4xx_ll_sdmmc.h"
typedef struct
{
  uint32_t ClockEdge;


  uint32_t ClockBypass;



  uint32_t ClockPowerSave;



  uint32_t BusWide;


  uint32_t HardwareFlowControl;


  uint32_t ClockDiv;


}SDIO_InitTypeDef;





typedef struct
{
  uint32_t Argument;




  uint32_t CmdIndex;


  uint32_t Response;


  uint32_t WaitForInterrupt;



  uint32_t CPSM;


}SDIO_CmdInitTypeDef;





typedef struct
{
  uint32_t DataTimeOut;

  uint32_t DataLength;

  uint32_t DataBlockSize;


  uint32_t TransferDir;



  uint32_t TransferMode;


  uint32_t DPSM;


}SDIO_DataInitTypeDef;
# 914 "hal/f4/inc/stm32f4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDIO_Init(SDIO_TypeDef *SDIOx, SDIO_InitTypeDef Init);
# 924 "hal/f4/inc/stm32f4xx_ll_sdmmc.h"
uint32_t SDIO_ReadFIFO(SDIO_TypeDef *SDIOx);
HAL_StatusTypeDef SDIO_WriteFIFO(SDIO_TypeDef *SDIOx, uint32_t *pWriteData);
# 934 "hal/f4/inc/stm32f4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDIO_PowerState_ON(SDIO_TypeDef *SDIOx);
HAL_StatusTypeDef SDIO_PowerState_OFF(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetPowerState(SDIO_TypeDef *SDIOx);


HAL_StatusTypeDef SDIO_SendCommand(SDIO_TypeDef *SDIOx, SDIO_CmdInitTypeDef *SDIO_CmdInitStruct);
uint8_t SDIO_GetCommandResponse(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetResponse(uint32_t SDIO_RESP);


HAL_StatusTypeDef SDIO_DataConfig(SDIO_TypeDef *SDIOx, SDIO_DataInitTypeDef* SDIO_DataInitStruct);
uint32_t SDIO_GetDataCounter(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetFIFOCount(SDIO_TypeDef *SDIOx);


HAL_StatusTypeDef SDIO_SetSDIOReadWaitMode(uint32_t SDIO_ReadWaitMode);
# 48 "hal/f4/inc/stm32f4xx_hal_sd.h" 2
# 67 "hal/f4/inc/stm32f4xx_hal_sd.h"
typedef struct
{
  SDIO_TypeDef *Instance;

  SDIO_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  uint32_t CardType;

  uint32_t RCA;

  uint32_t CSD[4];

  uint32_t CID[4];

  volatile uint32_t SdTransferCplt;

  volatile uint32_t SdTransferErr;

  volatile uint32_t DmaTransferCplt;

  volatile uint32_t SdOperation;

  DMA_HandleTypeDef *hdmarx;

  DMA_HandleTypeDef *hdmatx;

}SD_HandleTypeDef;




typedef struct
{
  volatile uint8_t CSDStruct;
  volatile uint8_t SysSpecVersion;
  volatile uint8_t Reserved1;
  volatile uint8_t TAAC;
  volatile uint8_t NSAC;
  volatile uint8_t MaxBusClkFrec;
  volatile uint16_t CardComdClasses;
  volatile uint8_t RdBlockLen;
  volatile uint8_t PartBlockRead;
  volatile uint8_t WrBlockMisalign;
  volatile uint8_t RdBlockMisalign;
  volatile uint8_t DSRImpl;
  volatile uint8_t Reserved2;
  volatile uint32_t DeviceSize;
  volatile uint8_t MaxRdCurrentVDDMin;
  volatile uint8_t MaxRdCurrentVDDMax;
  volatile uint8_t MaxWrCurrentVDDMin;
  volatile uint8_t MaxWrCurrentVDDMax;
  volatile uint8_t DeviceSizeMul;
  volatile uint8_t EraseGrSize;
  volatile uint8_t EraseGrMul;
  volatile uint8_t WrProtectGrSize;
  volatile uint8_t WrProtectGrEnable;
  volatile uint8_t ManDeflECC;
  volatile uint8_t WrSpeedFact;
  volatile uint8_t MaxWrBlockLen;
  volatile uint8_t WriteBlockPaPartial;
  volatile uint8_t Reserved3;
  volatile uint8_t ContentProtectAppli;
  volatile uint8_t FileFormatGrouop;
  volatile uint8_t CopyFlag;
  volatile uint8_t PermWrProtect;
  volatile uint8_t TempWrProtect;
  volatile uint8_t FileFormat;
  volatile uint8_t ECC;
  volatile uint8_t CSD_CRC;
  volatile uint8_t Reserved4;

}HAL_SD_CSDTypedef;




typedef struct
{
  volatile uint8_t ManufacturerID;
  volatile uint16_t OEM_AppliID;
  volatile uint32_t ProdName1;
  volatile uint8_t ProdName2;
  volatile uint8_t ProdRev;
  volatile uint32_t ProdSN;
  volatile uint8_t Reserved1;
  volatile uint16_t ManufactDate;
  volatile uint8_t CID_CRC;
  volatile uint8_t Reserved2;

}HAL_SD_CIDTypedef;




typedef struct
{
  volatile uint8_t DAT_BUS_WIDTH;
  volatile uint8_t SECURED_MODE;
  volatile uint16_t SD_CARD_TYPE;
  volatile uint32_t SIZE_OF_PROTECTED_AREA;
  volatile uint8_t SPEED_CLASS;
  volatile uint8_t PERFORMANCE_MOVE;
  volatile uint8_t AU_SIZE;
  volatile uint16_t ERASE_SIZE;
  volatile uint8_t ERASE_TIMEOUT;
  volatile uint8_t ERASE_OFFSET;

}HAL_SD_CardStatusTypedef;




typedef struct
{
  HAL_SD_CSDTypedef SD_csd;
  HAL_SD_CIDTypedef SD_cid;
  uint64_t CardCapacity;
  uint32_t CardBlockSize;
  uint16_t RCA;
  uint8_t CardType;

}HAL_SD_CardInfoTypedef;




typedef enum
{



  SD_CMD_CRC_FAIL = (1),
  SD_DATA_CRC_FAIL = (2),
  SD_CMD_RSP_TIMEOUT = (3),
  SD_DATA_TIMEOUT = (4),
  SD_TX_UNDERRUN = (5),
  SD_RX_OVERRUN = (6),
  SD_START_BIT_ERR = (7),
  SD_CMD_OUT_OF_RANGE = (8),
  SD_ADDR_MISALIGNED = (9),
  SD_BLOCK_LEN_ERR = (10),
  SD_ERASE_SEQ_ERR = (11),
  SD_BAD_ERASE_PARAM = (12),
  SD_WRITE_PROT_VIOLATION = (13),
  SD_LOCK_UNLOCK_FAILED = (14),
  SD_COM_CRC_FAILED = (15),
  SD_ILLEGAL_CMD = (16),
  SD_CARD_ECC_FAILED = (17),
  SD_CC_ERROR = (18),
  SD_GENERAL_UNKNOWN_ERROR = (19),
  SD_STREAM_READ_UNDERRUN = (20),
  SD_STREAM_WRITE_OVERRUN = (21),
  SD_CID_CSD_OVERWRITE = (22),
  SD_WP_ERASE_SKIP = (23),
  SD_CARD_ECC_DISABLED = (24),
  SD_ERASE_RESET = (25),
  SD_AKE_SEQ_ERROR = (26),
  SD_INVALID_VOLTRANGE = (27),
  SD_ADDR_OUT_OF_RANGE = (28),
  SD_SWITCH_ERROR = (29),
  SD_SDIO_DISABLED = (30),
  SD_SDIO_FUNCTION_BUSY = (31),
  SD_SDIO_FUNCTION_FAILED = (32),
  SD_SDIO_UNKNOWN_FUNCTION = (33),




  SD_INTERNAL_ERROR = (34),
  SD_NOT_CONFIGURED = (35),
  SD_REQUEST_PENDING = (36),
  SD_REQUEST_NOT_APPLICABLE = (37),
  SD_INVALID_PARAMETER = (38),
  SD_UNSUPPORTED_FEATURE = (39),
  SD_UNSUPPORTED_HW = (40),
  SD_ERROR = (41),
  SD_OK = (0)

}HAL_SD_ErrorTypedef;




typedef enum
{
  SD_TRANSFER_OK = 0,
  SD_TRANSFER_BUSY = 1,
  SD_TRANSFER_ERROR = 2

}HAL_SD_TransferStateTypedef;




typedef enum
{
  SD_CARD_READY = ((uint32_t)0x00000001),
  SD_CARD_IDENTIFICATION = ((uint32_t)0x00000002),
  SD_CARD_STANDBY = ((uint32_t)0x00000003),
  SD_CARD_TRANSFER = ((uint32_t)0x00000004),
  SD_CARD_SENDING = ((uint32_t)0x00000005),
  SD_CARD_RECEIVING = ((uint32_t)0x00000006),
  SD_CARD_PROGRAMMING = ((uint32_t)0x00000007),
  SD_CARD_DISCONNECTED = ((uint32_t)0x00000008),
  SD_CARD_ERROR = ((uint32_t)0x000000FF)

}HAL_SD_CardStateTypedef;




typedef enum
{
  SD_READ_SINGLE_BLOCK = 0,
  SD_READ_MULTIPLE_BLOCK = 1,
  SD_WRITE_SINGLE_BLOCK = 2,
  SD_WRITE_MULTIPLE_BLOCK = 3

}HAL_SD_OperationTypedef;
# 620 "hal/f4/inc/stm32f4xx_hal_sd.h"
HAL_SD_ErrorTypedef HAL_SD_Init(SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypedef *SDCardInfo);
HAL_StatusTypeDef HAL_SD_DeInit (SD_HandleTypeDef *hsd);
void HAL_SD_MspInit(SD_HandleTypeDef *hsd);
void HAL_SD_MspDeInit(SD_HandleTypeDef *hsd);
# 634 "hal/f4/inc/stm32f4xx_hal_sd.h"
HAL_SD_ErrorTypedef HAL_SD_ReadBlocks_BlockNumber(SD_HandleTypeDef *hsd, uint32_t *pReadBuffer, uint32_t BlockNumber, uint32_t BlockSize, uint32_t NumberOfBlocks);
HAL_SD_ErrorTypedef HAL_SD_WriteBlocks_BlockNumber(SD_HandleTypeDef *hsd, uint32_t *pWriteBuffer, uint32_t BlockNumber, uint32_t BlockSize, uint32_t NumberOfBlocks);
HAL_SD_ErrorTypedef HAL_SD_Erase(SD_HandleTypeDef *hsd, uint64_t startaddr, uint64_t endaddr);


void HAL_SD_IRQHandler(SD_HandleTypeDef *hsd);


void HAL_SD_DMA_RxCpltCallback(DMA_HandleTypeDef *hdma);
void HAL_SD_DMA_RxErrorCallback(DMA_HandleTypeDef *hdma);
void HAL_SD_DMA_TxCpltCallback(DMA_HandleTypeDef *hdma);
void HAL_SD_DMA_TxErrorCallback(DMA_HandleTypeDef *hdma);
void HAL_SD_XferCpltCallback(SD_HandleTypeDef *hsd);
void HAL_SD_XferErrorCallback(SD_HandleTypeDef *hsd);



HAL_SD_ErrorTypedef HAL_SD_ReadBlocks_BlockNumber_DMA(SD_HandleTypeDef *hsd, uint32_t *pReadBuffer, uint32_t BlockNumber, uint32_t BlockSize, uint32_t NumberOfBlocks);
HAL_SD_ErrorTypedef HAL_SD_WriteBlocks_BlockNumber_DMA(SD_HandleTypeDef *hsd, uint32_t *pWriteBuffer, uint32_t BlockNumber, uint32_t BlockSize, uint32_t NumberOfBlocks);
HAL_SD_ErrorTypedef HAL_SD_CheckWriteOperation(SD_HandleTypeDef *hsd, uint32_t Timeout);
HAL_SD_ErrorTypedef HAL_SD_CheckReadOperation(SD_HandleTypeDef *hsd, uint32_t Timeout);
# 663 "hal/f4/inc/stm32f4xx_hal_sd.h"
HAL_SD_ErrorTypedef HAL_SD_Get_CardInfo(SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypedef *pCardInfo);
HAL_SD_ErrorTypedef HAL_SD_WideBusOperation_Config(SD_HandleTypeDef *hsd, uint32_t WideMode);
HAL_SD_ErrorTypedef HAL_SD_StopTransfer(SD_HandleTypeDef *hsd);
HAL_SD_ErrorTypedef HAL_SD_HighSpeed (SD_HandleTypeDef *hsd);
# 675 "hal/f4/inc/stm32f4xx_hal_sd.h"
HAL_SD_ErrorTypedef HAL_SD_SendSDStatus(SD_HandleTypeDef *hsd, uint32_t *pSDstatus);
HAL_SD_ErrorTypedef HAL_SD_GetCardStatus(SD_HandleTypeDef *hsd, HAL_SD_CardStatusTypedef *pCardStatus);
HAL_SD_TransferStateTypedef HAL_SD_GetStatus(SD_HandleTypeDef *hsd);
# 344 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_spi.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_spi.h"
typedef struct
{
  uint32_t Mode;


  uint32_t Direction;


  uint32_t DataSize;


  uint32_t CLKPolarity;


  uint32_t CLKPhase;


  uint32_t NSS;



  uint32_t BaudRatePrescaler;





  uint32_t FirstBit;


  uint32_t TIMode;


  uint32_t CRCCalculation;


  uint32_t CRCPolynomial;


}SPI_InitTypeDef;




typedef enum
{
  HAL_SPI_STATE_RESET = 0x00,
  HAL_SPI_STATE_READY = 0x01,
  HAL_SPI_STATE_BUSY = 0x02,
  HAL_SPI_STATE_BUSY_TX = 0x12,
  HAL_SPI_STATE_BUSY_RX = 0x22,
  HAL_SPI_STATE_BUSY_TX_RX = 0x32,
  HAL_SPI_STATE_ERROR = 0x03

}HAL_SPI_StateTypeDef;




typedef enum
{
  HAL_SPI_ERROR_NONE = 0x00,
  HAL_SPI_ERROR_MODF = 0x01,
  HAL_SPI_ERROR_CRC = 0x02,
  HAL_SPI_ERROR_OVR = 0x04,
  HAL_SPI_ERROR_FRE = 0x08,
  HAL_SPI_ERROR_DMA = 0x10,
  HAL_SPI_ERROR_FLAG = 0x20

}HAL_SPI_ErrorTypeDef;




typedef struct __SPI_HandleTypeDef
{
  SPI_TypeDef *Instance;

  SPI_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  uint16_t RxXferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  void (*RxISR)(struct __SPI_HandleTypeDef * hspi);

  void (*TxISR)(struct __SPI_HandleTypeDef * hspi);

  HAL_LockTypeDef Lock;

  volatile HAL_SPI_StateTypeDef State;

  volatile HAL_SPI_ErrorTypeDef ErrorCode;

}SPI_HandleTypeDef;
# 442 "hal/f4/inc/stm32f4xx_hal_spi.h"
HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DeInit (SPI_HandleTypeDef *hspi);
void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi);
void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi);


HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_TransmitReceive(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_IT(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_DMAPause(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAResume(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAStop(SPI_HandleTypeDef *hspi);

void HAL_SPI_IRQHandler(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxHalfCpltCallback(SPI_HandleTypeDef *hspi);


HAL_SPI_StateTypeDef HAL_SPI_GetState(SPI_HandleTypeDef *hspi);
HAL_SPI_ErrorTypeDef HAL_SPI_GetError(SPI_HandleTypeDef *hspi);
# 348 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_tim.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_tim.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t CounterMode;


  uint32_t Period;



  uint32_t ClockDivision;


  uint32_t RepetitionCounter;







} TIM_Base_InitTypeDef;





typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCFastMode;




  uint32_t OCIdleState;



  uint32_t OCNIdleState;


} TIM_OC_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCIdleState;



  uint32_t OCNIdleState;



  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICFilter;

} TIM_OnePulse_InitTypeDef;






typedef struct
{
  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICPrescaler;


  uint32_t ICFilter;

} TIM_IC_InitTypeDef;





typedef struct
{
  uint32_t EncoderMode;


  uint32_t IC1Polarity;


  uint32_t IC1Selection;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t IC2Polarity;


  uint32_t IC2Selection;


  uint32_t IC2Prescaler;


  uint32_t IC2Filter;

} TIM_Encoder_InitTypeDef;




typedef struct
{
  uint32_t ClockSource;

  uint32_t ClockPolarity;

  uint32_t ClockPrescaler;

  uint32_t ClockFilter;

}TIM_ClockConfigTypeDef;




typedef struct
{
  uint32_t ClearInputState;

  uint32_t ClearInputSource;

  uint32_t ClearInputPolarity;

  uint32_t ClearInputPrescaler;

  uint32_t ClearInputFilter;

}TIM_ClearInputConfigTypeDef;




typedef struct {
  uint32_t SlaveMode;

  uint32_t InputTrigger;

  uint32_t TriggerPolarity;

  uint32_t TriggerPrescaler;

  uint32_t TriggerFilter;


}TIM_SlaveConfigTypeDef;




typedef enum
{
  HAL_TIM_STATE_RESET = 0x00,
  HAL_TIM_STATE_READY = 0x01,
  HAL_TIM_STATE_BUSY = 0x02,
  HAL_TIM_STATE_TIMEOUT = 0x03,
  HAL_TIM_STATE_ERROR = 0x04
}HAL_TIM_StateTypeDef;




typedef enum
{
  HAL_TIM_ACTIVE_CHANNEL_1 = 0x01,
  HAL_TIM_ACTIVE_CHANNEL_2 = 0x02,
  HAL_TIM_ACTIVE_CHANNEL_3 = 0x04,
  HAL_TIM_ACTIVE_CHANNEL_4 = 0x08,
  HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00
}HAL_TIM_ActiveChannel;




typedef struct
{
  TIM_TypeDef *Instance;
  TIM_Base_InitTypeDef Init;
  HAL_TIM_ActiveChannel Channel;
  DMA_HandleTypeDef *hdma[7];

  HAL_LockTypeDef Lock;
  volatile HAL_TIM_StateTypeDef State;
}TIM_HandleTypeDef;
# 1336 "hal/f4/inc/stm32f4xx_hal_tim.h"
# 1 "hal/f4/inc/stm32f4xx_hal_tim_ex.h" 1
# 63 "hal/f4/inc/stm32f4xx_hal_tim_ex.h"
typedef struct
{

  uint32_t IC1Polarity;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;

  uint32_t Commutation_Delay;

} TIM_HallSensor_InitTypeDef;




typedef struct {
  uint32_t MasterOutputTrigger;

  uint32_t MasterSlaveMode;

}TIM_MasterConfigTypeDef;




typedef struct
{
  uint32_t OffStateRunMode;

  uint32_t OffStateIDLEMode;

  uint32_t LockLevel;

  uint32_t DeadTime;

  uint32_t BreakState;

  uint32_t BreakPolarity;

  uint32_t AutomaticOutput;

}TIM_BreakDeadTimeConfigTypeDef;
# 153 "hal/f4/inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef* htim, TIM_HallSensor_InitTypeDef* sConfig);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef* htim);

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef* htim);
void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef* htim);


HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef* htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef* htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef* htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef* htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef* htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef* htim);



HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef* htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef* htim, uint32_t Channel);



HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef* htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef* htim, uint32_t Channel);



HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef* htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef* htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef* htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent_IT(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent_DMA(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef* htim, TIM_MasterConfigTypeDef * sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef* htim, TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);
HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef* htim, uint32_t Remap);


void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef* htim);
void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef* htim);
void HAL_TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma);


HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(TIM_HandleTypeDef* htim);
# 1337 "hal/f4/inc/stm32f4xx_hal_tim.h" 2




HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim);


HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef* sConfig);
HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1, uint32_t *pData2, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);


void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim);


HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef* sConfig, uint32_t OutputChannel, uint32_t InputChannel);
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef * sClearInputConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef * sClockSourceConfig);
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchronization(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc,
                                              uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc,
                                              uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource);
uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel);


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim);


HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim);

void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure);
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
void HAL_TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma);
void HAL_TIM_DMAError(DMA_HandleTypeDef *hdma);
void HAL_TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma);
void TIM_CCxChannelCmd(TIM_TypeDef* TIMx, uint32_t Channel, uint32_t ChannelState);
# 352 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2



# 1 "hal/f4/inc/stm32f4xx_hal_uart.h" 1
# 62 "hal/f4/inc/stm32f4xx_hal_uart.h"
typedef struct
{
  uint32_t BaudRate;





  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t HwFlowCtl;



  uint32_t OverSampling;

}UART_InitTypeDef;




typedef enum
{
  HAL_UART_STATE_RESET = 0x00,
  HAL_UART_STATE_READY = 0x01,
  HAL_UART_STATE_BUSY = 0x02,
  HAL_UART_STATE_BUSY_TX = 0x12,
  HAL_UART_STATE_BUSY_RX = 0x22,
  HAL_UART_STATE_BUSY_TX_RX = 0x32,
  HAL_UART_STATE_TIMEOUT = 0x03,
  HAL_UART_STATE_ERROR = 0x04
}HAL_UART_StateTypeDef;




typedef enum
{
  HAL_UART_ERROR_NONE = 0x00,
  HAL_UART_ERROR_PE = 0x01,
  HAL_UART_ERROR_NE = 0x02,
  HAL_UART_ERROR_FE = 0x04,
  HAL_UART_ERROR_ORE = 0x08,
  HAL_UART_ERROR_DMA = 0x10
}HAL_UART_ErrorTypeDef;




typedef struct
{
  USART_TypeDef *Instance;

  UART_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  uint16_t RxXferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_UART_StateTypeDef State;

  volatile HAL_UART_ErrorTypeDef ErrorCode;

}UART_HandleTypeDef;
# 559 "hal/f4/inc/stm32f4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethode);
HAL_StatusTypeDef HAL_UART_DeInit (UART_HandleTypeDef *huart);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);


HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart);
void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);


HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_ExitMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart);


HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart);
uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart);
# 356 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 375 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h"
# 1 "hal/f4/inc/stm32f4xx_hal_pcd.h" 1
# 47 "hal/f4/inc/stm32f4xx_hal_pcd.h"
# 1 "hal/f4/inc/stm32f4xx_ll_usb.h" 1
# 62 "hal/f4/inc/stm32f4xx_ll_usb.h"
typedef enum
{
   USB_OTG_DEVICE_MODE = 0,
   USB_OTG_HOST_MODE = 1,
   USB_OTG_DRD_MODE = 2

}USB_OTG_ModeTypeDef;




typedef enum {
  URB_IDLE = 0,
  URB_DONE,
  URB_NOTREADY,
  URB_NYET,
  URB_ERROR,
  URB_STALL

}USB_OTG_URBStateTypeDef;




typedef enum {
  HC_IDLE = 0,
  HC_XFRC,
  HC_HALTED,
  HC_NAK,
  HC_NYET,
  HC_STALL,
  HC_XACTERR,
  HC_BBLERR,
  HC_DATATGLERR

}USB_OTG_HCStateTypeDef;




typedef struct
{
  uint32_t dev_endpoints;



  uint32_t Host_channels;



  uint32_t speed;


  uint32_t dma_enable;

  uint32_t ep0_mps;


  uint32_t phy_itface;


  uint32_t Sof_enable;

  uint32_t low_power_enable;

  uint32_t vbus_sensing_enable;

  uint32_t use_dedicated_ep1;

  uint32_t use_external_vbus;

}USB_OTG_CfgTypeDef;

typedef struct
{
  uint8_t num;


  uint8_t is_in;


  uint8_t is_stall;


  uint8_t type;


  uint8_t data_pid_start;


  uint8_t even_odd_frame;


  uint16_t tx_fifo_num;


  uint32_t maxpacket;


  uint8_t *xfer_buff;

  uint32_t dma_addr;

  uint32_t xfer_len;

  uint32_t xfer_count;

}USB_OTG_EPTypeDef;

typedef struct
{
  uint8_t dev_addr ;


  uint8_t ch_num;


  uint8_t ep_num;


  uint8_t ep_is_in;


  uint8_t speed;


  uint8_t do_ping;

  uint8_t process_ping;

  uint8_t ep_type;


  uint16_t max_packet;


  uint8_t data_pid;


  uint8_t *xfer_buff;

  uint32_t xfer_len;

  uint32_t xfer_count;

  uint8_t toggle_in;


  uint8_t toggle_out;


  uint32_t dma_addr;

  uint32_t ErrCnt;

  USB_OTG_URBStateTypeDef urb_state;


  USB_OTG_HCStateTypeDef state;


}USB_OTG_HCTypeDef;
# 392 "hal/f4/inc/stm32f4xx_ll_usb.h"
HAL_StatusTypeDef USB_CoreInit(USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef Init);
HAL_StatusTypeDef USB_DevInit(USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef Init);
HAL_StatusTypeDef USB_EnableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DisableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_SetCurrentMode(USB_OTG_GlobalTypeDef *USBx , USB_OTG_ModeTypeDef mode);
HAL_StatusTypeDef USB_SetDevSpeed(USB_OTG_GlobalTypeDef *USBx , uint8_t speed);
HAL_StatusTypeDef USB_FlushRxFifo (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_FlushTxFifo (USB_OTG_GlobalTypeDef *USBx, uint32_t num );
HAL_StatusTypeDef USB_ActivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_ActivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPStartXfer(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep, uint8_t dma);
HAL_StatusTypeDef USB_EP0StartXfer(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep, uint8_t dma);
HAL_StatusTypeDef USB_WritePacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *src, uint8_t ch_ep_num, uint16_t len, uint8_t dma);
void * USB_ReadPacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *dest, uint16_t len);
HAL_StatusTypeDef USB_EPSetStall(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPClearStall(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_SetDevAddress (USB_OTG_GlobalTypeDef *USBx, uint8_t address);
HAL_StatusTypeDef USB_DevConnect (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DevDisconnect (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_StopDevice(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_ActivateSetup (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_EP0_OutStart(USB_OTG_GlobalTypeDef *USBx, uint8_t dma, uint8_t *psetup);
uint8_t USB_GetDevSpeed(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetMode(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadInterrupts (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevAllOutEpInterrupt (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevOutEPInterrupt (USB_OTG_GlobalTypeDef *USBx , uint8_t epnum);
uint32_t USB_ReadDevAllInEpInterrupt (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevInEPInterrupt (USB_OTG_GlobalTypeDef *USBx , uint8_t epnum);
void USB_ClearInterrupts (USB_OTG_GlobalTypeDef *USBx, uint32_t interrupt);

HAL_StatusTypeDef USB_HostInit (USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef cfg);
HAL_StatusTypeDef USB_InitFSLSPClkSel(USB_OTG_GlobalTypeDef *USBx , uint8_t freq);
HAL_StatusTypeDef USB_ResetPort(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DriveVbus (USB_OTG_GlobalTypeDef *USBx, uint8_t state);
uint32_t USB_GetHostSpeed (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetCurrentFrame (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Init(USB_OTG_GlobalTypeDef *USBx,
                                  uint8_t ch_num,
                                  uint8_t epnum,
                                  uint8_t dev_address,
                                  uint8_t speed,
                                  uint8_t ep_type,
                                  uint16_t mps);
HAL_StatusTypeDef USB_HC_StartXfer(USB_OTG_GlobalTypeDef *USBx, USB_OTG_HCTypeDef *hc, uint8_t dma);
uint32_t USB_HC_ReadInterrupt (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Halt(USB_OTG_GlobalTypeDef *USBx , uint8_t hc_num);
HAL_StatusTypeDef USB_DoPing(USB_OTG_GlobalTypeDef *USBx , uint8_t ch_num);
HAL_StatusTypeDef USB_StopHost(USB_OTG_GlobalTypeDef *USBx);
# 48 "hal/f4/inc/stm32f4xx_hal_pcd.h" 2
# 62 "hal/f4/inc/stm32f4xx_hal_pcd.h"
typedef enum
{
  HAL_PCD_STATE_RESET = 0x00,
  HAL_PCD_STATE_READY = 0x01,
  HAL_PCD_STATE_ERROR = 0x02,
  HAL_PCD_STATE_BUSY = 0x03,
  HAL_PCD_STATE_TIMEOUT = 0x04
} PCD_StateTypeDef;


typedef USB_OTG_GlobalTypeDef PCD_TypeDef;
typedef USB_OTG_CfgTypeDef PCD_InitTypeDef;
typedef USB_OTG_EPTypeDef PCD_EPTypeDef ;




typedef struct
{
  PCD_TypeDef *Instance;
  PCD_InitTypeDef Init;
  PCD_EPTypeDef IN_ep[15];
  PCD_EPTypeDef OUT_ep[15];
  HAL_LockTypeDef Lock;
  volatile PCD_StateTypeDef State;
  uint32_t Setup[12];
  void *pData;

} PCD_HandleTypeDef;
# 216 "hal/f4/inc/stm32f4xx_hal_pcd.h"
# 1 "hal/f4/inc/stm32f4xx_hal_pcd_ex.h" 1
# 60 "hal/f4/inc/stm32f4xx_hal_pcd_ex.h"
HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo(PCD_HandleTypeDef *hpcd, uint8_t fifo, uint16_t size);
HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo(PCD_HandleTypeDef *hpcd, uint16_t size);
# 217 "hal/f4/inc/stm32f4xx_hal_pcd.h" 2




HAL_StatusTypeDef HAL_PCD_Init(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeInit (PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspDeInit(PCD_HandleTypeDef *hpcd);



HAL_StatusTypeDef HAL_PCD_Start(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_Stop(PCD_HandleTypeDef *hpcd);
void HAL_PCD_IRQHandler(PCD_HandleTypeDef *hpcd);

void HAL_PCD_DataOutStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_DataInStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_SetupStageCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SOFCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResetCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SuspendCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResumeCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ISOOUTIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOINIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_DisconnectCallback(PCD_HandleTypeDef *hpcd);


HAL_StatusTypeDef HAL_PCD_DevConnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DevDisconnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_SetAddress(PCD_HandleTypeDef *hpcd, uint8_t address);
HAL_StatusTypeDef HAL_PCD_EP_Open(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type);
HAL_StatusTypeDef HAL_PCD_EP_Close(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Receive(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
HAL_StatusTypeDef HAL_PCD_EP_Transmit(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
uint16_t HAL_PCD_EP_GetRxCount(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_SetStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_ClrStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Flush(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_ActiveRemoteWakeup(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeActiveRemoteWakeup(PCD_HandleTypeDef *hpcd);






PCD_StateTypeDef HAL_PCD_GetState(PCD_HandleTypeDef *hpcd);
# 376 "boards/STM32F4NUCLEO/stm32f4xx_hal_conf.h" 2
# 49 "hal/f4/inc/stm32f4xx_hal.h" 2
# 151 "hal/f4/inc/stm32f4xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick (uint32_t TickPriority);


void HAL_IncTick(void);
void HAL_Delay(volatile uint32_t Delay);
uint32_t HAL_GetTick(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
void HAL_EnableDBGSleepMode(void);
void HAL_DisableDBGSleepMode(void);
void HAL_EnableDBGStopMode(void);
void HAL_DisableDBGStopMode(void);
void HAL_EnableDBGStandbyMode(void);
void HAL_DisableDBGStandbyMode(void);
void HAL_EnableCompensationCell(void);
void HAL_DisableCompensationCell(void);
# 208 "./mpconfigport.h" 2

static inline void enable_irq(mp_uint_t state) {
    __set_PRIMASK(state);
}

static inline mp_uint_t disable_irq(void) {
    mp_uint_t state = __get_PRIMASK();
    __disable_irq();
    return state;
}
# 234 "./mpconfigport.h"
# 1 "boards/STM32F4NUCLEO/mpconfigboard.h" 1
# 235 "./mpconfigport.h" 2


# 1 "/usr/include/newlib/alloca.h" 1 3
# 10 "/usr/include/newlib/alloca.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 15 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 16 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 17 "/usr/include/newlib/_ansi.h" 2 3
# 11 "/usr/include/newlib/alloca.h" 2 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 212 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int size_t;
# 324 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 15 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 12 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 13 "/usr/include/newlib/sys/_types.h" 2 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3





typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 14 "/usr/include/newlib/sys/_types.h" 2 3


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;







typedef long _fpos_t;
# 55 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 67 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 353 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 68 "/usr/include/newlib/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 16 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/usr/include/newlib/sys/reent.h" 3
struct _reent;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 91 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 115 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 179 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 285 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
# 762 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/include/newlib/alloca.h" 2 3
# 238 "./mpconfigport.h" 2
# 46 "../py/mpconfig.h" 2
# 373 "../py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(__build_class__)
Q(__class__)
Q(__doc__)
Q(__import__)
Q(__init__)
Q(__new__)
Q(__locals__)
Q(__main__)
Q(__module__)
Q(__name__)
Q(__hash__)
Q(__next__)
Q(__qualname__)
Q(__path__)
Q(__repl_print__)

Q(__file__)


Q(__bool__)
Q(__contains__)
Q(__enter__)
Q(__exit__)
Q(__len__)
Q(__iter__)
Q(__getitem__)
Q(__setitem__)
Q(__delitem__)
Q(__add__)
Q(__sub__)
Q(__repr__)
Q(__str__)





Q(__getattr__)
Q(__del__)
Q(__call__)
Q(__lt__)
Q(__gt__)
Q(__eq__)
Q(__le__)
Q(__ge__)
Q(__reversed__)
# 95 "<stdin>"
Q(micropython)
Q(bytecode)
Q(const)


Q(native)
Q(viper)
Q(uint)
Q(ptr)
Q(ptr8)
Q(ptr16)



Q(asm_thumb)
Q(label)
Q(align)
Q(data)


Q(builtins)

Q(Ellipsis)
Q(StopIteration)




Q(BaseException)
Q(ArithmeticError)
Q(AssertionError)
Q(AttributeError)
Q(BufferError)
Q(EOFError)
Q(Exception)
Q(FileExistsError)
Q(FileNotFoundError)
Q(FloatingPointError)
Q(GeneratorExit)
Q(ImportError)
Q(IndentationError)
Q(IndexError)
Q(KeyboardInterrupt)
Q(KeyError)
Q(LookupError)
Q(MemoryError)
Q(NameError)
Q(NotImplementedError)
Q(OSError)



Q(OverflowError)
Q(RuntimeError)
Q(SyntaxError)
Q(SystemExit)
Q(TypeError)
Q(UnboundLocalError)
Q(ValueError)

Q(ViperTypeError)

Q(ZeroDivisionError)

Q(UnicodeError)


Q(None)
Q(False)
Q(True)
Q(object)

Q(NoneType)


Q(OrderedDict)


Q(abs)
Q(all)
Q(any)
Q(args)

Q(array)

Q(bin)
Q({:#b})
Q(bool)

Q(bytearray)


Q(memoryview)

Q(bytes)
Q(callable)
Q(chr)
Q(classmethod)
Q(_collections)

Q(complex)
Q(real)
Q(imag)

Q(dict)
Q(dir)
Q(divmod)
Q(enumerate)
Q(eval)
Q(exec)

Q(execfile)

Q(filter)

Q(float)

Q(from_bytes)
Q(getattr)
Q(setattr)
Q(globals)
Q(hasattr)
Q(hash)
Q(hex)
Q(%#x)
Q(id)
Q(int)
Q(isinstance)
Q(issubclass)
Q(iter)
Q(len)
Q(list)
Q(locals)
Q(map)
Q(max)
Q(min)
Q(namedtuple)
Q(next)
Q(oct)
Q(%#o)
Q(open)
Q(ord)
Q(path)
Q(pow)
Q(print)
Q(range)
Q(read)
Q(repr)
Q(reversed)
Q(round)
Q(sorted)
Q(staticmethod)
Q(sum)
Q(super)
Q(str)
Q(sys)
Q(to_bytes)
Q(tuple)
Q(type)
Q(value)
Q(write)
Q(zip)







Q(sep)
Q(end)


Q(step)
Q(stop)


Q(clear)
Q(copy)
Q(fromkeys)
Q(get)
Q(items)
Q(keys)
Q(pop)
Q(popitem)
Q(setdefault)
Q(update)
Q(values)
Q(append)
Q(close)
Q(send)
Q(throw)
Q(count)
Q(extend)
Q(index)
Q(remove)
Q(insert)
Q(pop)
Q(sort)
Q(join)
Q(strip)
Q(lstrip)
Q(rstrip)
Q(format)
Q(key)
Q(reverse)
Q(add)
Q(clear)
Q(copy)
Q(pop)
Q(remove)
Q(find)
Q(rfind)
Q(rindex)
Q(split)

Q(splitlines)
Q(keepends)
Q(\n)

Q(rsplit)
Q(startswith)
Q(endswith)
Q(replace)
Q(partition)
Q(rpartition)
Q(lower)
Q(upper)
Q(isspace)
Q(isalpha)
Q(isdigit)
Q(isupper)
Q(islower)
Q(iterable)
Q(start)

Q(bound_method)
Q(closure)
Q(dict_view)
Q(function)
Q(generator)
Q(iterator)
Q(module)
Q(slice)


Q(discard)
Q(difference)
Q(difference_update)
Q(intersection)
Q(intersection_update)
Q(isdisjoint)
Q(issubset)
Q(issuperset)
Q(set)
Q(symmetric_difference)
Q(symmetric_difference_update)
Q(union)
Q(update)



Q(frozenset)



Q(math)
Q(e)
Q(pi)
Q(sqrt)
Q(pow)
Q(exp)
Q(expm1)
Q(log)
Q(log2)
Q(log10)
Q(cosh)
Q(sinh)
Q(tanh)
Q(acosh)
Q(asinh)
Q(atanh)
Q(cos)
Q(sin)
Q(tan)
Q(acos)
Q(asin)
Q(atan)
Q(atan2)
Q(ceil)
Q(copysign)
Q(fabs)
Q(fmod)
Q(floor)
Q(isfinite)
Q(isinf)
Q(isnan)
Q(trunc)
Q(modf)
Q(frexp)
Q(ldexp)
Q(degrees)
Q(radians)

Q(erf)
Q(erfc)
Q(gamma)
Q(lgamma)




Q(cmath)
Q(phase)
Q(polar)
Q(rect)
# 419 "<stdin>"
Q(mem_info)
Q(qstr_info)



Q(alloc_emergency_exception_buf)

Q(maximum recursion depth exceeded)

Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)


Q(encode)
Q(decode)
Q(utf-8)



Q(argv)
Q(byteorder)
Q(big)
Q(exit)
Q(little)



Q(stdin)
Q(stdout)
Q(stderr)

Q(buffer)

Q(version)
Q(version_info)

Q(name)

Q(implementation)

Q(maxsize)




Q(print_exception)



Q(ustruct)
Q(pack)
Q(unpack)
Q(calcsize)



Q(uctypes)
Q(struct)
Q(sizeof)
Q(addressof)
Q(bytes_at)
Q(bytearray_at)

Q(NATIVE)
Q(LITTLE_ENDIAN)
Q(BIG_ENDIAN)

Q(VOID)

Q(UINT8)
Q(INT8)
Q(UINT16)
Q(INT16)
Q(UINT32)
Q(INT32)
Q(UINT64)
Q(INT64)

Q(BFUINT8)
Q(BFINT8)
Q(BFUINT16)
Q(BFINT16)
Q(BFUINT32)
Q(BFINT32)

Q(FLOAT32)
Q(FLOAT64)

Q(ARRAY)
Q(PTR)


Q(BF_POS)
Q(BF_LEN)



Q(_io)
Q(readall)
Q(readinto)
Q(readline)
Q(readlines)
Q(seek)
Q(FileIO)
Q(TextIOWrapper)
Q(StringIO)
Q(BytesIO)
Q(getvalue)
Q(file)
Q(mode)
Q(r)
Q(encoding)



Q(gc)
Q(collect)
Q(disable)
Q(enable)
Q(isenabled)
Q(mem_free)
Q(mem_alloc)



Q(property)
Q(getter)
Q(setter)
Q(deleter)



Q(uzlib)
Q(decompress)



Q(ujson)
Q(dumps)
Q(loads)



Q(ure)
Q(compile)
Q(match)
Q(search)
Q(group)
Q(DEBUG)



Q(uheapq)
Q(heappush)
Q(heappop)
Q(heapify)



Q(uhashlib)
Q(update)
Q(digest)
Q(sha256)



Q(ubinascii)
Q(hexlify)
Q(unhexlify)
Q(a2b_base64)
Q(b2a_base64)
# 633 "<stdin>"
Q(help)
Q(pyb)
Q(unique_id)
Q(bootloader)
Q(hard_reset)
Q(info)
Q(sd_test)
Q(present)
Q(power)
Q(wfi)
Q(disable_irq)
Q(enable_irq)
Q(stop)
Q(standby)
Q(main)
Q(sync)
Q(gc)
Q(repl_info)
Q(delay)
Q(udelay)
Q(servo)
Q(pwm)
Q(read)
Q(readall)
Q(readline)
Q(write)
Q(repl_uart)
Q(time)
Q(rng)
Q(SD)
Q(SDcard)
Q(FileIO)
Q(flush)
Q(boot.py)
Q(main.py)

Q(/flash)
Q(/flash/lib)
Q(/sd)
Q(/sd/lib)
Q(millis)
Q(micros)
Q(elapsed_millis)
Q(elapsed_micros)


Q(mount)
Q(readonly)
Q(mkfs)
Q(readblocks)
Q(writeblocks)
Q(sync)
Q(count)


Q(binascii)
Q(re)
Q(zlib)
Q(json)
Q(heapq)
Q(hashlib)


Q(seek)
Q(tell)


Q(usb_mode)
Q(mode)
Q(vid)
Q(pid)
Q(hid)
Q(hid_mouse)
Q(hid_keyboard)


Q(USB_VCP)
Q(setinterrupt)
Q(isconnected)
Q(have_cdc)
Q(any)
Q(send)
Q(recv)
Q(timeout)


Q(USB_HID)
Q(any)
Q(send)
Q(recv)


Q(RTC)
Q(info)
Q(datetime)
Q(wakeup)
Q(calibration)


Q(Pin)
Q(PinAF)
Q(PinNamed)
Q(init)
Q(value)
Q(low)
Q(high)
Q(name)
Q(names)
Q(af)
Q(af_list)
Q(port)
Q(pin)
Q(gpio)
Q(mapper)
Q(dict)
Q(debug)
Q(board)
Q(cpu)
Q(af)
Q(mode)
Q(pull)
Q(index)
Q(reg)
Q(IN)
Q(OUT_PP)
Q(OUT_OD)
Q(AF_PP)
Q(AF_OD)
Q(ANALOG)
Q(PULL_NONE)
Q(PULL_UP)
Q(PULL_DOWN)


Q(LED)
Q(on)
Q(off)
Q(toggle)
Q(intensity)


Q(Switch)
Q(callback)


Q(UART)
Q(baudrate)
Q(bits)
Q(stop)
Q(parity)
Q(flow)
Q(read_buf_len)
Q(buf)
Q(len)
Q(timeout)
Q(timeout_char)
Q(init)
Q(deinit)
Q(any)
Q(writechar)
Q(readchar)
Q(readinto)
Q(sendbreak)
Q(RTS)
Q(CTS)
# 833 "<stdin>"
Q(Timer)
Q(init)
Q(deinit)
Q(channel)
Q(counter)
Q(source_freq)
Q(prescaler)
Q(period)
Q(callback)
Q(freq)
Q(mode)
Q(div)
Q(UP)
Q(DOWN)
Q(CENTER)
Q(IC)
Q(PWM)
Q(PWM_INVERTED)
Q(OC_TIMING)
Q(OC_ACTIVE)
Q(OC_INACTIVE)
Q(OC_TOGGLE)
Q(OC_FORCED_ACTIVE)
Q(OC_FORCED_INACTIVE)
Q(ENC_A)
Q(ENC_B)
Q(ENC_AB)
Q(HIGH)
Q(LOW)
Q(RISING)
Q(FALLING)
Q(BOTH)


Q(TimerChannel)
Q(pulse_width)
Q(pulse_width_percent)
Q(compare)
Q(capture)
Q(polarity)
Q(deadtime)


Q(ExtInt)
Q(pin)
Q(mode)
Q(pull)
Q(callback)
Q(line)
Q(enable)
Q(disable)
Q(swint)
Q(regs)
Q(IRQ_RISING)
Q(IRQ_FALLING)
Q(IRQ_RISING_FALLING)
Q(EVT_RISING)
Q(EVT_FALLING)
Q(EVT_RISING_FALLING)


Q(I2C)
Q(mode)
Q(addr)
Q(baudrate)
Q(gencall)
Q(data)
Q(memaddr)
Q(addr_size)
Q(timeout)
Q(init)
Q(deinit)
Q(is_ready)
Q(scan)
Q(send)
Q(recv)
Q(mem_read)
Q(mem_write)


Q(SPI)
Q(init)
Q(deinit)
Q(send)
Q(recv)
Q(send_recv)
Q(mode)
Q(baudrate)
Q(polarity)
Q(phase)
Q(dir)
Q(bits)
Q(nss)
Q(firstbit)
Q(ti)
Q(crc)
Q(MASTER)
Q(SLAVE)
Q(MSB)
Q(LSB)


Q(Accel)
Q(x)
Q(y)
Q(z)
Q(tilt)
Q(filtered_xyz)


Q(ADC)
Q(ADCAll)
Q(read_timed)
Q(read_channel)
Q(read_core_temp)
Q(read_core_vbat)
Q(read_core_vref)


Q(DAC)
Q(noise)
Q(triangle)
Q(write)
Q(write_timed)
Q(data)
Q(freq)
Q(mode)
Q(NORMAL)
Q(CIRCULAR)


Q(Servo)
Q(pulse_width)
Q(calibration)
Q(angle)
Q(speed)


Q(uos)
Q(os)
Q(/)
Q(flash)
Q(sd)
Q(sysname)
Q(nodename)
Q(release)
Q(version)
Q(machine)
Q(uname)
Q(chdir)
Q(getcwd)
Q(listdir)
Q(mkdir)
Q(rename)
Q(remove)
Q(rmdir)
Q(unlink)
Q(sep)
Q(stat)
Q(urandom)


Q(utime)
Q(time)
Q(localtime)
Q(mktime)
Q(sleep)


Q(uselect)
Q(select)
Q(poll)
Q(register)
Q(unregister)
Q(modify)


Q(input)


Q(LCD)
Q(command)
Q(contrast)
Q(light)
Q(fill)
Q(get)
Q(pixel)
Q(text)
Q(show)


Q(usocket)
Q(socket)
Q(getaddrinfo)
Q(bind)
Q(listen)
Q(accept)
Q(connect)
Q(send)
Q(recv)
Q(sendto)
Q(recvfrom)
Q(setblocking)
Q(setsockopt)
Q(settimeout)
Q(close)
Q(AF_INET)
Q(AF_INET6)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)


Q(network)
Q(route)
# 1076 "<stdin>"
Q(stm)
Q(mem)
Q(mem8)
Q(mem16)
Q(mem32)
Q(A0)
Q(A1)
Q(A10)
Q(A13)
Q(A14)
Q(A15)
Q(A2)
Q(A3)
Q(A4)
Q(A5)
Q(A6)
Q(A7)
Q(A8)
Q(A9)
Q(AF1_TIM1)
Q(AF1_TIM2)
Q(AF2_TIM3)
Q(AF2_TIM4)
Q(AF2_TIM5)
Q(AF3_TIM10)
Q(AF3_TIM11)
Q(AF3_TIM9)

Q(AF4_I2C1)
# 1140 "<stdin>"
Q(AF7_USART2)


Q(AF8_USART6)




Q(B0)
Q(B1)
Q(B10)
Q(B12)
Q(B13)
Q(B14)
Q(B15)
Q(B2)
Q(B4)
Q(B5)
Q(B6)
Q(B7)
Q(B8)
Q(B9)
Q(C0)
Q(C1)
Q(C10)
Q(C11)
Q(C12)
Q(C13)
Q(C14)
Q(C15)
Q(C2)
Q(C3)
Q(C4)
Q(C5)
Q(C6)
Q(C7)
Q(C8)
Q(C9)
Q(D2)
Q(H0)
Q(H1)
Q(LED_BLUE)
Q(LED_GREEN)
Q(LED_ORANGE)
Q(LED_RED)
Q(PA0)
Q(PA1)
Q(PA10)
Q(PA13)
Q(PA14)
Q(PA15)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PA9)
Q(PB0)
Q(PB1)
Q(PB10)
Q(PB12)
Q(PB13)
Q(PB14)
Q(PB15)
Q(PB2)
Q(PB4)
Q(PB5)
Q(PB6)
Q(PB7)
Q(PB8)
Q(PB9)
Q(PC0)
Q(PC1)
Q(PC10)
Q(PC11)
Q(PC12)
Q(PC13)
Q(PC14)
Q(PC15)
Q(PC2)
Q(PC3)
Q(PC4)
Q(PC5)
Q(PC6)
Q(PC7)
Q(PC8)
Q(PC9)
Q(PD2)
Q(PH0)
Q(PH1)
Q(SW)
Q(ADC)
Q(ADC1)
Q(ADC_CR1)
Q(ADC_CR2)
Q(ADC_DR)
Q(ADC_HTR)
Q(ADC_JDR1)
Q(ADC_JDR2)
Q(ADC_JDR3)
Q(ADC_JDR4)
Q(ADC_JOFR1)
Q(ADC_JOFR2)
Q(ADC_JOFR3)
Q(ADC_JOFR4)
Q(ADC_JSQR)
Q(ADC_LTR)
Q(ADC_SMPR1)
Q(ADC_SMPR2)
Q(ADC_SQR1)
Q(ADC_SQR2)
Q(ADC_SQR3)
Q(ADC_SR)
Q(CRC)
Q(CRC_CR)
Q(CRC_DR)
Q(CRC_IDR)
Q(DBGMCU_APB1FZ)
Q(DBGMCU_APB2FZ)
Q(DBGMCU_CR)
Q(DBGMCU_IDCODE)
Q(DMA1)
Q(DMA2)
Q(DMA_HIFCR)
Q(DMA_HISR)
Q(DMA_LIFCR)
Q(DMA_LISR)
Q(EXTI)
Q(EXTI_EMR)
Q(EXTI_FTSR)
Q(EXTI_IMR)
Q(EXTI_PR)
Q(EXTI_RTSR)
Q(EXTI_SWIER)
Q(FLASH)
Q(FLASH_ACR)
Q(FLASH_CR)
Q(FLASH_KEYR)
Q(FLASH_OPTCR)
Q(FLASH_OPTCR1)
Q(FLASH_OPTKEYR)
Q(FLASH_SR)
Q(GPIOA)
Q(GPIOB)
Q(GPIOC)
Q(GPIOD)
Q(GPIOE)
Q(GPIOH)
Q(GPIO_AFR0)
Q(GPIO_AFR1)
Q(GPIO_BSRRH)
Q(GPIO_BSRRL)
Q(GPIO_IDR)
Q(GPIO_LCKR)
Q(GPIO_MODER)
Q(GPIO_ODR)
Q(GPIO_OSPEEDR)
Q(GPIO_OTYPER)
Q(GPIO_PUPDR)
Q(I2C1)
Q(I2C2)
Q(I2C3)
Q(I2C_CCR)
Q(I2C_CR1)
Q(I2C_CR2)
Q(I2C_DR)
Q(I2C_FLTR)
Q(I2C_OAR1)
Q(I2C_OAR2)
Q(I2C_SR1)
Q(I2C_SR2)
Q(I2C_TRISE)
Q(I2S2EXT)
Q(I2S3EXT)
Q(IWDG)
Q(IWDG_KR)
Q(IWDG_PR)
Q(IWDG_RLR)
Q(IWDG_SR)
Q(PWR)
Q(PWR_CR)
Q(PWR_CSR)
Q(RCC)
Q(RCC_AHB1ENR)
Q(RCC_AHB1LPENR)
Q(RCC_AHB1RSTR)
Q(RCC_AHB2ENR)
Q(RCC_AHB2LPENR)
Q(RCC_AHB2RSTR)
Q(RCC_AHB3ENR)
Q(RCC_AHB3LPENR)
Q(RCC_AHB3RSTR)
Q(RCC_APB1ENR)
Q(RCC_APB1LPENR)
Q(RCC_APB1RSTR)
Q(RCC_APB2ENR)
Q(RCC_APB2LPENR)
Q(RCC_APB2RSTR)
Q(RCC_BDCR)
Q(RCC_CFGR)
Q(RCC_CIR)
Q(RCC_CR)
Q(RCC_PLLCFGR)
Q(RCC_PLLI2SCFGR)
Q(RCC_SSCGR)
Q(RTC)
Q(RTC_ALRMAR)
Q(RTC_ALRMBR)
Q(RTC_BKP0R)
Q(RTC_BKP10R)
Q(RTC_BKP11R)
Q(RTC_BKP12R)
Q(RTC_BKP13R)
Q(RTC_BKP14R)
Q(RTC_BKP15R)
Q(RTC_BKP16R)
Q(RTC_BKP17R)
Q(RTC_BKP18R)
Q(RTC_BKP19R)
Q(RTC_BKP1R)
Q(RTC_BKP2R)
Q(RTC_BKP3R)
Q(RTC_BKP4R)
Q(RTC_BKP5R)
Q(RTC_BKP6R)
Q(RTC_BKP7R)
Q(RTC_BKP8R)
Q(RTC_BKP9R)
Q(RTC_CALIBR)
Q(RTC_CALR)
Q(RTC_CR)
Q(RTC_DR)
Q(RTC_ISR)
Q(RTC_PRER)
Q(RTC_SHIFTR)
Q(RTC_SSR)
Q(RTC_TAFCR)
Q(RTC_TR)
Q(RTC_TSDR)
Q(RTC_TSSSR)
Q(RTC_TSTR)
Q(RTC_WPR)
Q(RTC_WUTR)
Q(SDIO)
Q(SPI1)
Q(SPI2)
Q(SPI3)
Q(SPI4)
Q(SPI_CR1)
Q(SPI_CR2)
Q(SPI_CRCPR)
Q(SPI_DR)
Q(SPI_I2SCFGR)
Q(SPI_I2SPR)
Q(SPI_RXCRCR)
Q(SPI_SR)
Q(SPI_TXCRCR)
Q(SYSCFG)
Q(SYSCFG_CMPCR)
Q(SYSCFG_EXTICR0)
Q(SYSCFG_EXTICR1)
Q(SYSCFG_EXTICR2)
Q(SYSCFG_EXTICR3)
Q(SYSCFG_MEMRMP)
Q(SYSCFG_PMC)
Q(TIM1)
Q(TIM10)
Q(TIM11)
Q(TIM2)
Q(TIM3)
Q(TIM4)
Q(TIM5)
Q(TIM9)
Q(TIM_ARR)
Q(TIM_BDTR)
Q(TIM_CCER)
Q(TIM_CCMR1)
Q(TIM_CCMR2)
Q(TIM_CCR1)
Q(TIM_CCR2)
Q(TIM_CCR3)
Q(TIM_CCR4)
Q(TIM_CNT)
Q(TIM_CR1)
Q(TIM_CR2)
Q(TIM_DCR)
Q(TIM_DIER)
Q(TIM_DMAR)
Q(TIM_EGR)
Q(TIM_OR)
Q(TIM_PSC)
Q(TIM_RCR)
Q(TIM_SMCR)
Q(TIM_SR)
Q(USART1)
Q(USART2)
Q(USART6)
Q(USART_BRR)
Q(USART_CR1)
Q(USART_CR2)
Q(USART_CR3)
Q(USART_DR)
Q(USART_GTPR)
Q(USART_SR)
Q(WWDG)
Q(WWDG_CFR)
Q(WWDG_CR)
Q(WWDG_SR)
