#include <stdio.h>
/**
 * main - Entry point
 * prints the Fibonacci numbers that do npt exceed 4000000
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 **/
int main(void)
{
long int p = 1;
long int n = 2;
long int f = 0;
printf("%lu, ", p);
printf("%lu, ", n);
while (f < 4000000)
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
