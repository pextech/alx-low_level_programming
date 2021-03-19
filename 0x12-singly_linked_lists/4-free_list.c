#include "lists.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * free_list - function that frees the linked list
 * @head: the head of the linked list
 *
 * Return: return nothing
 **/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
if (head->str != NULL)
free(head->str);
free(head);
head = temp;
}
}
