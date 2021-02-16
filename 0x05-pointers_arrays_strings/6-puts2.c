include "holberton.h"

/**
 * puts2 - prints every other character
 *
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int len = 0;

while (str[len] != '\0')
{
if (len % 2 == 0)
{
_putchar(str[len]);
}
len++;
}
_putchar('\n');
}
