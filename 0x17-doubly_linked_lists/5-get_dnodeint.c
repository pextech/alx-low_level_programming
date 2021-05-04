#include "lists.h"
/**
 * get_dnodeint_at_index - find node at a given index
 * @head: the header of the doubly linked list
 * @index: the index of the node
 *
 * Return: the nth node at index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *cur = head;
unsigned int i = 0;

while (i != index)
{
if (cur == NULL)
return (NULL);
cur = cur->next;
i++;
}

return (cur);
}
