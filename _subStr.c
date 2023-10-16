#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _subStr - Prints the next string found in the va_list of
 *                    arguments provided.
 * @allargs: The va_list that contains the string to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the next string found in the va_list of
 *              arguments provided.
 * Return: A non-negative integer on success, a negative value otherwise.
 */
int _subStr(va_list allargs, int *charCount)
{
	int returnVal;
	char *printedStr;

	printedStr = va_arg(allargs, char *);
	returnVal = _puts(printedStr);

	if (returnVal < 0)
		return (-1);

	/* add up all chars in the string */
	(*charCount) += _strlen(printedStr);

	return (0);
}
