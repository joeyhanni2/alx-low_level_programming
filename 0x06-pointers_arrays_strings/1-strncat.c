#include "main.h"

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

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

dest[i] = '\0';

return (dest);
}
