#include "main.h"
#include <stddef.h>

/**
 * _puts - Prints a string, followed by a new line.
 * @str: The string to print.
 * Description: Prints a string to stdout.
 *              Does not print a new line at the end of the string.
 * Return: A non-negative int on success, -1 on error.
 */
int _puts(char *str)
{
	int i, len;

	if (str == NULL)
		return (-1);

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
