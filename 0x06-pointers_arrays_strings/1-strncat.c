#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return:void
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0, dest_len = 0;

while (dest[i++])
dest_len++;
for (i = 0; src[i] && i < n; i++)
dest[dest_len++] = src[i];

return (dest);
}
