#include "main.h"
#include <stddef.h>
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;
	while (haystack[i])
	{
		j = 0;
		k = i;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return(haystack + k);
		i++;
	}
		return(NULL);
}

