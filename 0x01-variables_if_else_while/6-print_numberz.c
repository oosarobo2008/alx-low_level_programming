#include <stdio.h>

/**
* main - print single digit of base 10
* Return: Always 0 (success)
*/

int main(void)
{
int d = 0;
while(d <= 9)
{
putchar(d);
d++;
}
putchar(10);
return (0);
}
