#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - Print a formatted string
 * @format: format string to use
 * @...: argument list
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int is_specifier;

	is_specifier = 0;
	va_start(ap, format);

	while (*format)
	{
		if (!is_specifier && (*format) != '%')
		{
			_putchar(*format++);
			continue;
		}
		else if (*format == '%')
		{
			is_specifier = 1;
			format++;
			continue;
		}

		print_all(*format++, ap);
		is_specifier = 0;
	}

	va_end(ap);
	return (0);
}

