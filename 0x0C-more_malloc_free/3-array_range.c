#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an integer array containing values from min to max
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 */
int *array_range(int min, int max)
{
int *array;
int count;

if (min > max)
return (NULL);

array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
return (NULL);

for (count = 0; min <= max; count++, min++)
array[count] = min;
return (array);
}
