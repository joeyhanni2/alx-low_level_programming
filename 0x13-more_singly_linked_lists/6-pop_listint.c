#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: head node’s data (n), 0 if list is empty
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *current, *temporary;

if (head == NULL)
return (0);
temporary = current = *head;

if (*head)
{
n = current->n;
*head = current->next;
free(temporary);
}

else
n = 0;
return (n);
}
