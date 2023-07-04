#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets prefix substring length
 * @s: initial bytes segment
 * @accept: comparing bytes
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (accept[n] != '\0' && s[i] != accept[n])
			n++;
		if (accept[n] == '\0')
			return (i);
		i++;
	}
	return (i);
}
