#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int p = 1;
	unsigned long int m = *n;

	if (index > 64)
		return (-1);
	while (m > 0)
	{
		if (i == index)
		{
			if (m % 2 == 1)
				*n -= p;
			return (1);
		}
		m /= 2;
		p *= 2;
		i++;
	}
	return (1);
}
