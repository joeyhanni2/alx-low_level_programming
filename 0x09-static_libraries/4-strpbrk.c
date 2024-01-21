#include "main.h"

/**
 * _strpbrk - searches string for array of bytes
 * @s: string to be searched
 * @accept: array of bytes to search for
 * Return: pointer to nyte in s, NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}


	return ('\0');
}
