#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created
 * @grid: input pointer to grid or 2D array
 * @height: height of 2D arrray
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
