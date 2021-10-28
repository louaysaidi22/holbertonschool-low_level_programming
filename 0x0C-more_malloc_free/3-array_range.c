#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int i;
	int l;
	int *n;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	n = malloc(sizeof(int) * l);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		n[i] = min++;
	return (n);

}
