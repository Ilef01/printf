#include "main.h"
#include <stdarg.h>

/**
 * _subDecimal - Prints the next character found in the va_list of
 *                  arguments provided.
 * @allargs: The va_list that contains the integer to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the integer found in the va_list of
 *              arguments provided.
 */
void _subDecimal(va_list allargs, int *charCount)
{
	char integer;

	integer = va_arg(allargs, int) + '0';
	_putchar(integer);
	(*charCount)++;
}
