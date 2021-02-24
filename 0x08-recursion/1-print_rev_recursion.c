#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
s++;
_print_rev_recursion(s);
_putchar(*(s - 1));
}
