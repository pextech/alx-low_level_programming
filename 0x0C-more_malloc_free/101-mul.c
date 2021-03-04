#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks digit
 *
 * @s: string to check
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(char *s)
{
int count = 0;

while (*(s + count))
{
if (*(s + count) > '9' || *(s + count) < '0')
return (0);
count++;
}
return (1);
}

/**
 * main - prints multiple of to numbers
 *
 * @argc: number of argument
 * @argv: arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
char num1, num2;
unsigned int res;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 * num2;
printf("%d\n", res);
return (0);
}
