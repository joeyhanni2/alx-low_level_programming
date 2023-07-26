#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to std output
 * @c: char to print
 * Return: 1 on success else -1
 * error num set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
