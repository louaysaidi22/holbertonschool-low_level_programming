#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number to convert.
 * Return: converted unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int l = 0;
	unsigned int n = 0;
	unsigned int p = 1;
	char c;

	if (b == NULL)
		return (0);
	while (b[l])
		l++;
	printf("\nl = %u\n", l);
	for (i = l; i > 0; i--)
	{
		c = b[i - 1];
		if (!(c == '1' || c == '0'))
			return (0);
		if (c == 49)
			n += p;
		p *= 2;
	}
	return (n);
}
