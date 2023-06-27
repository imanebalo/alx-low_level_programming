#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: the sring
 */
void rev_string(char *s)
{
int a, b;
char c;
while (s[a] != '\0')
{
a++;
}
for (b = 0; (a - 1) >= 0 && b < c; c--, b++)
{
c = s[b];
s[b] = s[a-1];
s[a-1] = c;
}
}
