#include "holberton.h"

/**
 * _memcpy - Copies n bytes from src to dest
 *
 * @dest: bytes copied to
 * @src: bytes copied from
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int len = 0;

while (len < n)
{
*(dest + len) = *(src + len);
len++;
}
return (dest);
}
