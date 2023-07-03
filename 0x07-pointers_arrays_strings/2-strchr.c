#include "main.h"
/**
* _strchr - locates a character in a string
* @s: String
* @c: Character to search
* Return: Pointer to the first occurrence of the character c in the sring s**/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
