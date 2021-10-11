#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: point to a string.
 */
void _puts(char *str)
{
	int i;
	for (i = 0;i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
}
