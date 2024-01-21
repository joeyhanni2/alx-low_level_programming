#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to assign to array
 * Return: pointer to array of chars
 */
char *create_array(unsigned int size, char c);
{
	char a;
	unsigned int i;
	if (size > 0)
	{
		a = malloc(size * sizeof(char))
			if (a == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0 ; i < size; i++)
		a[i] = c;
	return (a);
}
