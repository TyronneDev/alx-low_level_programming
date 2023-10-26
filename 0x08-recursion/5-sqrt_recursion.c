#include "main.h"

/**
* _sqrt_recursion - returns natural square root of a number
* @n: int
* Return: natural square root or -1
**/

int _sqrt_recursion(int n)
{
return (natural_square(n, 1));

}

/**
* natural_square - function that help to find natural_square
* @x: int
* @y: int
* Return: square root or -1
**/

int natural_square(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (natural_square(x, y + 1));
}
