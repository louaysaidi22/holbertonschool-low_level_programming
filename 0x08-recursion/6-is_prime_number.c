#include "main.h"
/**
 * second - function that return prime number.
 * @i: integer
 * @p: intger
 * Return: prime number
 */
int second(int i, int p)
{
	if (p % i == 0)
		return (0);
	else if (i > p / 2)
		return (1);
	else
		return (second(i + 1, p));
}
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: integer.
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	return (second(3, n));
}
