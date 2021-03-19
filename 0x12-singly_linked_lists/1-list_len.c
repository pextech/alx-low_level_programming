#include "lists.h"
/**
 * list_len - function that finds the number of elements in a linked list
 * @h: the head of the linked list
 *
 * Return: the number of elements of a linked list
 **/
size_t list_len(const list_t *h)
{
size_t len;

len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
