#include "main.h"
/**
 * print_rev - Function that prints a sring in reverse
 * followrd by a new line
 * @s: the string
 */
void print_rev(char *s)
{
int i, n;
n = 0;
while (n != '\0')
{
n++;
}
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
