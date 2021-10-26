#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, l = 0, k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
	}
	while (l < height)
	{
		k = 0;
		while (k < width)
		{
			a[l][k] = 0;
			k++;
		}
		l++;
	}
	return (a);
}
