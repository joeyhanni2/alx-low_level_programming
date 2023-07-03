#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes charcacter c to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 returned error number set appropriately 
 */

int _putchar(char c)
{
	return (write(1,&c, 1));
}
