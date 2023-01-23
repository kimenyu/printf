#include "main.h"
#include <stdio.h>

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
	count += _putchar((n / place) + '0');

	if (n % place < place / 10)
		count += _putchar('0');

	place /= 10;

	if (place > 1)
		count += print_num(n % place);

	return (count);
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
