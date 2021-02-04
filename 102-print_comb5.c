#include <stdio.h>

/**
 * main - program that prints all possible combinations of numbers
 * Return: 0
 */

int main(void)
{
int number = 48;
int i = 0;
int a;
int keep = 44;

while (i <= 99)
{
a = i + 1;
while (a <= 99)
{
putchar((i / 10) + number);
putchar((i % 10) + number);
putchar(32);
putchar((a / 10) + number);
putchar((a % 10) + number);
if (i != 98 || a != 99)
{
putchar(keep);
putchar(32);
}
a += 1;
}
i += 1;
}
putchar('\n');
return (0);
}
