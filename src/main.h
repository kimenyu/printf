#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

extern int _printf(const char *format, ...);
extern int print_all(char, va_list);
extern int print_c(va_list);
extern int print_s(va_list);
extern int _putchar(char c);

/**
 * identifier - struct that  holds a string identifier and a function pointer
 * @format: the format specifier
 * @print: pointer to the appropriate function to call
 */
typedef struct identifier
{
	char *s;
	int (*print)(va_list ap);
} identifier_t;

#endif
