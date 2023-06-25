#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: an integer
 * Return: 0 Success
 */
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
}
if (n < 0)
{
_putchar('-');
n = -n;
}
int divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}
whlie (divisor > 0)
{
int digit = n / divisor;
_putchar('0' + digit);
n %= divisor;
divisor /= 10;
}
return (0);
}
