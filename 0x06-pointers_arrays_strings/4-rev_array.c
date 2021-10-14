#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array.
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = n - 1; i >= n / 2; i--)
		{
			aux = a[i];
			a[i] = a[l - i - 1];
			a[l - i - 1] = aux;
		}
}
