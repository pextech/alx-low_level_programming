#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of element in array
 * @size: size of byte
 *
 * Return: memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memo;
unsigned int count;

if (nmemb == 0 || size == 0)
return (NULL);

memo = malloc(nmemb * size);
if (memo == NULL)
return (NULL);

for (count = 0; count < (nmemb * size); count++)
memo[count] = 0;
return (memo);
}
