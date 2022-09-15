#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal line
* @n: parameter
* Return: 0
*/

void print_diagonal(int n)
{
int len, sp;
if (n > 0)
{
for (len = 0; len < n; len++)
{
for (sp = 0; sp < len; sp++)
{
putchar(' ');
}
putchar('\\');
if (len == (n - 1))
{
continue;
}
putchar('\n');
}
}
putchar('\n');
}
