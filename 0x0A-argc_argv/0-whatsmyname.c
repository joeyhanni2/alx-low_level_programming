#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);

	return (0);
}
