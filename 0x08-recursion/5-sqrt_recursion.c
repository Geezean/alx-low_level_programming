#include "main.h"

/**
 * squareroot - checks for the square roots recursively
 * @n: input number
 * @r: number for checking
 *Return: confirmed square root
 */

int squareroot(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (squareroot(n, r + 1));

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: Natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (squareroot(n, 0));
}

