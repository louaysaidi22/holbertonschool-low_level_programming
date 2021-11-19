#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: index
 * Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if (i == index)
			return (n % 2);
		n /= 2;
		i++;
	}
	return (-1);
}
