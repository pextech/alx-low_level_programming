#include "lists.h"
#include <stdio.h>
/**
 * print_list - fucntion to print elements of a single linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
size_t len;

len = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%i] %s\n", h->len, h->str);
h = h->next;
len++;
}
return (len);
}
