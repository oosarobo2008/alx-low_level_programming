#include  "main.h"

/**
* _memset - fill a block of memory
* @s: starting address
* @b: Value
* @n: number of bytes
* Return: pointer to be the memory block
*/

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
