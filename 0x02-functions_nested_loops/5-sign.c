#include "holberton.h"
/**
 * print_sign - prints the sign of a number whether positive, negative or zero.
 * @n: the number to be checked.
 * Return: 1 if positive' -1 if negative, 0 if zero or anything else
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('-');
return ('/');
}
}
