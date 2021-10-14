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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
