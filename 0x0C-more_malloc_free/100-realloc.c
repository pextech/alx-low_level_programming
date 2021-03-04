#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory using malloc
 *
 * @ptr: old allocated memory
 * @old_size: size of ptr
 * @new_size: new allocated memory size
 *
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *old_ptr;
char *new_ptr;
unsigned int count;

old_ptr = (char *)ptr;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (ptr == NULL)
return (new_ptr);

if (new_size < old_size)
for (count = 0; count < new_size; count++)
new_ptr[count] = old_ptr[count];

if (new_size > old_size)
for (count = 0; count < old_size; count++)
new_ptr[count] = old_ptr[count];

free(ptr);
return (new_ptr);
}
