#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that  prints strings, followed by a new line.
 * @separator: separotor between strings
 * @n: number of arguments passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i, stop;

	va_start(args, n);
	stop = n - 1;
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
		printf("%s", s);
		else
			printf("nil");
		if (separator && i != stop)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
