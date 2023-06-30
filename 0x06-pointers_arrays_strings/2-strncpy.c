#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: Destination of the string
 * @src: Source of copied string
 * @n: Number of bytes to copy.
 * Return: destination.
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;

for  (i = 0; src[i] != '\0' && i < n; i++)
dest[i]	= src[i];

while (i < n)
dest[i++] = '\0';

return (dest);
}
