#include "main.h"

/**
 * print_b - prints out an integer in binary
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_b(va_list ap)
{
	return (print_bin(va_arg(ap, unsigned int)));
}

/**
 * print_d - prints out an integer
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_d(va_list ap)
{
	return (print_int(va_arg(ap, int)));
}

/**
 * print_c - prints out a character
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_s - prints out a string
 * @ap: va_list
 *
 * Return: count of characters printed
 */
int print_s(va_list ap)
{
	return (print_str(va_arg(ap, char *)));
}
