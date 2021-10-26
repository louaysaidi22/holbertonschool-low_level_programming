#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer on char 1
 * @s2: pointer on char 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int l = 0, k;
	char *s;

	if (s1 != NULL)
	{
		while (s1[i])
		i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
		j++;
	}
	l = i + j;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	j = 0;
	while (k < l)
	{
		s[k] = s2[j];
		k++;
		j++;
	}
	return (s);
}
