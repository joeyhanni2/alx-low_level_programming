#include "lists.h"
/**
  * listint_len -  returns num of elements in a linked list
  * @h: singly linked list to print
  * Return: number of nodes in list
  */

size_t listint_len(const listint_t *h)
{
size_t num;

for (num = 0; h; num++)
h = h->next;
return (num);
}
