#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
