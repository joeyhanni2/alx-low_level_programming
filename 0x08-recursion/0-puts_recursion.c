#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 *  @s: string to print
 *  Return: 0 Always (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
