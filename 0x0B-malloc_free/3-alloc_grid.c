#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that creates a two dimenstional array
 * @width: the length of the array
 * @height: the height of the array
 *
 * Return: the two dimensional array
 **/
int **alloc_grid(int width, int height)
{
int **newarray;
int i, j, k;

if (width <= 0 || height <= 0)
return (NULL);
newarray = malloc(height * sizeof(int *));
if (newarray == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
newarray[i] = malloc(width * sizeof(int));
if (newarray[i] == NULL)
{
for (j = 0 ; j <= i; j++)
free(newarray[j]);
free(newarray);
return (NULL);
}
for (k = 0; k < width; k++)
newarray[i][k] = 0;
}
return (newarray);
}
