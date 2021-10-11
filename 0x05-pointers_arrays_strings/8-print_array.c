#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: point on array.
 * @n: number of elements.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i\n", a[i++]);
}
