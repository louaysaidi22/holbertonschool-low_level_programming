#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: separotor between numbers
 * @n: number of arguments passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, stop;

	va_start(args, n);
	stop = n - 1;
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (separator && i != stop)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
