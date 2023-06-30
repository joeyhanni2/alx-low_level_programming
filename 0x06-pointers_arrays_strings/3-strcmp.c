#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between string 1 and string 2
 */

int _strcmp(char *s1, char *s2)
{
int i;
i = 0

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
