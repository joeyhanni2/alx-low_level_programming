#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: list head
 * @index:  index of the node, starting at 0
 * return: pointer to nth node ,else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;

while (h < index && head != NULL)
{
head = head->next;
h++;
}
return (head);
}
