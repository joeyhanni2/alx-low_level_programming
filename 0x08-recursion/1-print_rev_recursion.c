#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to reverse
 * Return: 0 Always (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	s++
	_print_rev_recursions(s);
	s--;
	_putchar(*s);
}
