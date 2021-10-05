#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int n, m, f, l, k;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
f = m * n;
if (f >= 10)
{
l = f / 10;
k = f % 10;
_putchar(l + '0');
_putchar(k + '0');
}
else
{
_putchar(f + '0');
}
}
_putchar('\n');
}
}
