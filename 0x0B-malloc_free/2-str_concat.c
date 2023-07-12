#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: duplicated string or NULL if insufficient mem
 */
char *str_concat(char *s1, char *s2);
{
	char *concat;
	int i, n;

	if (s1 == NULL)
		S1 = "";

	if (s2 == NULL)
		s2 = "";
	i = n = 0;
while (s1[i] != '\0')
	i++;
while (s2[n] != '\0')
	n++;
concat = malloc(sizeof(char) * (i + n + 1));

if (concat == NULL)
	return (NULL);
I = n = 0;
while (s1[1] != '\0')
{
	concat[i] = s1[i];
	i++;
}
while (s2[n] != '\0')
{
	concat[i] = s2[n]
i++;
n++;
}
concat[i] - '\0';
return (concat);
}
