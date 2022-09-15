#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints number to 14
*
* Return: 0
*/

void more_numbers(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
putchar((y / 10) + '0');
}
putchar((y % 10) + '0');
}
putchar(10);
}
}
