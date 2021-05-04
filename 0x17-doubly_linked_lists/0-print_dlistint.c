#include "lists.h"
/**
 * print_dlistint - function to print doubly linked list
 * @h: the header of the doubly linked list
 *
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t len = 0;

while (h)
{
printf("%d\n", h->n);
len += 1;
h = h->next;
}
return (len);
}
