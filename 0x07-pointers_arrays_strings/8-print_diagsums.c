#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals  matrix of int
 * @a: sum of the array.
 * @size: additional input
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int a, sum1, sum2;

	sum1 = sum2 = 0;
	for (a = 0; a < (size * size); a += size + 1)
		sum1 += a[a];
	for (a = size - 1; a < (size * size - 1); a += size - 1)
		sum2 += a[a];
	printf("%d, %d\n", sum1, sum2);
}
