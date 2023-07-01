#include "main.h"
/**
 * _strncat - Function that cocatenates two strings
 * @dest: char
 * @src: char
 * @n: 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int k = 0;
while (dest[i] != '\0')
{
i++;
}
for (k = 0; k <= n && src[j] != '\0'; k++)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
