#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: first string to compare
 * @s2: second string to compare with
 *
 * Return: s1[i] and s2[i] difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;


	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
