#include "main.h"
/**
 * string_toupper - Function that changes all lowercases letter of
 * a string to appercase
 * @str: the string
 */
char *string_toupper(char *str)
{
int i;
int n = 0;
while (str[n] != '\0')
{
n++;
}
for (i = 0; i < n; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
