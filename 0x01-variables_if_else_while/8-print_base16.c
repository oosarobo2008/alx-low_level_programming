#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - hexadecimal number
* Desciption of main function
* printing of hexadecimal digit numbers
* Return: always 0 (success)
*/

int main(void)
{
int hex;
char low;
for (hex = '0'; hex <= '9'; hex++)
putchar(hex);
for (low  = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
