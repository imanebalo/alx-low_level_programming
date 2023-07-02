#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @src: the string
 * Return: src
 */
char *cap_string(char *src)
{
int i = 0, j;
char a[] = " \t\n,;.!?\"(){}";
while (*(src + i))
{
if (*(src + i) >= 'a' && *(src + i) <= 'z')
{
if (i == 0)
*(src + i) -= 'a' - 'A';
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(src + i - 1))
*(src + i) -= 'a' - 'A';
}
}
}
i++;
}
return (src);
}
