#include "f_pointrs.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: line numbers of arguments
 * @argv: array strings
 * Return: 0
 *
 * ./main number_of_bytes: 55
 * objdump -d -j.text -M intel main
 */

int main(int argc, char *argv[])
{
register int i, n;
char *ptr = (char *)main;

if (argc != 2)
{
printf("Error\n"), exit(1);
}
n = atoi(argv[1]);

if (n < 0)
{
printf("Error\n"), exit(2);
}

for (i = 0; i < n - 1; i++)
{
printf("%02hhx ", ptr[i]);
}

printf("%02hhx\n", ptr[i]);
return (0);
}
