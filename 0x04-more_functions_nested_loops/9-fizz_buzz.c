#include <stdio.h?

/**
* main - program that prints either number
* or flizz or buzz or flizzbuzz
*
* Return: return 0
*/

int main(void)
{
int num = 1;
while (num++ < 100)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("flizzBuzz ");
}
else if ((num % 3) == 0)
{
printf("flizz ");
}
else if ((num % 5) == 0)
{
if (num != 100)
{
printf("Buzz ");
}
else
{
printf("Buzz ");
}
}
}
}
