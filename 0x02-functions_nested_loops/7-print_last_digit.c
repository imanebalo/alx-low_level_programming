#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @num: is the number that prints the last digit
 * Return: Value of the last digit
 */
int print_last_digit(int num)
{
int last;
if (num < 0)
{
num = -num;
}
last = num % 10;
if (last < 0)
{
last = -last;
}
_putchar(last + '0');
return (last);
}
