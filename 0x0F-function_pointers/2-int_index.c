#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: pointer to array of int
 * @size: size of array
 * @cmp: pointer to function
 * Return: -1 or n
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
