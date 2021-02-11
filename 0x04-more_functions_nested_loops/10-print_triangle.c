#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: number of # and rows
 *
 * Return: no return
 */
void print_triangle(int size)
{
int a, b, c, col;

columns = size - 1;

if (length > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < col; b++)
{
_putchar(' ');
}
columns--;
for (c = 0; c < (a + 1); c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else if (length <= 0)
{
_putchar('\n');
}
}
