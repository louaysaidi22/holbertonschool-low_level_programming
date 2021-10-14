#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: bytes used from src.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int i = 1;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (p = i; p <= i + n; p++)
	{
		dest[p] = src[j];
		j++;
	}
	return (dest);
}
