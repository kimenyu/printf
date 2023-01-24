#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/* static int total; */
	/* static unsigned char buff[1024]; */

	/* if (total & (c == '\n')) */
	/* { */
	/* 	for (i = 0; i < total; ) */
	/* } */
	return (write(1, &c, 1));
}
