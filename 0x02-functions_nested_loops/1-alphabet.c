#include "main.h"

/**
* print_alphabet - function to print abc
* @c: is the int that will be use for argument
* Return: empty from the void function
*/

void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}

