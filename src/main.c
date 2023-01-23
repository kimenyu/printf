#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Print a formatted string
 * @format: format string to use
 * @...: argument list
 * Return: int
 */
int _printf(const char *format, ...)
{
	char c;
	va_list ap;

	va_start(ap, format);

	while (*format)
		switch (*format++)
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("char %c\n", c);
				break;
			default:
				continue;
		}
	return (0);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	_printf("%c", 'A');

	return (0);
}
