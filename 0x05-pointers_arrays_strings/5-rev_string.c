#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: point to a string.
 */
void print_rev(char *s)
{
	int i, j, l;
	char rev[0];

	l = 0;
	while (*(s + l) != '\0')
	{
	l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		rev[j] = *(s + i);
		j++;
	}
}
