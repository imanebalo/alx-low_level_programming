#include <stdio.h>
/**
 * print_numbers - Function that prints the numbers from 0 to 9
 * followed by a new line
 * Return: 0 Success
 */
void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('/n');
return (0);
}
