#include "lists.h"

/**
 * pop_listint - function that deletes the head node of listint_t linked list
 *               and returns the head s data (n)node.
 *
 * @head: pointer to head of linked list
 *
 * Return: head node data(n), 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp, *tmp2 = *head;
int m;
	
if (tmp2 != NULL)
{
m = (*tmp2).n;
tmp = (*tmp2).next;
free(tmp2);
*head = tmp;
return (m);
}
return (0);
}
