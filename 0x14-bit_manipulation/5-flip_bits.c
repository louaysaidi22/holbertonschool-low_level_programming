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

	if (index > 64)
		return (-1);
	while (n > 0)
	{
		if (i == index)
			return (n % 2);
		n /= 2;
		i++;
	}
	return (0);
}
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < 64)
	{
		if (get_bit(n, i) != get_bit(m, i))
			j++;
		i++;
	}
	return (j);
}
