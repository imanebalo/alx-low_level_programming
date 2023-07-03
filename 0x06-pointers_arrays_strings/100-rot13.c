#include "main.h"
/**
 * rot13 - Function that encodes a string using rot13
 *@s: The string
 * Return: s
 */
char *rot13(char *s)
{
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == s[i])
{
s[i] = b[j];
break;
}
}
}
return (s);
}
