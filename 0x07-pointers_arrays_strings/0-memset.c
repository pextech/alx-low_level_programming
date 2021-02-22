#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: memory getting filled
 * @b: constant byte
 * @n: number of bytes to fill in the memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int len = 0;

while (len < n)
{
*(s + len) = b;
len++;
}
return (s);
}
