#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 *
 * @head: pointer to head of linked list
 * @idx: index of the list where the new node should be added
 * @n: integer to add
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp, *new;
size_t count = 0;

if (head == NULL)
return (NULL);
tmp = *head;

if (tmp == NULL && idx != 0)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

(*new).n = n;
if (idx == 0)
{
(*new).next = *head;
*head = new;
return (new);
}

for (idx--; count < idx; count++)
{
tmp = (*tmp).next;
if (tmp == NULL)
{
free(new);
return (NULL);
}
}
(*new).next = (*tmp).next;
(*tmp).next = new;
return (new);
}
