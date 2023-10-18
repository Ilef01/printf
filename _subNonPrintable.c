#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int *_getHexRep(int ch);

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
	char *str;
	int *hexRep;
	int ch;
	int i, j, strLen;

	str = va_arg(allargs, char *);
	strLen = _strlen(str);

	for (i = 0; i < strLen; i++)
	{
		ch = str[i];
		if ((ch > 0 && ch <= 32) || ch >= 127) /* non printable chars */
		{
			_puts("\\x");
			hexRep = _getHexRep(ch);
			/* print 0 as 00 */
			if (hexRep[0] + hexRep[1] == 0)
			{
				_puts("00");
				(*charCount) += 2;
			}
			else if (hexRep[0] == 0 && hexRep != 0)
			{
				/* print single-digit numbers with a leading 0*/
				_puts("0");
				_putchar(hexRep[1]);
				(*charCount) += 2;
			}
			else
			{
				for (j = 0; j < 2; j++)
				{
					/* print double-digit numbers as-is */
					_putchar(hexRep[j]);
					(*charCount)++;
				}
			}
			free(hexRep);
		}
		else
		{
			_putchar(ch);
			(*charCount)++;
		}
	}

	return (0);
}

/**
 * _getHexRep - Returns a pointer to an integer array of size 2,
 *           that contains the hexadecimal representation of
 *           the given char.
 * @ch: The char whose hexadecimal representation to get.
 * Description: Returns a pointer to an integer array of size 2,
 *              that contains the hexadecimal representation of
 *              the given char.
 * Return: A pointer to an integer array of size 2,
 *         that contains the hexadecimal representation of
 *         the given char.
 */
int *_getHexRep(int ch)
{
	char *hex_digits;
	int *hex_remainders;
	int i, divisor, remainder;

	hex_remainders = malloc(sizeof(int) * 2);
	hex_digits = "0123456789ABCDEF";
	i = 1; /* store remainders from index 1, going backwards */
	divisor = 16;

	if (ch == 0)
	{
		hex_remainders[1] = 0;
		hex_remainders[2] = 0;
		return (hex_remainders);
	}

	/* ch to hexadecimal conversion */
	while (ch > 0)
	{
		remainder = ch % divisor;
		hex_remainders[i] = hex_digits[remainder];
		ch = ch / divisor;
		i--;
	}

	return (hex_remainders);
}
