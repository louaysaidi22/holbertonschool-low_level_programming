#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *@src: pointer
 *@src: pointer
 *@n: number of  bytes
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
