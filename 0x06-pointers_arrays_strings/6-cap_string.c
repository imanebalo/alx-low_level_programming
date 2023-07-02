#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @str: the string
 * Return: src
 */
char *cap_string(char *src)
{
int n = 0;
int i;
while (src[n] != '\0')
{
n++;
}
for (i = 0; i < n; i++)
{
if (i == 0 || src[i - 1] == ' ' || src[i - 1] == '\n' || src[i - 1] == '\t' || src[i - 1] == ',' || src[i - 1] == ';' || src[i - 1] == '.' || src[i - 1] == '!' || src[i - 1] == '?' || src[i - 1] == '"' || src[i - 1] == '(' || src[i - 1] == ')' || src[i - 1] == '{' || src[i - 1] == '}')
{
src[i] = src[i] - 32;
}
}
return (src);
}
