#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int i = 1;
	int j = 0;
	int k = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (p = i; n <= i + n; n++)
	{
		dest[n] = src[k];
		k++;
	}
	return (dest);
}
