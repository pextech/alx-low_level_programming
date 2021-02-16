#include "holberton.h"

/**
 * swap_int - swaps two integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
