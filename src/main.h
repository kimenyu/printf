#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

extern int _printf(const char *format, ...);
extern int print_all(char, va_list);
extern int print_c(va_list);
extern int print_s(va_list);
extern int print_d(va_list);
extern int print_b(va_list);
extern int print_u(va_list);
extern int print_o(va_list);
extern int print_x(va_list);
extern int print_X(va_list);
extern int _putchar(char);
extern long count_place(long);
extern int count_printed(int);
extern int print_num(int);
extern int print_bin(unsigned int);
extern int print_uint(unsigned int);
extern int print_oct(unsigned int);
extern int print_hex(unsigned int);
extern int print_HEX(unsigned int);

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
