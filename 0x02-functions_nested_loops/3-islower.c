#include "main.h"
/**
 * _islower -  function that checks for lowercase character.
 *
*/
int _islower(int c)
{
int l = 0;
if ((c >='a') && (c <= 'z'))
{
l = 1;
}
return (l);
}
