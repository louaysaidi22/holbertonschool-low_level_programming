#include "search_algos.h"
/**
 * jump_search - a function that searches for a value in
 * a sorted array of integers using the jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, m, l, h;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	m = j = sqrt(h);
	printf("Value checked array[%li] = [%i]\n", l, array[l]);
	while (l < h)
	{
		if (value > array[m])
		{
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		}
		else if (value <= array[m])
		{
			printf("Value found between indexes [%li] and [%li]\n", l, m);
			for (i = l; i <= m; i++)
			{
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		m += j;
		l += j;
	}
	printf("Value found between indexes [%li] and [%li]\n", l, m);
	printf("Value checked array[%li] = [%i]\n", l, array[l]);
	return (-1);
}
