#include "main.h"
/**
 * print_sign -  function that checks if
 * the sign of a number.
 * @n: number cheked.
 * Return: 1 if n is greater than zero
 * or return 0 if n is zero or less.
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return(0);
_putchar('-');
}
