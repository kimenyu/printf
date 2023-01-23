#include "main.h"

/**
 * _printnum - prints number
 * @n: number to be printed
 *
 * Return: nothing, void.
 */
int print_num(int n)
{
	int place, count;

	count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = n * -1;
	}

	place = count_place(n);

	_putchar((n / place) + '0');
	count++;

	if (place > 1)
	{
		if (n % place >= place / 10)
		{
			print_num(n % place);
		}
		else
		{
			_putchar('0');
			count++;
			place = place / 10;
			print_num(n % place);
		}
	}

	return (count);
}

/**
 * count_printed - finds the number of character printed
 * @n: int
 *
 * Return: number of characters printed
 */
int count_printed(int n)
{
	if (n < 10)
		return (1);
	return (1 + count_printed(n / 10));
}

/**
 * count_place - finds the decimal places in the number
 * @n: int, number to find decimal places for
 *
 * Return: number of places in the number
 */
int count_place(int n)
{
	if (n < 10)
		return (1);
	return (10 * count_place(n / 10));
}
