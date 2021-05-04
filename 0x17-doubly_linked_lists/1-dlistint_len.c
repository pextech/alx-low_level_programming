#include "lists.h"
/**
 * dlistint_len - find number of nodes of a doulbly linked list
 * @h: the header of the doubly linked list
 *
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;

while (h)
{
len += 1;
h = h->next;
}
return (len);
}
