#include "main.h"
/**
 * _atoi - Function that convert a string to an integer
 * @s: string
 * Return: a
 */
int _atoi(char *s)
{
int i = 0;
unsigned int a = 0;
int min = 1;
int b = 0;
while (s[i])
{
if (s[i] == 45)
{
min *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
b = 1;
a = (a * 10) + (s[i] - '0');
i++;
}
if (b == 1)
{
break;
}
i++;
}
a *= min;
return (a);
}
