#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct list
{
char *str;
struct list *next;
} list_t;

/**
 * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: address of new element; NULL if failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
if (str == NULL)

return (NULL);
}
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);

if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;

else 
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (new_node);
}
