#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: first string.
 * @src: second string.
 * @n: bytes used from src.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 1;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
