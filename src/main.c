#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;
	
	len1 = _printf("Printing a simple sentence\n");
	len2 = printf("Printing a simple sentence\n");

	printf("[%d, %d]", len1, len2);

	return (0);
}
