#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
