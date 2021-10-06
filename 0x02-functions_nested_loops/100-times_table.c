#include "main.h"
/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * @n: times table.
*/
void print_times_table(int n)
{
int p, m, f, l, k;
for (p = 0; p <= n; n++)
{
for (m = 0; m <= n; m++)
{
f = m * p;
if (f >= 10)
{
l = f / 10;
k = f % 10;
_putchar(l + '0');
_putchar(k + '0');
}
else
{
if (m != 0)
{
_putchar(' ');
}
_putchar(f + '0');
}
if (m != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
