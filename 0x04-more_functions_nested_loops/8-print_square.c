#include <stdio.h>
/**
 * print_square - Function that a square
 * followed by a new line
 * @size: the size of square
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
}
}
