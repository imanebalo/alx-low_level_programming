#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; (i < (n - 1) / 2); i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
