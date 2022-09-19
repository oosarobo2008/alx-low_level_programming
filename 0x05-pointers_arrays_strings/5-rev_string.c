#include <stdio.h>
#include "main.h"

/**
* rev_string - prints reverse character
* @s1: input string
*
* Return: reverse string
*/

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[counter] = rev;
}
}
