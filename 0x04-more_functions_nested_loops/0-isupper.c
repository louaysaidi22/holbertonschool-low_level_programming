#include "main.h"
/**
 * _isupper -  function that checks
 * if the character c is upper case or not
 * @c: uppercse checker
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
