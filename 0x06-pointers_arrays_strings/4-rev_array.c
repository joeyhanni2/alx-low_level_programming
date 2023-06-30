#include <stdio.h>

/**
 * * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of array elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
