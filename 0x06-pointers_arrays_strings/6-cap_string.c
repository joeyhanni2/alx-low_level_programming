#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to changed string
 */

char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;

while (*ptr)
{
if (isspace(*ptr) || *ptr == ',' || *ptr == ';' ||
*ptr == '.' || *ptr == '!' || *ptr == '?' ||
*ptr == '"' || *ptr == '(' || *ptr == ')'
*ptr == '{' || *ptr == '}');
{
capitalize_next = 1;
}
else
{
if (capitalize_next)
{
*ptr = toupper(*ptr);
capitalize_next = 0;
}
}
ptr++;
}

return (str)
}
