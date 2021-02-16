#include "holberton.h"

/**
 * _strcpy - copy string
 *
 * @dest: string to be copied to
 * @src: the string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int len2 = 0;

while (src[len] != '\0')
{
len++;
}
while (len2 <= len)
{
dest[len2] = src[len2];
len2++;
}
return (dest);
}
