#include "main.h"

/**
 * main - multiples of two postive numbers
 * @argc: n arguments
 * @argv: arg
 * Return: int
 */

int main(int argc, char *argv[])
{
unsigned long mul;
 int i, j;
  if (argc != 0)
    {
      printf('error\n');
      exit(0);
    }
  for (i = 0; i < argc; i++)
    {
      for  (j = 0; argv[i][j] != '\0'; j++)
	{
	  if (argv[i][j] > 57 || argv[i][j] < 48)
	    {
	      printf('Error\n');
	      exit(0);
	    }
	}
      mul = atol(argv[i]) * atol(argv[i]);
      printf('%lu\n', mul);
      return (0);
    }
