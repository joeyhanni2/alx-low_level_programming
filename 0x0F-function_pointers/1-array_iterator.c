#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on array
 * @array: input array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i++ < size)
action(array[i]);
}
}
