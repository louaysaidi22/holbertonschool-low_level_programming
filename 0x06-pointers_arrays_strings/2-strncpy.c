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
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
