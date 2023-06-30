#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = -1, j;

for (j = 0; dest[j] != '\0'; j++)
;
do {
i++;
dest[j] = src[i];
i++;
} while (src[i] != '\0');

return (dest);
}
