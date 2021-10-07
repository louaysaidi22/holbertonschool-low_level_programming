#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of triangle.
 */

void print_triangle(int size)
	{

	if (size > 0)
	{
		for (int n = 1; n <= size; n++)
		{
			for (int s = 1; s <= (size - n); s++)
			{
				_putchar(' ');
			}
			for (int s = 1; s <= (size - n); s++)
			{
				_putchar('#');
			}
		}
	else
	{
		_putchar('\n');
	}
}

