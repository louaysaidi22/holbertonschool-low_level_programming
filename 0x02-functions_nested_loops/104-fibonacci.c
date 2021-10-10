#include <stdio.h>
/**
 * main - Entry point
 * prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 **/
int main(void)
{
int i;
unsigned long p = 0;
unsigned long n = 1;
unsigned long f = 0;
for (i = 1; i < 99; i++)
{
f = n + p;
printf("%lu, ", f);
p = n;
n = f;
}
putchar('\n');
return (0);
}
