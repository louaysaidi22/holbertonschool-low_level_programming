#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	for (i = 0; s[i]; i++)
	{	c = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
		if (c == 0)
		{
			return (i);
			break;
		}
	}
return (0);
}
