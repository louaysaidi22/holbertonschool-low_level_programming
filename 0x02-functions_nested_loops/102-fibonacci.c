#include <stdio.h>
/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 **/
int main(void)
{
int i;
int p = 1;
int n = 2;
long long int f = 0;
for (i = 0; i <= 50; i++)
{
f = n + p;
printf("%d, ", f);
p = n;
n = f;
}
return (0);
}
