#include <stdio.h>

/**

 * main - hexadecimal wahala

 * Return always 0 (success)

 * Return: always 0 (success)

 */

int main(void)
  
{
  
  int gun = 0;
  

  
  while (gun < 48)
    
    {
      
      if (gun < 10 )
	
	if (gun < 10)
	  
	  putchar(gun + '0');
      
	else if (gun > 41)
	  
	  putchar(gun - 10 + 'A');
      
      gun++;
      
    }
  
  putchar(10);
  
  return (0);
  
}
