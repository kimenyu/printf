#include <stdio.h>
#include <stdlib.h>
#include "../../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
    int len, len2;

    len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
    len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");
    fflush(stdout);
    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("My Len: %d.\n", len);
        printf("Other Len: %d.\n", len2);
        fflush(stdout);
        return (1);
    }
    return (0);
}