#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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

	if (!format) /* NULL check. */
		return (0);

	/* Print chars while substituting where necessary */
	while (*formatPtr != '\0')
	{
		symbol = *formatPtr;
		if (symbol == '%')
		{
			nextSymbol = *(formatPtr + 1);
			_substitute(allargs, &charCount, nextSymbol);
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
