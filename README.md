# STM32yyxx
Generic STM32 HAL and LL headers

The original source is from the ST Mico Arduino library to allow including a generic header in your library that then feeds into one specific to your processor.

So, instead of "#include <stm32h7_hal_spi.h>" you woud use "#include <stm32yyxx_hal_spi.h>"

This is ideal for Arduino and any standard STM32 projects and libraries that may move to different STM32 device types.

Be sure that the processor type is defined in main.h or elsewhere, such as:

#define STM32F7xx

 - so that the compiler #ifdef statement will file the correct header for your processor.

In your code, instead of using <stm32f7xx_hal_i2c.h> as an include, you'd use <stm32yyxx_hal_i2c.h>

The compiler often doesn't like the way the original #ifelse is set up, and many that we've used have been changed to eliminate errors. You may also find redundant #include statements so the file looks correct in the editor if the #if isn't being evaluated otherwise.

Jenni O'Connor
Microtronix Intelligent Products




