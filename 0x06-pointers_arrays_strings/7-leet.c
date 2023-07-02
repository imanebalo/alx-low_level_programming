#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337
 * @s: the string
 */
char *leet(char *str)
{
int i, j;
char leet_char = "AEGOTL";
char leet_remplace = "436017";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 6; j++)
{
if (str[i] == leet_char[j] || str[i] == leet_char[j] + 32)
{
str[i] = leet_remplace[j];
break;
}
}
}
return str;
}
