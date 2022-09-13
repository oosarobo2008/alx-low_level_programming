#include "main.h"

/**
*Main -Function
* main - uses the functions declared via the arguments passed
* Description: prints putchar
* Return: always zero or something else passed
*/

int main(void)

{
char te[9] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{

putchar(te[i]);
}
  
putchar('\n');
return (0);
}
