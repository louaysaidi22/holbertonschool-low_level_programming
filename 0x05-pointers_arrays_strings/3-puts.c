#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: point to a string.
 */
void _puts(char *str)
{
	int i, l;

	l = 0;
	while (*(str + l) != '\0')
	{
	l++;
	}
	for (i = 0; i < l; i++)
	{
		_putchar(*(str + i));
	}
	putchar('\n');
}
