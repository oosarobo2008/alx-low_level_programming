#include "main.h"

/**
* main - check the code
*print_alphabet_x10 - print alphabet 10 times
*
* Return: Always 0
*/

void print_alphabet_x10(void)  /** print function */
{
char c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
