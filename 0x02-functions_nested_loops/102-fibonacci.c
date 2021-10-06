#include <stdio.h>
/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 **/
int main(void)
{
int i;
long int p = 1;
long int n = 2;
long int f = 0;
printf("%lu, ", p);
printf("%lu, ", n);
for (i = 0; i < 47; i++)
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
