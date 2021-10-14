#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 
 */
int _strcmp(char *s1, char *s2)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
	int n = 0;
	

	while (s1[i])
	i++;
	while (s2[j])
	j++;
	if (i <= j)
		k = i;
	else
		k = j;
	while (l <= k)
	{
		if (s1[l] == s2[l])
			l++;
		else
		{
			n = s1[l] - s2[l];
			break;
		}
		l++;
	}

	return (n);
}
