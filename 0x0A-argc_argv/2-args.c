#include <stdio.h>
/**
 * main - Entry point
 * program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
