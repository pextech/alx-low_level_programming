#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: s1_s2 if success, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2;
char *s1_s2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (size1 = 0; s1[size1]; size1++)
;
for (size2 = 0; s2[size2]; size2++)
;
s1_s2 = malloc((size1 + size2 + 1) * sizeof(char));

if (s1_s2 == NULL)
return (NULL);

for (size1 = 0; s1[size1] != '\0'; size1++)
s1_s2[size1] = s1[size1];
for (size2 = 0; s2[size2] != '\0'; size2++, size1++)
s1_s2[size1] = s2[size2];
s1_s2[size1] = '\0';

return (s1_s2);
}
