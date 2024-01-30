#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) on success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
