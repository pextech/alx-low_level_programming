#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy string
 *
 * @str: string to copy
 *
 * Return: NULL if fail, str_cpy if success
 */
char *_strdup(char *str)
{
int size;
char *str_cpy;

if (str == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
;
size = size + 1;

str_cpy = malloc(size * sizeof(char));
if (str_cpy == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
str_cpy[size] = str[size];
str_cpy[size] = '\0';
return (str_cpy);
}
