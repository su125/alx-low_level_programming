#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees the seconf array
 * @grid: the second grid
 * @height: the height of the dimension of grid
 * Description: frees memory of grid
 * Return: nothing
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

