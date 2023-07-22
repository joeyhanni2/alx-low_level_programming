#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * p_char -  prints anything
 * @c: character to print
 */

void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  * p_int - prints integers
  * @i: integer to print
  */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
  * p_float - prints floats
  * @f: float to print
  */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
  * p_string - prints strings
  * @s: string to print
  */
void p_string(va_list s)
{
char *string;

string = va_arg(s, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
}

/**
  * print_all - prints any argument passed into it
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
unsigned int i;
va_list num;
char *p, *sep;

va_start(num, format);
sep = "";
i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(num, int));
break;
case 'i':
printf("%s%d", sep, va_arg(num, int));
break;
case 'f':
printf("%s%f", sep, va_arg(num, double));
break;
case 's':
p = va_arg(num, char *);
if (p == NULL)
p = "(nil)";
printf("%s%s", sep, p);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
printf("\n");
va_end(num);
}
