#include <stdio.h>
#include "main.h"

/**
* rev_string - prints reverse string characters
* @s: validate the character
* Return: Always 0
*/

void rev_string(char *s)
{
int counter = 0, a = 0, Aux;

while (s[counter] != '\0')
{
counter++;
}
counter--;
while  (counter > a)
{
Aux = s[counter];
s[counter--] = s[a];
s[a++] = Aux;
}
}
