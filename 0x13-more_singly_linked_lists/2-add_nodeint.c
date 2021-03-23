#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of listint_t list
 *
 * @head: pointer to the head of  linked list.
 * @n: integer to add
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

(*new).n = n;
(*new).next = *head;
*head = new;
return (*head);
}
