#include "main.h"
/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * @n: times table.
*/
void print_times_table(int n)
{
int q, p, m, f, l, k;

if ((n >= 0) && (n <= 15))
{
for (p = 0; p <= n; p++)
{
_putchar(48);
for (m = 1; m <= n; m++)
{
f = m * p;
if (m < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(l)
}
else if (f >= 10)
{
l = f / 10;
k = f % 10;
if (f < 100)
{
_putchar(' ');
_putchar(' ')
_putchar(l + '0');
_putchar(k + '0');
}
else
{
q = l / 10;
l = l % 10;
_putchar(' ');
_putchar(q + '0');
_putchar(l + '0');
_putchar(k + '0');
}
}
}
_putchar('\n');
}
}
}
