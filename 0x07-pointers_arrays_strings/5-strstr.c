#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locate a substring
 *
 * @haystack: string to check
 * @needle: substring
 *
 * Return: substring or NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
int len, len2;
int count = 0;

if (*(needle + count) == '\0')
return (haystack);
for (len = 0; *(haystack + len) != '\0'; len++)
{
len2 = 0;
while (*(needle + len2) != '\0')
{
if (*(haystack + len) != *(needle + len2))
break;
if (*(needle + len2 + 1) != '\0')
{
len++;
len2++;
count++
}
else
return ((haystack + len - count));
}
}
return (NULL);
}
