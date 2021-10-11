#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: point to a string.
 */
void print_rev(char *s)
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
