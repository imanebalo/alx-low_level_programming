#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: char
 */
int _strlen(char *s)
{
int len = 0;
for (; *s++;)
{
len++;
}
return (len);
}
