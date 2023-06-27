#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the character array.
 * Return: length of the string
 */

size_t _strlen(char *str)
{
size_t lenStr = 0;

while (*str++)
lenStr++;

return (lenStr);
}
