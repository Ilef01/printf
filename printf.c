#include "main.h"
#include <stdarg.h>

void substitute(va_list allargs, int *charCount, char nextSymbol);

/**
 * _printf - Prints a formatted string to the standard output stream.
 * @format: The character string, that will contain zero or more directives.
 * Description: Prints a formatted string to the standard output stream.
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings)
 */
int _printf(const char *format, ...)
{
	int charCount;			 /* Number of chars printed to the screen */
	const char *formatPtr;	 /* For traversing the character string */
	char symbol, nextSymbol; /* tracks current char and the char next to it*/
	va_list allargs;

	formatPtr = format;
	charCount = 0;
	va_start(allargs, format);

	/* Print chars while substituting where necessary */
	while (*formatPtr != '\0')
	{
		symbol = *formatPtr;
		if (symbol == '%')
		{
			nextSymbol = *(formatPtr + 1);
			substitute(allargs, &charCount, nextSymbol);
			formatPtr += 2; /* Skip past the char after the % */
		}
		else
		{
			_putchar(symbol);
			charCount++;
			formatPtr += 1;
		}
	}
	va_end(allargs);

	return (charCount);
}

/**
 * substitute - Prints characters, depending on the character that came after
 *              the % sign in the format specifier.
 * @allargs: The va_list item that contains the arguments passed into _printf.
 * @charCount: The number of characters that have been printed so far.
 * @nextSymbol: The character that came after the % sign of the potential
 *              format specifier.
 * Description: Prints characters, depending on the character that came after
 *              the % sign in the format specifier.
 */
void substitute(va_list allargs, int *charCount, char nextSymbol)
{
	switch (nextSymbol)
	{
	case 'c':
		_subChar(allargs, charCount);
		break;
	case 's':
		_subStr(allargs, charCount);
		break;
	case '%':
		_putchar('%');
		(*charCount)++;
		break;
	case 'd':
		_subDecimal(allargs, charCount);
		break;
	case 'i':
		_subInt(allargs, charCount);
		break;
	case 'b':
		_subBin(allargs, charCount);
		break;
	default:
		break;
	}
}
