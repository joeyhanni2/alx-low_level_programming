#include "main.h"

/**
 * _factorial.c - function returns factorial of given number
 *  @n: given number
 *  Return:factorial of the number n
 */

int factorial(int n)
{
if (n < 0)

return (-1);

else if (n <= 1)

return (1);

return (n * factorial(n - 1));
}
