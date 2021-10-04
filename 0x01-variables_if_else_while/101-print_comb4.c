#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible different combinations of three digits..
 * Return: 0
 */
int main(void)
{
int n = '0';
int d = '1';
int m = '2';
while (n <= '9')
{
while (d <= '9')
{
while (m <= '9')
{
if ((d != n) && (d != m) && (n != m) && (n < d) && (d < m))
{
putchar(n);
putchar(d);
putchar(m);
if (n != '7')
{
putchar(',');
putchar(' ');
}
}
m++;
}
m = '2';
d++;
}
d = '1';
n++;
}
putchar('\n');
return (0);
}
