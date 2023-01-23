#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	_printf("This is a simple sentence\n");
	_printf("My first name character is %c.\n", 'N');
	_printf("My name is %s.\n", "Nelson II");
	_printf("My first name is %s, my second name is %s.\n", "Nelson II", "Sp3rtah");
	_printf("My name is %r.\n", "Nelson II");
	_printf("Printing my number %d\n", 4020);
	_printf("Printing my number %d\n", 001);
	_printf("Printing my number %d\n", INT_MIN);
	printf("Printing my number %d\n", INT_MIN);
	_printf("Printing my number %d\n", INT_MAX);
	printf("Printing my number %d\n", INT_MAX);

	return (0);
}
