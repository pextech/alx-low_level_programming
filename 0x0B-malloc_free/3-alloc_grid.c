#include <stdlib.h>

/**
* alloc_grid - 2d arrays
* @width: Width
* @height: Height
* Return: grid
*/

int **alloc_grid(int width, int height)
{
int **grid, in = height;
int i;

if (width <= 0 || height <= 0)
return (0);

grid = malloc(height * sizeof(int *));
if (!grid)
return (0);

while (height-- > 0)
{
grid[height] = malloc(width * sizeof(int));
if (!grid[height])
return (0);
}
for (height = 0; height < in; height++)
for (i = 0; i < width; i++)
grid[height][i] = 0;
return (grid);
}
