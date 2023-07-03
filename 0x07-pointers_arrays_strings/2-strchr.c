#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (null);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}
