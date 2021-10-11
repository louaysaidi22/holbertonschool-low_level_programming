#include "main.h"
/**
 * rev_string - a function reverses a string.
 * @s: point to a string.
 */
void rev_string(char *s)
{
	int l, i;
	char temp;
	l = 0;
	while (*(s + l) != '\0')
	{
	l++;
	}
	for (i = l - 1; i > l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}

}
