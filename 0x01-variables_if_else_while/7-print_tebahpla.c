#include <stdio.h>

/**
* main - Reversing the alphabet from z to a
* Return: always 0 (success)
*/

int main(void)
{
int rev;
for (rev = 'z' ; rev >= 'a' ; rev--)
{
putchar(rev);
}
putchar(10);
return (0);
}
