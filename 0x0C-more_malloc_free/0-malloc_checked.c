#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
