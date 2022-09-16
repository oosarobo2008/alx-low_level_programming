#include <stdio.h?

/**
* main - program that prints either number
* or flizz or buzz or flizzbuzz
*
* Return: return 0
*/

int main(void)
{
int n = 1;
while (n <= 100)
{
if (n % 5 == 0 && n % 3 == 0)
printf("FizzBuzz ");
else if (n % 5 == 0)
{
if (n == 100)
{
printf("Buzz");
printf('\n');
}
else
printf("Buzz ");
}
else if (n % 3 == 0)
printf("Fizz ");
else
printf("%d ", n);
n++;
}
return (0);
}
