#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string.
 * @c: char.
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
	{
		i++;
	}
	if (s[i])
	{
		return (s + i);
	}
	else
	{
		return NULL;
	}
}
