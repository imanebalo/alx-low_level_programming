#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
unsigned int x;
unsigned int num_digits = 0;
unsigned int divisor = 1;
unsigned int i;
unsigned int digit = x / divisor;
if (n < 0)
{
_putchar('-');
n *= -1;
}
x = n;
while (x > 0)
{
x /= 10;
num_digits++;
}
while (num_digits > 0)
{
for (i = 1; i < num_digits; i++)
{
divisor *= 10;
}
_putchar(digit + '0');
x %= divisor;
num_digits--;
}
}
