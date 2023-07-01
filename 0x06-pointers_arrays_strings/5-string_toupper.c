#include <stdio.h>

/**
 * string_toupper - changes lowercase letters to uppercase.
 * @c: the string to change
 * Return: the changed string.
 */

char *string_toupper(char *str);
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}
return (str);
}
