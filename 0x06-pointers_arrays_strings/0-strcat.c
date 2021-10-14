#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n;
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
	for (n = i; n <= i + j; n++)
	{
		dest[n] = src[k];
		k++;
	}
	return (dest);
}
