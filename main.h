#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdarg.h>

/* Prints a formatted string to the screen. */
int _printf(const char *format, ...);

/* Writes a character to the screen. */
int _putchar(char ch);

/* Returns the length of a string. */
int _strlen(const char *s);

/* Prints the provided string to the screen, without a newline at the end */
int _puts(char *s);

/*
 * Prints characters, depending on the character that came after
 * the % sign in the potential format specifier.
 */
void _substitute(va_list allargs, int *charCount, char symbol);

/* Prints the next character found in the va_list of arguments provided. */
int _subChar(va_list allargs, int *charCount);

/* Prints the next string found in the va_list of arguments provided. */
int _subStr(va_list allargs, int *charCount);

/*Prints the next integer found in the va_list of arguments provided. */
void _subDecimal(va_list allargs, int *charCount);

/*Print the next integer found in the va_list of arguments provided. */
void _subInt(va_list allargs, int *charCount);

/*
 * Print the next decimal found in the va_list of arguments provided
 * in binary.
 */
void _subBin(va_list allargs, int *charCount);

/* Prints the percent sign. */
void _subPercent(int *charCount);

/* Prints an unknown format specifier as is, with its preceding '%'sign */
int _subUnknown(char unknownSpecifier, int *charCount);

/* Prints the reversed version of the substituted string.*/
int _subReverse(va_list allargs, int *charCount);

/* Prints the rot13'ed string. */
int _subROT13(va_list allargs, int *charCount);

#endif
