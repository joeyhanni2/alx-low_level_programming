#include "lists.h"

/**
  * sum_listint - eturns the sum of all data of a list
  * @head: first node in list
  * Return: 0 if list is empty
  */

int sum_listint(listint_t *head)
{
int sum;

for (sum = 0; head; sum += head->n, head = head->next)
;

return (sum);
}
