#include "main.h"

/**
 * free_grid - allocates a grid 
 * @grid: inputs grid width
 * @height: input grid height
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
