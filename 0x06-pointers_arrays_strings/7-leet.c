#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - Write a function that encodes a string into 1337
 * @s: the string
 * Return: str
 */
char *leet(char *str)
{
int i, j;
char a[} = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0; *(str + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == s[i])
s[i] = b[j];
}
}
return str;
}
