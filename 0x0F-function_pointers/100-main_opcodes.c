#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 always on success
 */

int main(int argc, char *argv[])
{
int bytes, (i);
char *arr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}
arr = (char *)main;
for (int i = 0; i < bytes; i++)
{
if (i == num_bytes - 1)
printf("%02x", (unsigned char)i);
}

printf("\n");

return (0);
}
