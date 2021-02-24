#include "holberton.h"

/**
 * factorial - compute the factorial of n
 *
 * @n: number to compute
 *
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
