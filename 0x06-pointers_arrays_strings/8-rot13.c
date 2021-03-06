#include "holberton.h"

/**
 * rot13 - encodes string to rot13
 *
 * @str: string to encode
 *
 * Return: str
 */
char *rot13(char *str)
{
int len = 0;

while (*(str + len) != '\0')
{
while ((*(str + len) >= 'a' && *(str + len) < 'n') ||
(*(str + len) >= 'A' && *(str + len) < 'N'))
{
*(str + len) = *(str + len) + 13;
len++;
}
if ((*(str + len) >= 'n' && *(str + len) <= 'z') ||
(*(str + len) >= 'N' && *(str + len) <= 'Z'))
{
*(str + len) = *(str + len)-13;
}
len++;
}
return (str);
}
