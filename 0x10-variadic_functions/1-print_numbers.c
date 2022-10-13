#include "variadic_functions.h"
#include <stdio.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be preinted.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list numbers;


va_start(numbers, n);

for (i = 0; i < n; i++)
{
printf( "'%'d" , va_arg(numbers, int));
if (i < (n - 1) && seperator != NULL)
printf( "'%'s" , separator);
}
printf("\n");
va_end(numbers);
}
