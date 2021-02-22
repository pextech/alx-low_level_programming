#include "holberton.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: pointer to chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
  int j, i = 0;

  while (i < 8)
    {
      j = 0;
      while (j < 8)
	{
	  _putchar(a[i][j]);
	  j++;
	}
      _putchar('\n');
      i++;
    }
}
