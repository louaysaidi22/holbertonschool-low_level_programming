#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string.
 * @c: char.
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	bool x = false;

	while (s[i])
	{
		if (*s[i] == c)
		{
			return (s);
			x = true;
		}
		else
		{
			i++;
		}
	}
	if (x == false)
	{
		return (NULL);
	}
}
