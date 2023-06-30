#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between s(1) and string 2
 */

int _strcmp(char *s1, char *s2)
{
int i;

while (i = 0; s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
;
i++;
}
return (s1[i] - s2[i]);
}
