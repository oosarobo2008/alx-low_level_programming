#include "main.h"

/**
* memcpy - function that copies memory
* @dest: copy to
* @src: copy from
* @n: number of bytes
* Return: return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[1] = src[1];
return (dest);
}
