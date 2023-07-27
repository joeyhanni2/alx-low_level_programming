#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9, followed by a new line.
 * Return: 0 always (success)
 */

void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if (i !=  2 && i != 4)
_putchar (i + '0');
++i;
}
_putchar ('\n');
}
