#include "main.h"
#include <stdbool.h>

int _shiftChar(char ch, int n);

/**
 * _subROT13 - Prints the rot13'ed string.
 * @allargs: The va_list that contains the string to be rot13'd
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the rot13'ed string.
 * Return: 0 on success, -1 otherwise.
 */
int _subROT13(va_list allargs, int *charCount)
{
	char *str = va_arg(allargs, char *);
	int strLen, i;

	if (!str)
		return (-1);

	strLen = _strlen(str);

	for (i = 0; i < strLen; i++)
	{
		_putchar(_shiftChar(str[i], 13));
		(*charCount)++;
	}

	return (0);
}

/**
 * _shiftChar - Shifts the character n places forward in the alphabet.
 * @ch: The character to shift.
 * @n: The number of places to shift the char in the alphabet.
 * Description: Shifts the char n places forward in the alphabet.
 * Return: The character after shifting the char n places.
 */
int _shiftChar(char ch, int n)
{
	bool isUpperCase, isLowerCase, isAlphabetical;

	isUpperCase = ch >= 65 && ch <= 90;
	isLowerCase = ch >= 97 && ch <= 122;
	isAlphabetical = isUpperCase || isLowerCase;

	/* Leave non-alphabetical characters unchanged */
	if (!isAlphabetical)
		return (ch);

	/* Shift alphabetical characters while preserving case */
	if (isLowerCase)
		return  ('a' + (ch - 'a' + n) % 26);

	return ('A' + (ch - 'A' + n) % 26);
}
