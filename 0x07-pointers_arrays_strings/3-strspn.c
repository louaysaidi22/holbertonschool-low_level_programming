#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = 1;
			}
		}
		if (c == 1)
		{
			n++;
		}
	}

	return (n);
}
