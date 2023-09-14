#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer.
 * @size: number of elements in the array
 * @cmp:  pointer to the function
 * @array: pointer to array
 * Return:  If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
i = -1;
if (size <= 0 || !(array) || !(cmp))
return (-1);
while (++i < size)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
