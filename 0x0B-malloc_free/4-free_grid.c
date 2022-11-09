#include "main.h"
/**
 * free_grid - allocated a grid
 * @grid: takes the width of the grid
 * @height: height of the grid
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
