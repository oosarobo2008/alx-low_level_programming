#include "main.h"

/**
* _memcpy - function that copies memory
* @dest: copy to
* @src: copy from
* @n: number of bytes
* Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
