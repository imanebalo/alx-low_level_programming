#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int b[n];
int i, j;
for (i = n - 1; i >= 0; i--)
{
for (j = 0; j < n; j++)
{
b[n - i -1] = a[i];
}
}
for (i = 0; i < n; i++)
{
a[i] = b[i];
}
}
