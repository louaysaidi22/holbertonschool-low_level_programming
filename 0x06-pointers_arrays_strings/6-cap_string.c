#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 1;
	int j;
	int k = 0;
	char c[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	while (s[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == con[j])
			{
				k++;
			}
		if (s[i] > 96 && s[i] < 123 && k > 0)
		{
			s[i] -= 32;
		}
		i++;
		k = 0;
	}
	return (s);
}
