#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints the numbers from 1 to 100
 * followed by a new line
 * Return: 0 Success
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 = 0) && (i % 5 = 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d",i);
}
_putchar(' ');
}
_putchar('\n');
return (0);
}
