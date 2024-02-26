

#if defined(_RTE_)
#   include "RTE_Components.h"
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#include "SEGGER_RTT.h"

#if defined(RTE_CMSIS_Compiler_STDOUT_Custom)
/// Put a character to the stdout
/// \param[in]   ch  Character to output
/// \return the character written, or -1 on write error
int stdout_putchar (int ch)
{
    return (1 != SEGGER_RTT_Write(0, &ch, 1)) ? -1 : ch;
}
#endif

void SysTick_Handler(void)
{

}