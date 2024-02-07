#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_listint - frees a listint_t list
  * @head: list to be freed
  */

void free_listint(listint_t *head)
{
if (head == NULL)
return;
free_listint(head->next);
free(head);
}
