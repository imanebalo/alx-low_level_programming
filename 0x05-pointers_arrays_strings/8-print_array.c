#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that print n element of an array of integer
 * followed by a new line
 * @a: array
 * @n: elements of an array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n  - 1)
{
printf(", ");
}
}
printf("\n");
}
