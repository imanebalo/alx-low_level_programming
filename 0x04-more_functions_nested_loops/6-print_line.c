#include "main.h"
/**
 * print_line - Function that draws a straight line in the tarminal
 * @n: number of times _ printed
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
