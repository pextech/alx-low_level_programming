#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory
 *
 * Return: memory
 */
void *malloc_checked(unsigned int b)
{
void *memo;

memo = malloc(b);
if (memo == NULL)
exit(98);
return (memo);
}
