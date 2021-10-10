#include "main.h"

/**
 * print_number -  function that prints an integer.
 * @n: integer.
 */

void print_number(int n)
{
	int i, j;

	if (n < 0)
	{
		n = n * -1;
		putchar('-');
	}
	i = 1;
	while (n % 10 != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(n % (10 (**) (i - j)) + 48);
	}
}

