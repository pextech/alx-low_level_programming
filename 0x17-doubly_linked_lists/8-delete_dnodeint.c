#include "lists.h"
/**
 * delete_dnodeint_at_index - insert node at a given index
 * @head: the header of the doubly linked list
 * @index: the given index
 *
 * Return: 1 on success -1 otherwise
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *cur = *head;
dlistint_t *tmp;
unsigned int i = 0;

if (*head == NULL)
return (-1);
if (index == 0 && cur->next)
{
tmp = cur;
tmp->next->prev = NULL;
*head = tmp->next;
free(cur);
return (1);
}
else if (index == 0 && cur->next == NULL)
{
free(cur);
*head = NULL;
return (1);
}
while (i != index)
{
if (cur == NULL)
return (-1);
cur = cur->next;
i++;
}
if (cur->next == NULL)
{
tmp = cur;
tmp->prev->next = NULL;
free(cur);
return (1);
}
tmp = cur;
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(cur);
return (1);
}
