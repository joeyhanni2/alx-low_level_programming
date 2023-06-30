#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = -1;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0')
;
do {
i++;

dest[j + i] = src[i];
i++;
}
return (dest);
}
^ C
