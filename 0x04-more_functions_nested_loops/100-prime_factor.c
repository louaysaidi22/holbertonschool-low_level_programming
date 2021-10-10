#include <stdio.h>
/**
 * main - entry point
 * program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: 0
 */
int main(void)
{
long int n, d, f;
n = 612852475143;
d = 2;
while (n != 0)
{
	if (n % d != 0)
		d = d + 1;
	else
	{
		f = n;
		n = n / d;
		if (n == 1)
		{
			printf("%lu\n", f);
			break;
		}
	}
}
return (0);
}
