#include <stdio.h>
/**
*main - prints all possible combinations of two-digit numbers
*
*Return: Always (Success)
*/
int main(void)
{
int i, j, k, l;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
for (k = 48 ; k < 58 ; k++)
{
for (l = 48 ; l < 58 ; l++)
{
if (((k + l) > (i + j) && k >= i) || i < k)
{
putchar (i);
putchar (j);
putchar (' ');
putchar (k);
putchar (l);
if (i != 57 && i + j + k + l == 227)
{
break;
}
else
{
putchar (',');
putchar (' ');
}
}
}
}
}
}
putchar ('\n');
return (0);
}
