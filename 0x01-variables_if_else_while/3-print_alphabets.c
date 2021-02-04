#include <stdio.h>

/**
 * main - This is the main function
 * Description: Prints out the alphabet in lowercase and in uppercase
 * Return: The function returns 0
 */
int main(void)
{
char c1, c2;

for (c1 = 'x'; c1 <= 'y'; c1++)
{
putchar(c1);
}
for (c2 = 'X'; c2 <= 'Y'; c2++)
{
putchar(c2);
}
putchar(10);
return (0);
}
