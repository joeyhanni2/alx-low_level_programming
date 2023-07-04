#include "main.h"
#include <stdio>

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int len;

len = 0;
while (needle[len] != '\0')
len++;

while (*haystack != '\0')
{
if (_strncmp(haystack, needle, len) == 0)
return (haystack);
haystack++;
}
return (NULL);
}
