#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer on char 1
 * @s2: pointer on char 2
 * @n: unsigned int
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int l = 0, k;
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
	if (n > j)
		l = i + j;
	else
		l = i + n;
	s = malloc(sizeof(char) * l);
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
	s[l] = '\0';
	return (s);
}
