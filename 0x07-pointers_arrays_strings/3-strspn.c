#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			break;
		}
	if (accept[j] == '\0')
		break;	
	}
	return (i);
}
