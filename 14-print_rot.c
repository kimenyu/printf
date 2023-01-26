#include "main.h"

/**
 * print_rot - print's a rot13'ed string
 * @ap: va_list
 *
 * Return: count of characters printed
 */
int print_rot(va_list ap)
{
char *s = va_arg(ap, char *);
int count, i, j;
char *letter = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *encode = " nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

if (s == NULL)
{
print_str("(nil)");
}

for (i = 0, count = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(letter + j) != '\0'; j++)
{
if (!(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
_putchar(s[i]);
break;
}
if (*(s + i) == *(letter + j))
{
count += _putchar(*(encode + j));
break;
}
}
}
count += _putchar('\0');

return (count);
}