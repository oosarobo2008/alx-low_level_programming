#include "main.h"

/**
* print_most_numbers - prints numbers except 2 and 4
*
* Return: return 0
*/

void print_most_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
putchar(n);
)
putchar(10);
}
