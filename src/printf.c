#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
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
	static bool is_specifier;

	is_specifier = false;
	va_start(ap, format);

	while (*format)
	{
		if (!is_specifier && (*format) != '%')
		{
			_putchar(*format);
			format++;
			continue;
		}
		else if (*format == '%')
		{
			is_specifier = true;
			format++;
			continue;
		}

		print_all(*format++, ap);
		is_specifier = false;
	}

	va_end(ap);
	return (0);
}

