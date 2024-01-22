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
	char *duplicate;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	len++;
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
