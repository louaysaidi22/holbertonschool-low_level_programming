#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: point to a string.
 */
void puts_half(char *str)
{
	int i, l, k;

	l = 0;
	while (*(str + l) != '\0')
	{
	l++;
	}
	if (l % 2 != 0)
	{
		l--;
	}
	k = l  /2 + l % 2;
	for (i = k; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
