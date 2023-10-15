#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints a formatted string to the standard output stream.
 * @format: The character string, that will contain zero or more directives.
 * Description: Prints a formatted string to the standard output stream.
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings)
 */
int _printf(const char *format, ...)
{
	int i, charCount, formatLen;

	va_list allargs;

	charCount = 0;
	formatLen = _strlen(format);

	va_start(allargs, format);

	/* blindly print characters without substitution */
	for (i = 0; i < formatLen; i++)
	{
		_putchar(format[i]);
		charCount++;
	}

	va_end(allargs);

	return (charCount);
}
