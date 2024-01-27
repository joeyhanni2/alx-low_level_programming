#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  string to be printed
 * @n:  number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;
char *str;

va_start(num, n);
for (i = 0; i < n; i++)
{
str = va_arg(num, char *);
(str) ? printf("%s", str) : printf("(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
