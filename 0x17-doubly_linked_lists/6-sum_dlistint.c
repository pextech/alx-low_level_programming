#include "lists.h"
/**
 * sum_dlistint - find the sum of the value of a doubly listy
 * @head: the header of the doubly linked list
 *
 * Return: the sum of the value of all the node
 **/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *cur = head;
int sum = 0;

while (cur)
{
sum += cur->n;
cur = cur->next;
}

return (sum);
}
