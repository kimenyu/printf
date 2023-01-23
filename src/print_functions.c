#include "main.h"

/**
 * print_c - prints out a character
 * @ap: va_list
 *
 * Return: count of character printed
 */
int print_c (va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_s - prints out a string
 * @ap: va_list
 *
 * Return: count of characters printed
 */
int print_s(va_list ap)
{
	char *str;
	int count;

	count = 0;
	str = va_arg(ap, char *);

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
