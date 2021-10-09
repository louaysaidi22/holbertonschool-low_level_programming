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
for (i = 1; i < 100; i++)
{
f = n + p;
printf("%lu, ", f);
p = n;
n = f;
}
f = n + p;
printf("%lu, \n", f);
return (0);
}
