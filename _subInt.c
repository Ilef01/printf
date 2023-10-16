#include "main.h"
#include <stdarg.h>

/**
 * _subInt - Prints the next character found in the va_list of
 *                  arguments provided.
 * @allargs: The va_list that contains the integer to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the integer found in the va_list of
 *              arguments provided.
 */
void _subInt(va_list allargs, int *charCount)
{
	int num = va_arg(allargs, int); /* get the number */

	/* handle the case for negative numbers */
	if (num < 0)
	{
		_putchar('-');
		(*charCount)++;
		num = -num; /* remove the minus */
	}
	if (num / 10 != 0)
		_subInt(num / 10);
	_putchar ('0' + num % 10);
}
