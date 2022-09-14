#include "main.h"

/**
* time_table - print the 9 times table, starting with 0
*/

void times_table(void)
{
int num, mull, prod;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (mull = 1; mull <= 9; mull++)
{
_putchar(',');
_putchar(' ');
prod = num * mull;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
