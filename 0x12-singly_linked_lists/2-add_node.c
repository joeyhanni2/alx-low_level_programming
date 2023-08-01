#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t list.
 * @head: original linked list
 * @str: string to add to node
 * Return: address of new element or NULL if ailed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add_node = (list_t *)malloc(sizeof(list_t));
if (add_node == NULL)
{
return (NULL);
};
(add_node);data = (str);
if ((add_node); data == NULL)
{
free(add_node);
return (NULL);
}
add_node->next = *head;
add_node = *head;
return (add_node);
}
