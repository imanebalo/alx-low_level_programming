#include "main.h"
/**
 * print_triangle - Function that prints a triangle
 * followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int i, j;
if (size == 0)
{
printf ("\n");
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - i - 1)
{
printf (" ");
}
else
{
printf ("#");
}
}
printf ("\n");
}
}
