#include "main.h"

/**
 * print_all - prints parameters
 * @c: identifer, string
 * @ap: list of parameters, va_list
 *
 * Return: number of characters printed
 */
int print_all(char c, va_list ap)
{
	int count, i;
	identifier_t ids[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	i = 0, count = 0;

	while (ids[i].s)
	{
		if (*ids[i].s == c)
			count = ids[i].print(ap);
		i++;
	}
	
	return (count);
}
