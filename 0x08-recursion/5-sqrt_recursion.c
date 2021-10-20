#include "main.h"
/**
 * second - function that finds the natural square root.
 * @i: integer
 * @p: integer
 * Return: square root of p.
 */
int second(int i, int p)
{
	if (i * i == p)
		return (i);
	else if (i * i > p)
		return (-1);
	else
		return (second(i + 1, p));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
		return (second(1, n));
}
