#include "main.h"
/**
 * _islower -  function that checks if the character c is lowercase or not
 * @c: using l to return 1 or 0
 * Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
int l = 0;
if ((c >= 'a') && (c <= 'z'))
{
l = 1;
}
return (l);
}
