#include "main.h"
/**
 * _isalpha -  function that checks if
 * the character c alphabetic character or not
 * @c: alphabetic or not
 * Return: 1 if c alphabetic otherwise 0
*/
int _isalpha(int c)
{
int l = 0;
if ((c >= 'A') && (c <= 'z'))
{
l = 1;
}
return (l);
}
