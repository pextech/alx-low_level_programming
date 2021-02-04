#include <stdio.h>

/**
 * main - program that prints all possible combinations of numbers
 * Return: 0
 */

int main(void)
{
int num = 48;
int hexa = 'a';
while (num <= 57)
{
putchar(num);
num += 1;
}
while (hexa <= 'f')
{
putchar(num);
hexa++;
}
putchar('\n');
return (0);
}
