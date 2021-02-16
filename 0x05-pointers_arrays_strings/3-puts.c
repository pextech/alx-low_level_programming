#include "holberton.h"

/**
 * _puts - Prints the string
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
