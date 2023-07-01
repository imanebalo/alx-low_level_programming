#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: the string
 * @s2: the string
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 ==*s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
