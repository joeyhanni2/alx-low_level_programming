#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between string 1 and string 2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (s1 - s2);
}
