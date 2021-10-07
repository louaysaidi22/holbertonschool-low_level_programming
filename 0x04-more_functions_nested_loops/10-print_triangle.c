#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of triangle.
 */

void print_triangle(int size)
	{
	int s, n, p;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (s = 1; s <= (size - n); s++)
			{
				_putchar(' ');
			}
			for (p = 1; p <= n; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

