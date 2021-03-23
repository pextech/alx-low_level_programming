#include "lists.h"

/**
 * free_listint - function that frees a linked list
 *
 * @head: List to free.
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = (*head).next;
free(head);
head = tmp;
}
}
