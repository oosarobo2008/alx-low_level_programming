#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - array for printing a string
 * @b: number of memory
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
