#include "main.h"

/**
 * print_numbers - prints numbers 0-9 next new line
 */

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
++i;
}
