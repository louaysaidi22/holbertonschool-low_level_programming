#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
