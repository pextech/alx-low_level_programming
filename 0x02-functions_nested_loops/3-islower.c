#include <stdio.h>
#include "holberton.h"
/**
 * _islower - checks the lowercase character
 *
 * @c: character to be checked
 *
 * Return: it returns 1 it is lowercase and 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
