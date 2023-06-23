#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * Return: void
 */

void print_alphabet_x10(void)
{
char c;
int count = 0;

while (count++ < = 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
count++;
}
}
