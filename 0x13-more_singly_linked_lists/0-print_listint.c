#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all elements of a listn_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
