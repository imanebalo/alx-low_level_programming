#include "main.h"
/**
 * puts2 - Function that prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: the string
 */
void puts2(char *str)
{
int a;
while (str[a] != '\0')
{
a++;
}
for (i = 0; i <= a - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
