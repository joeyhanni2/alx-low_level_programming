#include <stdlib.h>
#include "main.h"

/**
 * strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: NULL is str = NULL
 */

char *_strdup(char *str)
{
unsigned int len, p;
char *str
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
len++;
if (s == NULL)
{
free(s);
return (NULL);
}
if (len < 1)
return (NULL);
s = malloc(len *sizeof(char));
for (p = 0; p < len; p++)
s[p] = str[p];
s[p] = '\0';
return (s);
