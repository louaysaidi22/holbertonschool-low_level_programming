#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 * @s: point to a string.
 * Return: string lenght.
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s[str] != 0)
	{
		str++;
	}
	return (str);
}
