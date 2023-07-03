#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
_putchar('-');
n *= -1;
}
x = n;
unsigned int num_digits = 0;
unsigned int temp = x;
while (temp > 0)
{
temp /= 10;
num_digits++;
}
while (num_digits > 0)
{
unsigned int divisor = 1;
for (unsigned int i = 1; i < num_digits; i++)
divisor *= 10;
unsigned int digit = x / divisor;
_putchar(digit + '0');
x %= divisor;
num_digits--;
}
}
