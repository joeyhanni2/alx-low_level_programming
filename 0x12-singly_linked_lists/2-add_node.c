#include <stdlib.h>
#include "lists.h"

typedef struct list
{
char *str;
int len;
struct list *next;
} list_t

/**
 * add_node - adds new node at the beginning of a list_t list.
 * @head: original linked list
 * @str: string to add to node
 * Return: address of new element or NULL if failed
 */

list_t; *add_node(list_t **head, const char *str)
{
int length = 0;

list_t *add_node = (list_t *)malloc(sizeof(list_t));
if (add_node == NULL)
{
return (NULL);

while (str[length])
	length++;
return (NULL);
}

add_node->len = length;
add_node->str = char *str;
add_node->next = *head;

return (add_node);
}
