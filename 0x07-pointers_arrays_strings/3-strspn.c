#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (s[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[i] == accept[j])
			n++;
		j++;
		}
		i++;
	}
	return (n);
}

