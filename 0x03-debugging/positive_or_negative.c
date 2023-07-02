#include "main.h"
/**
 * main - determine positive or negative or zero
(* 0 :number to check
 * Return: 0 success
 */
void positiv _or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n" , i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n" , i, "positive");
}
else
{
printf("%d is %s\n" , i, "zero");
}
return;
}
