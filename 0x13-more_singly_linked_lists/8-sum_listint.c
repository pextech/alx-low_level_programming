#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 *
 * @head: Head of linked list
 *
 * Return: sum, sum of all data; 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
int sum;

if (head == NULL)
return (0);
for (sum = 0; head != NULL;)
{
sum += (*head).n;
head = (*head).next;
}
return (sum);
}
