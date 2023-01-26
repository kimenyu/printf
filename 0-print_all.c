#include "main.h"
#include <stdio.h>

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
		{"S", print_S},
		{"r", print_s_r},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", print_rot},
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
