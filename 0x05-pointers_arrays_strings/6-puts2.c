#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: point to a string.
 */
void puts2(char *str)
{
	int i, l;

	l = 0;
	while (*(str + l) != '\0')
	{
	l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
