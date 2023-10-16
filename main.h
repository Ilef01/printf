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

/* Prints the next character found in the va_list of arguments provided. */
void _subChar(va_list allargs, int *charCount);

/* Prints the next string found in the va_list of arguments provided. */
int _subStr(va_list allargs, int *charCount);

/*Prints the next integer found in the va_list of arguments provided. */
void _subDecimal(va_list allargs, int *charCount);

/*Print the next integer found in the va_list of arguments provided. */
void _subInt(va_list allargs, int *charCount);

#endif
