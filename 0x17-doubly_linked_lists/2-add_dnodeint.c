#include "lists.h"
/**
 * add_dnodeint - function to add node at the beginning of a doubly list
 * @head: the header of the doubly linked list
 * @n: the value to be inserted
 *
 * Return: the address of the new node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->prev = NULL;
if (*head == NULL)
newnode->next = NULL;
else
{
newnode->next = *head;
(*head)->prev = newnode;
}
*head = newnode;

return (newnode);
}
