#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string pointed to
* @c: input
* Return: Alway 0
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
