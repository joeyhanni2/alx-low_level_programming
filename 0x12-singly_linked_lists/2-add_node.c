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
list_t *n node = (list_t *)malloc(sizeof(list_t))
if (n_node == NULL)
{
return (NULL);
};
n_node->data = strdup(str);
if (n_node->data == NULL)
{
free(n_node);
return (NULL);

}
n_node->next = *head;
n_node = *head
return (n_node);
}
