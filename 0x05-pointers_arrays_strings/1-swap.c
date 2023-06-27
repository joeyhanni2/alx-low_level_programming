#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: First value to swap.
 * @b: Second value to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
