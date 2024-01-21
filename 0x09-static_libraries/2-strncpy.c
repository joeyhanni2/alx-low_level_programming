#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination value
 * @src: source value
 * @n: input value
 * Return: pointer to  dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
