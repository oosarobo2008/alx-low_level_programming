#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print double digit numbers
* Description: print two digit numbers with commas
* Return: Always 0 (Success)
*/

int main(void)
{
int d;
for (d = 0; d = 100; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
