#include <stdio.h>

/**

 * main - oya lets read from z back to a

 * Return: always 0 (success)

 */

int main(void)
  
{
  
  int bar;
  

  
  for (bar = 'z' ; bar >= 'a' ; bar--)
    
    {
      
      putchar(bar);
      
    }
  
  putchar(10);
  
  return (0);
  
}
