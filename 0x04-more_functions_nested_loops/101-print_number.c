#include <stdio.h>
#include "main.h"

/**
* print_number - prints a number
* @n: The number to print
*/

void print_number(int n)
{
 char id, cr;
  int r;
  int ct = 0;
if (n < 0)
{
putchar('-');
 id = (char)('0' - (n % 10));
 n = n / -10;
 }
 else
   {
     id = (char)((n % 10) + '0');
     n = n / 10;
   }
 r = 0;
 while (n > 0)
   {
     r = r * 10 + (n % 10);
     n = n / 10;
     ct++;
     {
       cr = (char)((r % 10 + '0');
		   _putchar(cr);
		   r = r / 10;
	   ct--;
}
while (ct != 0)
}
_putchar('0');
ct--;
}
_putchar(id)
}
