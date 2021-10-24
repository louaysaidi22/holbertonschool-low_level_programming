#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int a, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	a = atoi(argv[1]);
	change = 0;
	while (a / 25 != 0)
	{
		change++;
		a -= 25;
	}
	while (a / 10 != 0)
	{
		change++;
		a -= 10;
	}
	while (a / 5 != 0)
	{
		change++;
		a -= 5;
	}
	while (a / 2 != 0)
	{
		change++;
		a -= 2;
	}
	if (a == 1)
	{
		change++;
	}
	printf("%d\n", change);
	return (0);
}
