#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - create array of  chars
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array,Null if size is 0
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size > 0)
{
str = malloc(sizeof(char));
if (str == NULL)
return (NULL);
}
else
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
