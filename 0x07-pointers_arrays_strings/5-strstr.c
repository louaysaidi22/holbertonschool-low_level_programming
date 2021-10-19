#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0;

	while (haystack[i] != needle[0])
		i++;
	for (j = 0; needle[j]; j++)
	{
		if (needle[j] == haystack[j + i])
		k++;
	}
	if (k == j)
		return(i);
	else
		return(NULL);
}

