#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: string to search bytes of
 * @accept: bytes to check
 *
 * Return: count, offset from beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int len = 0;
int len2 = 0;

for (len2 = 0, count = 0; *(accept + len) != '\0'; len++)
{
while (*(s + len2) != '\0')
{
if (*(accept + len) == *(s + len2))
return (count + 1);
count++;
len2++;
}
}
if (*(accept + len) != *(s + len))
return (0);
return (count);
}
