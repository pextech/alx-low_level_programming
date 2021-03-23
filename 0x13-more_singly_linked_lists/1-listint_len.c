#include "lists.h"

/**
 * listint_len - function that return the number of elements in listint_t list
 *
 * @h: list of elements
 *
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t count;

for (count = 0; h != NULL; count++)
h = (*h).next;
return (count);
}
