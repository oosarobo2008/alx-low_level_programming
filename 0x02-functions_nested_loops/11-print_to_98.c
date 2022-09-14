#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers to 98
* in seperate order by a comma followed by space
* @n: the number to begin counting
*/

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
