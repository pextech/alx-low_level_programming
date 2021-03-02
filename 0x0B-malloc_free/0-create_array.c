#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array size of @size character
 *
 * @size: size of array
 * @c: character
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
unsigned int count = 0;
char *str;

str = malloc(size * sizeof(c));
if (size == 0)
return (NULL);
if (str != NULL)
{
while (count < size)
{
str[count] = c;
count++;
}
}
return (str);
}
