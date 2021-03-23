#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 *
 * @head: pointer to head of linked list
 * @index: index at which node will be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *tmp2;
size_t count;

if (head == NULL)
return (-1);

tmp = *head;
if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*tmp).next;
free(tmp);
return (1);
}
for (count = 0; count < index ; count++)
{
tmp2 = tmp;
tmp = (*tmp).next;
if (tmp == NULL)
return (-1);
}
(*tmp2).next = (*tmp).next;
free(tmp);
return (1);
}
