#include "variadic_functions.h"
/**
 * pr_char - function that print char
 * @x: pointer to arg
 */
void pr_char(va_list x)
{
	printf("%c", va_arg(x, int));
}
/**
 * pr_int - function that print int
 * @x: pointer to arg
 */
void pr_int(va_list x)
{
	printf("%i", va_arg(x, int));
}
/**
 * pr_float - function that print int
 * @x: pointer to arg
 */
void pr_float(va_list x)
{
	printf("%f", va_arg(x, double));
}
/**
 * pr_string - function that print string
 * @x: pointer to arg
 */
void pr_string(va_list x)
{
	char *str;

	str = va_arg(x, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - function that prints anyting
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
	};
	size_t i, j;
	va_list x;
	char *comma = "";

	i = 0;
	va_start(x, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (*ops[j].op == format[i])
			{
				printf("%s", comma);
				ops[j].f(x);
				comma = ", ";
			}
			j++;
			}
			i++;
	}
	printf("\n");
	va_end(x);
}
