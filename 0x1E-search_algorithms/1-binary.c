#include "search_algos.h"
/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, l, h;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i \n", array[h]);
		mid = (l + h) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}
