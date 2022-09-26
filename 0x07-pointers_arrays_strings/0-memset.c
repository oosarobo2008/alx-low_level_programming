#include  "main.h"

/**
* memset - fill a block of memory
* @s: starting address
* @b: Value
* @n: number of bytes   
* Return: return 0
*/

char *_memset(char *s, char b, unsigned int n)
int i = 0;
for (; n > 0; i++)
{
s[1] = b;
n--;
}
return (s);
}
