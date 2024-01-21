#include "main.h"

/**
 * char *_strcpy - copies the string from src to dest
 * @dest: pointer to destinstion
 * @src: source value
 * Return: pointer value to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
