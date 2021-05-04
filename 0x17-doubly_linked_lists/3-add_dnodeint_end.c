#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a doubly list
 * @head: the header of the doubly linked list
 * @n: the value to be inserted
 *
 * Return: the address of the new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL;
dlistint_t *cur = *head;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
}
else
{
while (cur->next)
cur = cur->next;
newnode->prev = cur;
cur->next = newnode;
}

return (newnode);
}
