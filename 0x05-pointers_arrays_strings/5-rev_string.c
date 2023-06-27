#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: the sring
 */
void rev_string(char *s)
{
int a = 0, b, d;
char c;
while (s[a] != '\0')
{
a++;
}
d = a - 1;
for(b = 0; d >= 0 && b < d; d--, b++)
{
c = s[b];
s[b] = s[d];
s[d] = c;
}
}
