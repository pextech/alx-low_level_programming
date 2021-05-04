#include "lists.h"
/**
 * free_dlistint - free memory allocated for doubly linked list
 * @head: the header of the doubly linked list
 *
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
