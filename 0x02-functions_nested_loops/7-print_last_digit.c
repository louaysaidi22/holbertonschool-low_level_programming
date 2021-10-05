#include "main.h"
/**
 *  print_last_digit - function that prints t
 *  he last digit of a number.
 * @n: number cheked.
 * Return: 0
*/
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)}
{
l = l*(-1);
}
_putchar(l + '0');
return (l);
}
