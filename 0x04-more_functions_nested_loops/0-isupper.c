#include "main.h"
/**
 * _isupper -  function that checks
 * if the character c is upper case or not
 * @c: using l to return 1 or 0
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
int l = 0;

if ((c >= 'A') && (c <= 'Z'))
{
l = 1;
}
return (l);
}
