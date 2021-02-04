#include <stdio.h>
/**
 * main - This is the main function
 * Description: this program Prints out the alphabet in lowercase
 * Return: The function returns 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar(10);
return (0);
}
