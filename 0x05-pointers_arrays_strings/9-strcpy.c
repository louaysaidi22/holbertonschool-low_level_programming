#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: point to a string.
 * @src: point to a string.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (*(dest + l) != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
