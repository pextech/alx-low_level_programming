#include "holberton.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
len = len - 1;
while (len >= 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
