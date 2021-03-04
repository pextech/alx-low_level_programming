#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n number of s1 to s2
 *
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to concatenate
 *
 * Return: s1_s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s1_s2;
unsigned int size1, size2;
unsigned int count, count2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (size1 = 0; s1[size1] != '\0'; size1++)
;
for (size2 = 0; s2[size2] != '\0'; size2++)
;
if (n < size2)
size2 = n;

s1_s2 = malloc(sizeof(char) * (size1 + size2 + 1));
if (s1_s2 == NULL)
return (NULL);

for (count = 0; count < size1; count++)
s1_s2[count] = s1[count];
for (count2 = 0; count2 < size2; count2++, count++)
s1_s2[count] = s2[count2];
s1_s2[count] = '\0';

return (s1_s2);
}
