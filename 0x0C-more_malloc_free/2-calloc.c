#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	return (n);
}
