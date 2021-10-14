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
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;
		while (b < 5)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
			{
				s[i] = b[i];
			}
			j++;
		}
		i++;
	}
	return (s);
}
