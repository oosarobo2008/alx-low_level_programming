#include <stdio,h>
#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size parameter of a triangle
* Return: return 0
*/

void print_triangle(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
for ((y = size - x); y > 0; y--)
{
putchar(' ');
}
for (y = 0; y < x; y++)
{
putchar('#');
}
if (x == size)
{
continue;
}
putchar('\n');
}
}
}
