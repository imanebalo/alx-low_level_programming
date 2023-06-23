#include "main.h"
/**
 * more_numbers - Function thatprint 10 time the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
char i, j;
for (i = 0; i < 11; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j);
}
_putchar('\n');
}
_putchar('\n');
}
