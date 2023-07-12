#include "main.h"
#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 *  @c: character to print
 *  Return: 1 on success
 *  On error ,-1 returned,err number set appropriately
 */

int _putchar(char c)
{
return (write(1,&c, 1));
}
