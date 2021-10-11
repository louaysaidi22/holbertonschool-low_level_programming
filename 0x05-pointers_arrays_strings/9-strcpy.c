#include "main.h"
/**
 *_strcpy - function that copies the string pointed to by src,
 including the terminating null byte (\0), to the buffer pointed to by dest. 
 *@dest: point to a string.
 *@src: point to a string.
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (*(dest + l) != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		src[i] = dest[i];
	}
	return(dest);
}
