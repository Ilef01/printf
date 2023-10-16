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
	int digit; /* each digit composing the number */
	char chardigit; /* the digit converted to char */
	int div = 1; /* divisor */

	/* handle the case for negative numbers */
	if (num < 0)
	{
		_putchar('-');
		(*charCount)++;
		num = -num; /* remove the minus */
	}
	while (num / div >= 10)
		div *= 10;
	while (div >= 1)
	{
		digit = (num / div) % 10; /* get the largest dogit */
		chardigit = digit + '0'; /* the conversion from int to char */
		_putchar (chardigit);
		(*charCount)++;
		div /= 10;
	}
}
