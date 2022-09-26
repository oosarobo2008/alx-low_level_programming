#include "main.h"

/**
* _strchr - Entry point
* @s: string pointed to
* @c: input
* Return: Alway 0
*/
char *_strchr(char *s, char c)
int i = 0;
for (; s[1] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
