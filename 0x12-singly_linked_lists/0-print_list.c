#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints elements of a list_t list
 * @h: linked list to print
 * Return: num of printed nodes
 */

size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}

h = h->next;
n++;
}
return (n);
}
