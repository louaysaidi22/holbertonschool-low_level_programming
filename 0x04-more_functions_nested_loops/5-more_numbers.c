#include "main.h"

/**
 * more_numbers -  function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, j, l, k;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{	l = i / 10;
			k = i % 10;
			if (i > 9)
			{
				_putchar(l + 48);
			}
			_putchar(k + 48);
		}
		_putchar('\n');

	}
}

