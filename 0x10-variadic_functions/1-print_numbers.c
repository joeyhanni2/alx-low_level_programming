#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: num of integers passed to function
 * @separator: string to be printed
 * @...: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;

va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
