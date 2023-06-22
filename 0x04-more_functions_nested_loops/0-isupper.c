#include "main.h"
/**
 * _isupper - Function that check for uppercase character
 * @c: is the char to be chack
 * Return: 1 if c is uppercase 0 else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
