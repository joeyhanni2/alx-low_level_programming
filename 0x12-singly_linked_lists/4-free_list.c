#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
} list_t;
/**
 * free_list - frees a list_t list
 * @head: head of linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *current = head;
list_t *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
