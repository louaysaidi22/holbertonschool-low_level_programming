#include <stdio.h>
/**
 * main - Entry point
 *  program that finds and prints the sum of the
 *  even-valued terms,hose values do not exceed 4,000,000.
 * Return: 0
 **/
int main(void)
{
long int p = 1;
long int n = 2;
long int f = 0;
long int k = 0;
while (f < 3000000)
{
f = n + p;
k += f;
p = n;
n = f;
}
printf("%lu\n", k);
return (0);
}
