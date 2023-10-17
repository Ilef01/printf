#include "main.h"
#include <stdarg.h>

/**
 * _subChar - Prints the next character found in the va_list of
 *                  arguments provided.
 * @allargs: The va_list that contains the char to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the next character found in the va_list of
 *              arguments provided.
 * Return: 0 on success, non-negative number otherwise.
 */
int _subChar(va_list allargs, int *charCount)
{
	_putchar(va_arg(allargs, int));
	(*charCount)++;
	return (0);
}
