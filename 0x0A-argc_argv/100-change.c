#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (0);
}
count = coin_count(argv, count);
printf("%d\n", count);
return (0);
}

/**
 * coin_count - counts the min coins needed for change
 *
 * @argv: argument vector
 * @count: int to count coins
 * Return: int
 */
int coin_count(char *argv[], int count)
{
int sum = 0;

while (!(sum + 25 > atoi(argv[1])))
{
sum += 25;
count++;
}
while (!(sum + 10 > atoi(argv[1])))
{
sum += 10;
count++;
}
while (!(sum + 5 > atoi(argv[1])))
{
sum += 5;
count++;
}
while (!(sum + 2 > atoi(argv[1])))
{
sum += 2;
count++;
}
while (!(sum + 1 > atoi(argv[1])))
{
sum += 1;
count++;
}
return (count);
}
