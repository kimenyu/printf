#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	void *ptr;

	ptr = malloc(1);

	_printf("Printing my number %u\n", 98);
	_printf("Printing my number %o\n", 98);
	_printf("Printing my number %x\n", 98);
	_printf("Printing my number %X\n", 98);
	_printf("Printing my number %X\n", 255);
	printf("Printing my number %X\n", 255);

	free(ptr);

	return (0);
}
