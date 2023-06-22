#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if characxter isd lowercase, otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
