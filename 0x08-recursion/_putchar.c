#include <unistd.h>

/**
 * this is putchar.c
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c,1);
}
