#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * _print_c - Print a char
 * @format: format string to use
 * Return: int
 */
int _print_c()
{
	return (0);
}

/**
 * _printf - Print a formatted string
 * @format: format string to use
 * @...: argument list
 * Return: int
 */
int _printf(const char *format, ...)
{
	char c;
	char *s;
	va_list ap;
	static bool is_specifier;

	is_specifier = false;
	va_start(ap, format);

	while (*format)
	{
		if (!is_specifier && (*format) != '%')
		{
			printf("%c", *format);
			format++;
			continue;
		}
		else if (*format == '%')
		{
			is_specifier = true;
			format++;
			continue;
		}

		switch (*format++)
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				is_specifier = false;
				break;
			case 's':
				{
					s = va_arg(ap, char*);
					printf("%s", s);
					is_specifier = false;
					break;
				}
			default:
				continue;
		}
	}
	return (0);
}

