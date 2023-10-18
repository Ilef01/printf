#include <stdarg.h>
#include "main.h"

/**
 * _substitute - Prints characters, depending on the character that came after
 *              the % sign in the potential format specifier.
 * @allargs: The va_list item that contains the arguments passed into _printf.
 * @charCount: The number of characters that have been printed so far.
 * @symbol: The character that came after the % sign of the potential
 *              format specifier.
 * Description: Prints characters, depending on the character that came after
 *              the % sign in the format specifier.
 */
void _substitute(va_list allargs, int *charCount, char symbol)
{
	if (symbol == 'c')
		_subChar(allargs, charCount);
	else if (symbol == 's')
		_subStr(allargs, charCount);
	else if (symbol == '%')
		_subPercent(charCount);
	else if (symbol == 'd')
		_subDecimal(allargs, charCount);
	else if (symbol == 'i')
		_subInt(allargs, charCount);
	else if (symbol == 'b')
		_subBin(allargs, charCount);
	else if (symbol == 'r')
		_subReverse(allargs, charCount);
	else if (symbol == 'R')
		_subROT13(allargs, charCount);
	else if (symbol == 'S')
		_subNonPrintable(allargs, charCount);
	else
		_subUnknown(symbol, charCount);
}
