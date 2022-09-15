#include "main.h"
#include <stdio.h>


/**
* main - print the largest prime number
* of a number
* Return: return 0
*/

int main(void)
{
long number - 612852475143;
int x;

while (x++ < number / 2)
{
if (number % inc == 0)
{
number /= 2;
continue;
}
for (x = 3; x < number / 2; x += 2)
{
if (number % x == 0)
number /= x;
}
}
printf("%1d\n", number);
return (0);
}
