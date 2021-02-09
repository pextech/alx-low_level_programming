#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times using holberton.c
 * followed by a new line
 *
 * Return: Void function
 */

void print_alphabet_x10(void)
{
int loopBody = 1;
char a;

while (loopBody <= 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
loopBody++;
}
}
