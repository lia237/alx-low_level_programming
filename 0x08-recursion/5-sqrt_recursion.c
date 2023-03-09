#include "main.h"

/**
 * helper - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: evaluate sqrt
 */

int helper(int a, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (helper(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: evaluate sqrt
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
