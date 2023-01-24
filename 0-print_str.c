#include "main.h"

/**
 * print_str - prints a string
 * @str: string to print
 *
 * Return: int, number of characters printed
 */
int print_str(char *str)
{
	int count;

	count = 0;

	while (str[count])
		_putchar(str[count++]);

	return (count);
}
