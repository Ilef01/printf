#include "main.h"
#include <stdarg.h>

/**
 * _subBin - Prints the next decimal found in the va_list
 *	of arguments provided converted to binary.
 * @allargs: The va_list that contains the decimal to be
 *	converted then printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the decimal found in the va_list
 *	of arguments provided in binary.
 */
void _subBin(va_list allargs, int *charCount)
{
	int decimal = va_arg(allargs, int); /* get the decimal */
	int binary[32]; /* store the binary digit up to 32 bits */
	int i = 0; /* index for the binary array */
	int j; /* index for printing the binary digits from left to right */

	/* Print 'O' for the special case of decimal 0 */
	if (decimal == 0)
	{
		_putchar('0');
		(*charCount)++;
	}
	else
	{
		/* The conversion from decimal to binary */
		while (decimal > 0)
		{
			binary[i] = decimal % 2;
			decimal /= 2;
			i++;
		}

		/* Printing the binary representation */
		for (j = i - 1; j >= 0; j--)
		{
			if (binary[j] == 0)
			{
				_putchar('0');
				(*charCount)++;
			}
			if (binary[j] == 1)
			{
				_putchar('1');
				(*charCount)++;
			}
		}
	}
}
