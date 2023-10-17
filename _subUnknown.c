#include "main.h"

/**
 * _subUnknown - Prints an unknown format specifier as-is, along with the
 *               % sign that preceeded it.
 * @unknownSpecifier: The unknown format specifier to print out.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints an unknown format specifier as-is, along with the
 *              % sign that preceeded it.
 * Return: 0 on success.
 */
int _subUnknown(char unknownSpecifier, int *charCount)
{
	_putchar('%');
	_putchar(unknownSpecifier);
	(*charCount) += 2;
	return (0);
}
