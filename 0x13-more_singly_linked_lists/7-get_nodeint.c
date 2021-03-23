#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list.
 *
 * @head: Head of linked list
 * @index: Nth node
 *
 * Return: Nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
size_t count = 0;

for (; tmp != NULL; count++)
tmp = (*tmp).next;
if (index >= count)
return (NULL);
for (count = 0; count < index; count++)
head = (*head).next;
return (head);
}
