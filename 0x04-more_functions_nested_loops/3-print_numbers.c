#include "main.h"

/**
 * print_numbers - prints numbers 0-9 then next new line
 * Return: 0
 */

void print_numbers(void)
{
char numbers[] = "0123456789\n";
int i = 0;

while (numbers[i] != '\0')
{
_putchar(i + '0');
i++;
}
}
