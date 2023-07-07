#include "main.h"

/**
 * checker - checks the input number from
 * @n: number is squared and compared against base
 * @base:  number to check square root of
 * Return: value square root of number
 */

int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - return the square root
 * @n: number to check for square roots.
 * Return: square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
