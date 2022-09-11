#include <stdio.h>

/**
* main - Prints numbers between 00 to 89.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, e, u;
int arr[3];
for (i = 0; i < 3; i++)
{
for (e = 0; e < 3; e++)
{
for (u = 0; u < 3; u++)
{
if (i != e && e != u && u != i)
{
putchar(e);
putchar(i);
putchar(u);

}
}
}
}

putchar('\n');
return (0);
}
