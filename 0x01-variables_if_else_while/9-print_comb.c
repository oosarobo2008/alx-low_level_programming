#include <stdio.h>

/**
* main -print single digit numbers with commas
* Description of the main function
* This programm prints single number digits with commas from 0 to 9
* Return: Always 0 (success)
*/

int main(void)
{
int dn;
for (dn = 48; dn <= 57; dn++)
{
putchar(dn);
if (dn != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
