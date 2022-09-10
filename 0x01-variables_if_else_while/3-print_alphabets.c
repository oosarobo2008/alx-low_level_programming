#include <stdio.h>
/**
* main - print lower and upper alphabet
* Return: Always 0 (success)
*/

int main(void)
{
char he = 'a';
char she = 'A';
for (he = 'a' ; he <= 'z'; he++)
{
putchar(he);
}
for (she = 'A' ; she <= 'Z'; she++)
{
putchar(she);
}
putchar('\n');
return (0);
}
