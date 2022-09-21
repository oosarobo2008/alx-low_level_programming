#include "main.h"

/**
* _strcat - this is a function of strcat
* @dest: first parameter
* @src: second parameter
* Return: return string
*/

char * strcat(char *dest, char *src)
{
int len = 0, 1;
while (dest[len])
len++;
for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len += 1;
}
dest[len] = '\0';
return (dest);
}
