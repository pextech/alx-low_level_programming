#include "holberton.h"

/**
 * _strlen - compute length of a string
 *
 * @s: string
 *
 * Return: len length of string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
