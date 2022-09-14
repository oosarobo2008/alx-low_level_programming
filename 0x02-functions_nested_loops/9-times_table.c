#include "main.h"

/**
* time_table - print the 9 times table, starting with 0
*/

void time_table(void)
{
int num, null, prod;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (null = 1; null <= 9; null++)
{
_putchar(',');
_putchar(' ');
prod = num * null;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
