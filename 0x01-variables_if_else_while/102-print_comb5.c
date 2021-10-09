#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
	{
	int n, p;

	for (n = 0; n < 99; n++)
	{
		for (p = n; p < 100; p++)
		{
			if (n != p)
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(p / 10 + '0');
				putchar(p % 10 + '0');
				if (!(n == 98 && p == 99))
				{
					putchar(',');
				}
			}
		}
	}
	return (0);
}
