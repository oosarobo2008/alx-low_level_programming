#include <stdio.h>
/**
* main - lower letters
* Return: always 0 (success)
*/
int main(void)
{
char henry = 'a';
while (henry <= 'z')
{
putchar(henry);
henry++;
}
putchar(10);
return (0);  
}
