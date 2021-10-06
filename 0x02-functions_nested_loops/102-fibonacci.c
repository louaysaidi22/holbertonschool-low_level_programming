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
int p = 1;
int n = 2;
long int f;
f = 0;
printf("%i, ", p);
printf("%i, ", n);
for (i = 0; i < 48; i++)
{
f = n + p;
printf("%lu, ", f);
p = n;
n = f;
}
return (0);
}
