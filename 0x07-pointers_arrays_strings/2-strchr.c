#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - points to the first occurance of a character
 *
 * @s: string to check
 * @c: character to point
 *
 * Return: s pointed to c character
 */
char *_strchr(char *s, char c)
{
int len = 0;

while (*(s + len) != '\0')
{
if (*(s + len) == c)
return ((s + len));
len++;
}
if (c == '\0')
return ((s + len));
return (NULL);
}
