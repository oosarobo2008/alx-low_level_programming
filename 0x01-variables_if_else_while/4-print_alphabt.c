#include <stdio.h>
/**
* main - write the whole alphabet for small letters except q and e
* Return: Always 0 (success)
*/

int main(void)
{
char mumu = 'a';
while (mumu <= 'z' && mumu  != 'e' && mumu != 'q')
while (mumu <= 'z')
{
if (mumu != 'e' && mumu != 'q')
{
putchar(mumu);
}
mumu++;
}
putchar('\n');
return (0);
}
