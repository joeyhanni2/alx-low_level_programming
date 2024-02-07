#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to first node on list
 * Return: 0 if list is empty
 *
 */
int sum_listint(listint_t *head)
{
int sum = 0;

for (; head; sum += head->n, head = head->next)
;

return (sum);
}
