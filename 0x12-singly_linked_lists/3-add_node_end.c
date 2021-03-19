#include "lists.h"
#include <string.h>
#include <stdarg.h>
/**
 * add_node_end - function that add a node at the end
 * @str: the given string value to be given to the new node
 * @head: pointer to pointer that points to the head of the linked list
 *
 * Return: the address of the new element
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last;
char *value;

value = strdup(str);
new_node = malloc(sizeof(size_t));
if (new_node == NULL)
return (NULL);
if (value == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = value;
new_node->len = _strlength(value);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new_node;
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
