#include "main.h"

/**
* _isupper - checks if a character is upper or not
* @c: character to be checked
* Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
