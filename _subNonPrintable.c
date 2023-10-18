#include "main.h"
#include <stdarg.h>

char *_getHex(int ch);

/**
 * _subNonPrintable - Prints the string with a custom format for 
 *                    non-printable characters.
 * @allargs: The va_list that contains the string to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the string with a custom format for 
 *              non-printable characters.
 * Return: 0 on success, -1 otherwise.
 */
int _subNonPrintable(va_list allargs, int *charCount)
{
	char *str, *hexString;
	int ch;
	int i, strLen;

	str = va_arg(allargs, char *);
	strLen = _strlen(str);

	for (i = 0; i < strLen; i++)
	{
		ch = str[i];
		if ((ch > 0 && ch <= 32) || ch >= 127)
		{
			_puts("\\x");
			hexString = _getHex(ch);
			_puts(hexString);
			(*charCount) += _strlen(hexString);
		}
		else
		{
			_putchar(ch);
			(*charCount)++;
		}
	}

	return (0);
}

char *_getHex(int ch)
{
	char *hex_digits;
	char *hex_remainders = "00";
	int i, divisor, remainder;

	i = 1;
	divisor = 16;
	hex_digits = "0123456789ABCDEF";

	while(ch > 0)
	{
		remainder = ch % divisor;
		hex_remainders[i] = hex_digits[remainder];
		ch = ch / divisor;
		i--;
	}
	return(hex_remainders);
}
