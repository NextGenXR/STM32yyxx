#ifndef _STM32YYXX_hal_DELAYBLOCK_H_
#define _STM32YYXX_hal_DELAYBLOCK_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef STM32H7xx
  #include "stm32h7xx_hal_delayblock.h"
#elif STM32MP1xx
  #include "stm32mp1xx_hal_delayblock.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_DELAYBLOCK_H_ */
