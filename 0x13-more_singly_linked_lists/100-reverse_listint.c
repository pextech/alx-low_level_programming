#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the pointer to a pointer to the first struct in the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

if (head == NULL || *head == NULL)
return (NULL);
for (next = (*head)->next; next; next = (*head)->next)
{
(*head)->next = prev;
prev = *head;
*head = next;
}
(*head)->next = prev;
return (*head);
}
