#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listnt_list and sets the head to NULL
 * @head: pointer to head of list freed
 */

void free_listint2(listint_t **head)
{
listint_t *temporary, *current;

if (head == NULL || *head == NULL)
return;

current = *head;

while (current != NULL)
{
temporary = current;
current = current->next;
free(temporary);
}
*head = NULL;
}
