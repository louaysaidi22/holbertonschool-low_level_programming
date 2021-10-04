#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
int n = '0';
int d = '1';
while (n <= '9')
{
while (d <= '9')
{
if ((d != n) && (n < d))
{
putchar(n);
putchar(d);
if ((n != '8') && (n != '9'))
{
putchar(',');
putchar(' ');
}
}
d++;
}
d = '1';
n++;
}
putchar('\n');
return (0);
}
