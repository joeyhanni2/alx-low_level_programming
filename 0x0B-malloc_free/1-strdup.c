#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to newly allocated memory space with string copy
 * @str: char string to copy
 * Return: duplicated string ,NULL on failure
 */

char *_strdup(char *str)
{
char *n;
int i, r = 0;

if (str == NULL)
return (NULL);

while  (str[i] != '\0')
{
i++;
}
return (NULL);
{
n = malloc(sizeof(char) * (i + 1));

if (n == NULL)
free(n);
return (NULL);
}
for(r=0; r < i; r++)
n[r] = str[r];
n[r] = '\0';
return (n);
}
