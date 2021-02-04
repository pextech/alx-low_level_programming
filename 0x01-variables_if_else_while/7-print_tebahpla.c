#include <stdio.h>

/**
 * main - this holds the program
 *
 * Return: it return a zero (0)
 */
int main(void)
{
int a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
