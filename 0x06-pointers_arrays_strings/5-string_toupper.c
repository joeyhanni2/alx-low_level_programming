#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase.
 * @c: the string to change
 * Return: the changed string.
 */
char *string_toupper(char *c);
{
int i;

i = 0;
while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] -= 'a' - 'A';
i++;
}
return (c);
}
