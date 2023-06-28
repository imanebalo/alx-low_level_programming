#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * followed by a new line
 */
void puts_half(char *str)
{
int i, length_of_the_string, c, n;
while (str[length_of_the_string] != '\0')
{
length_of_the_string++;
}
c = length_of_the_string - 1;
n = c / 2;
for (i = 0; i <= n; i++)
{
_putchar(str[i]);
}
if (length_of_the_string % 2 != 0)
{
for (i = n; i <= c; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
