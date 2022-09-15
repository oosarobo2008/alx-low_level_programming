#include <stdio.h>
#include "main.h"

/**
* print_numbers - function that prints all numbers from
* 0 to 9
* Return: 0
*/

void print_numbers(void)
{
int d;
for (d = 48; d < 58; d++)
{
putchar(d);
}
putchar(10);
}
