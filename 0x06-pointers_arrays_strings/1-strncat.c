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
int i, j;

for (i = 0; dest[j] != '\0'; j++)
;
while (i = 0; src[i] != '\0' && i < n)

dest[j + i] = src[i];
i++;

return (dest);
}
