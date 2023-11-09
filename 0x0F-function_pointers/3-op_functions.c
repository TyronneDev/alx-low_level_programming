#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first integer
 * @b: second integer
 * Return: result of summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first integer value
 * @b: second integer value
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first integer 
 * @b: second integer
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first integer
 * @b: second integer
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first integer
 * @b: second integer
 * Return: modulo
 */OOA
int op_mod(int a, int b)
{
OOA	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
