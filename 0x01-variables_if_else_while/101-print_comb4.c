#include <stdio.h>
/**
*main - prints all possible different combinations ot three digits
*Return: Always 0 (Success)
*/
int main(void)
{
int i , j , k;
for(i = 48 ; i < 58 ; i++)
{
for(j = 49 ; j< 58 ; j++)
{
if(j > i && k < j)
{
putchar(i);
putchar(j);
}
if(i != 55 || j =! 56)
{
putchar(',');
putchar(' ');
}
}
}
}
