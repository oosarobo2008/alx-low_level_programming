#include "variadic_functions.h"
#include <stdio.h"
#include <stdarg.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be preinted.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf(" %d " , va_arg(nums, int));
if (index != (n - 1) && seperator != NULL)
printf(" %s ", separator);
}
printf("\n");
va_end(nums);
}
