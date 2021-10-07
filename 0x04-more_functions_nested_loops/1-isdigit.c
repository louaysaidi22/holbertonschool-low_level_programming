#include "main.h"
/**
 * _isdigit -  function that checks
 * for a digit 
 * @c: using l to return 1 or 0
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	int l = 0;

	if ((c >= 0) && (c <= 9))
	{
		l = 1;
	}
	return (l);
}
