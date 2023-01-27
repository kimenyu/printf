#include "main.h"

/**
 * print_p - prints out an unsigned integer
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_p(va_list ap)
{
	unsigned long int i;

	i = va_arg(ap, unsigned long int);

	if (i == 0)
	{
		return (print_str("(nil)"));
	}
	else
	{
		_putchar('0');
		_putchar('x');
		return (print_addr(i) + 2);
	}
}

/**
 * print_u - prints out an unsigned integer
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_u(va_list ap)
{
	return (print_uint(va_arg(ap, unsigned int)));
}

/**
 * print_o - prints out an unsigned integer in octal
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_o(va_list ap)
{
	return (print_oct(va_arg(ap, unsigned int)));
}

/**
 * print_x - prints out an unsigned integer in hex
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_x(va_list ap)
{
	return (print_hex(va_arg(ap, unsigned int)));
}

/**
 * print_X - prints out an unsigned integer in HEX
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_X(va_list ap)
{
	return (print_HEX(va_arg(ap, unsigned int)));
}
