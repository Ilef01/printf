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
	int charCount;
	const char *formatPtr;
	va_list allargs;

	formatPtr = format;
	charCount = 0;

	va_start(allargs, format);

	/* blindly print characters without substitution */
	while (*formatPtr != '\0')
	{
		_putchar(*formatPtr);
		formatPtr++;
		charCount++;
	}

	va_end(allargs);

	return (charCount);
}
