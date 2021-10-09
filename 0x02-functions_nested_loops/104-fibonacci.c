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
unsigned long int p = 1;
unsigned long int n = 2;
unsigned long int f = 0;
printf("%lu, ", p);
printf("%lu, ", n);
for (i = 1; i < 96; i++)
{
f = n + p;
printf("%lu, ", f);
p = n;
n = f;
}
f = n + p;
printf("%lu\n", f);
return (0);
}