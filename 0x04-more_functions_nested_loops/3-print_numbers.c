#include "main.h"

/**
 * print_numbers - prints numbers 0-9 then next new line
 * Return: 0
 */

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
++i;
}
