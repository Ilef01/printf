#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the screen.
 * @ch: The char to write to the screen.
 * Description: Implementation of _putchar() that uses write() for printing.
 *
 * Return: 0 upon success.
 */
int _putchar(char ch)
{
	write(1, &ch, sizeof(char));
	return (0);
}
