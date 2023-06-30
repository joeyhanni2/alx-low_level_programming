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

int j, i;

for (j = 0; dest[j] != '\0'; j++)
;

for (i = 0; i < n &&  src[i] != '\0'; i++)
dest[j + i] = src[i];

dest[j + i] = '\0';

return (dest);
}
