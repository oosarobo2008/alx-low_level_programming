#include "main.h"

/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
int b;
while (*s)
{
for (h = 0; accept[h]; h++)
{
if (*s == accept[b])
return (s);
}
s++;
}
return ('\0');
}
