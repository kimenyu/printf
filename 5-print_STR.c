#include "main.h"

/**
 * print_STR - prints a string and unprintable characters
 * @str: string to print
 *
 * Return: int, number of characters printed
 */
int print_STR(char *str)
{
	int count;

	count = 0;

	while (str[count])
	{
		if ((str[count] > 0 && str[count] < 32) || (str[count] >= 127))
		{
			_putchar('\\');
			_putchar('x');

			if (str[count] < 16)
				_putchar('0');

			print_HEX(str[count++]);
			continue;
		}
		_putchar(str[count++]);
	}
	return (count + 3);
}
