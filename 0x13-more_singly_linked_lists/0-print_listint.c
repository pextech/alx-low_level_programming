#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: list to print
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t count;

for (count = 0; h != NULL; count++)
{
printf("%d\n", (*h).n);
h = (*h).next;
}
return (count);
}
