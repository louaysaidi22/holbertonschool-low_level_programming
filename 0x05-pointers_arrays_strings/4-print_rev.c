#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed by a new line.
 * @s: point to a string.
 */
void print_rev(char *s)
{
	int i, l;

	l = 0;
	while (*(str + l) != '\0')
	{
	l++;
	}
	for (i = l; i < l; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
