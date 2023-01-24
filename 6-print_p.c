#include "main.h"
#include <stdio.h>

/**
 * print_addr - prints addr
 * @num: number to be printed
 *
 * Return: nothing, void.
 */
int print_addr(unsigned long int num)
{
	unsigned int count;

	count = 0;
	count += print_hex(num);

	return (count);
}
