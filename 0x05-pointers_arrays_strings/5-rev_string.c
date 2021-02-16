#include "holberton.h"

/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 *
 * Rerturn: Void
 */
void rev_string(char *s)
{
int len = 0;
int len2 = 0;
char tmp;

while (s[len] != '\0')
{
len++;
}
len = len - 1;
while (len2 <= len)
{
tmp = s[len2];
s[len2] = s[len];
s[len] = tmp;
len2++;
len--;
}
}
