#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - returns sum of two nums
 * @a: first num
 * b: second num
 * Return: Result of the sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
  * op_sub - subtracts two nums
  * @a: first num
  * @b: second num
  * Return: the difference
  */
int op_sub(int a, int b)
{
return (a - b);
}

/**
  * op_mul - multiplies two numbers
  * @a: first num
  * @b: second num
  * Return: multiplication result
  */
int op_mul(int a, int b)
{
return (a * b);
}

/**
  * op_div - divides two numbers
  * @a: first num
  * @b: second num
  * Return: result of the division
  */
int op_div(int a, int b)
{
return (a / b);
}

/**
  * op_mod - divides two nums
  * @a: first num
  * @b: second num
  * Return: the remainder
  */
int op_mod(int a, int b)
{
return (a % b);
}
