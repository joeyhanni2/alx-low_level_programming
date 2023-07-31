#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns num of elements in a linked list_t list
 * @h: a linked list
 * Return:num of elements of a list
 */
size_t list_len(const list_t *h)
{
size t n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
