#include "main.h"
/**
 * print_sign - Funcion that prints the sign of a number
 * @n: is the char to be checked
 * Return: 1andprint+ if n>0,0 and print0 if n=0,-1 and print- if n<0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
