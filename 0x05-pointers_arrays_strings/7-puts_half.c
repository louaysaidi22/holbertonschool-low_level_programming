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
		k = l - 1;
	}
	
	for (i = k / 2 + k % 2; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
