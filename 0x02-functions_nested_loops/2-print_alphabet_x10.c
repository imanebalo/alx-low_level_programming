#include "main.h"
/**
 *print_alphabet_x10 - Make alphabet x10 times
 * in lowercase
 * followed by a neww line
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
char alp_10;
int i;
for (i = 0; i < 10; i++)
{
for (alp_10 = 'a'; alp_10 <= 'z'; alp_10++)
_putchar(alp_10);
_putchar('\n');
}
}
