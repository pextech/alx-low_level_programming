#include "lists.h"
#include <string.h>
#include <stdarg.h>
/**
 * add_node- function that add a node at the begnining
 * @head: the pointer to pointer that points to the head of a list
 * @str: the string to be given to the crated node
 *
 * Return: the address of the new element
 **/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *value;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
value = strdup(str);
if (value == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = value;
new_node->len = _strlength(value);
new_node->next = *head;
*head = new_node;
return (new_node);
}
/**
 * _strlength - function that finds the length of a string
 * @str: the given string
 *
 * Return: the length of a string
 **/
int _strlength(char *str)
{
int len, i;

len = 0;
i = 0;
while (str[i])
{
len++;
i++;
}
return (len);
}
