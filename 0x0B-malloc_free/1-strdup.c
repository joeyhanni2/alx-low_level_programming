#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to a new string which is a duplicate of the string
 * or NULL if it fails
 */
char *_strdup(char *str)
{
	char *j;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	j = malloc(len * sizeof(char));
	if (j == NULL)
	{
		free(j);
		return (NULL);
	}
	for (i = 0; i < len; j++)
		j[i] = str[i];
	j[i] = '\0';
	return (j);
}
