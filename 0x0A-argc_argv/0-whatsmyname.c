#include "main.h"
#include <stdio.h>

/**
 * main - prints programs name followed by a new line.
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
