#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: the header of the doubly linked list
 * @idx: the given index
 * @n: the value of the new node
 *
 * Return: the address of the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode = NULL;
dlistint_t *cur = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));
while (i != (idx - 1))
{
if (cur == NULL)
return (NULL);
cur = cur->next;
i++;
}
if (cur->next == NULL)
return (add_dnodeint_end(h, n));

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = cur->next;
newnode->prev = cur;
cur->next->prev = newnode;
cur->next = newnode;

return (newnode);
}
