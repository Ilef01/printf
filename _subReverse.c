#include "main.h"
#include <stdarg.h>

/**
 * _subReverse - Prints the reversed version of the substituted string.
 * @allargs: The va_list that contains the string to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the reversed version of the substituted string.
 * Return: 0 on success, -1 otherwise.
 */
int _subReverse(va_list allargs, int *charCount)
{
	char *str;
	int strLen, i;

	str = va_arg(allargs, char *);

	if (!str)
	{
		_puts("Expected a string, found NULL instead.");
		return (-1);
	}

	strLen = _strlen(str);

	if (strLen == 0)
		return (0);

	for (i = strLen; i >= 0; i--)
	{
		_putchar(str[i]);
		(*charCount)++;
	}

	return (0);
}
