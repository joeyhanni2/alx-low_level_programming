#include "main.h"

/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print
 *Return: void.
*/

void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}

for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
