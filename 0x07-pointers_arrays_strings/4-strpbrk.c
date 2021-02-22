#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - search for any seto of bytes
 *
 * @s: string to search
 * @accept: bytes to be searched
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int len, len2;

for (len = 0; *(s + len) != '\0'; len++)
{
len2 = 0;
while (*(accept + len2) != '\0')
{
if (*(s + len) == *(accept + len2))
return ((s + len));
len2++;
}
}
return (NULL);
}
