#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: The string to print.
 * Description: Prints a string, followed by a new line to stdout.
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

