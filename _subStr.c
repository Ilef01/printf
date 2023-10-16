#include "main.h"
#include <stdarg.h>

/**
 * subStr - Prints the next string found in the va_list of
 *                    arguments provided.
 * @allargs: The va_list that contains the string to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the next string found in the va_list of
 *              arguments provided.
 */
void _subStr(va_list allargs, int *charCount)
{
	char *printedStr;

	printedStr = va_arg(allargs, char *);
	_puts(printedStr);
	/* add up all chars in the string */
	(*charCount) += _strlen(printedStr);
}
