#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *  program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int a, b, f;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	f = a * b;
	printf("%d\n", f);
	return (0);
}
