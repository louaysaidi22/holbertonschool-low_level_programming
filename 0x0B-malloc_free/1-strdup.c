#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory, which
 * contains a copy of the string
 * given as a parameter.
 * @str: pointer on char
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	int i, l = 0;
	char *str2;

	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	str2 = malloc(sizeof(char) * l + 1);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		*(str2 + i) = *(str + i);
	return (str2);
}
