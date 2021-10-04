#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
int n = '0';
int d = '0';
int m = '0';
int p = '0';
while (n <= '9')
{
while (d <= '9')
{
while (m <= '9')
{
while (p <= '9')
{
if (((n != m) || (d != p)) && ((m == n) && (d < p)))
{
putchar(n);
putchar(d);
putchar(' ');
putchar(m);
putchar(p);
putchar(',');
putchar(' ');
}
p++;
}
p = '0';
m++;
}
m = '0';
d++;
}
d = '0';
n++;
}
putchar('\n');
return (0);
}
