#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins
 * to make change for an amount of cents.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
unsigned int cents;
int coins;

cents = coins = 0;
if (argc == 2)
{
if (argv[1][0] == '-')
printf("0\n");
if (checker(argc, 1, 0, argv) == 0)
{
cents = atoi(argv[1]);
for ( ; cents >= 25; coins++, cents -= 25)
;
for ( ; cents >= 10; coins++, cents -= 10)
;
for ( ; cents >= 5; coins++, cents -= 5)
;
for ( ; cents >= 2; coins++, cents -= 2)
;
for ( ; cents >= 1; coins++, cents--)
	;
printf("%d\n", coins);
}
}
else
printf("Error\n");
return (0);
}
