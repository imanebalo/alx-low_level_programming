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
_putchar(45);
_putchar(n);
}
else if (n > 0)
{
_putchar(n);
}
return (0);
}
