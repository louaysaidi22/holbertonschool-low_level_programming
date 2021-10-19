#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: char
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; accept[i]; i++)
	{
		if (accept[i] == s)
			return (s + i);
	}
	return (NULL);
}
