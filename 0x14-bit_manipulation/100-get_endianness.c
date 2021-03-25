#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - check whether it is a little or big endian
 *
 * Return: 1 if little endian o otherwise
 **/
int get_endianness(void)
{
int i = 1;
char *checkendian;

checkendian = (char *)&i;
if (*checkendian == 1)
return (1);
return (0);
}
