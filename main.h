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
void _puts(char *s);

/* Prints the next character found in the va_list of arguments provided. */
void _subChar(va_list allargs, int *charCount);

/* Prints the next string found in the va_list of arguments provided. */
void _subStr(va_list allargs, int *charCount);

#endif
