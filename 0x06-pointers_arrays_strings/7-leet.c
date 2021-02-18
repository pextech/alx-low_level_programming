#include "holberton.h"

/**
 * leet - encode string into 1337
 *
 * @str: string to encode
 *
 * Return: str
 */
char *leet(char *str)
{
int len = 0;
int len2 = 0;
char lett[] = "aAeEoOtTlL";
char num[] = "4433007711";

while (*(str + len) != '\0')
{
while (*(lett + len2) != '\0')
{
if (*(str + len) == *(lett + len2))
{
*(str + len) = *(num + len2);
}
len2++;
}
len2 = 0;
len++;
}
return (str);
}
