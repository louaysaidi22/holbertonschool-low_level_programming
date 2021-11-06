#include "3-calc.h"
/**
 * main - Etry point
 * @argc: argument count
 * @argv: argument vector
 * Return: operation
 */
int main(int argc, char *argv[])
{
	int a, b, s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	argv[2][0] != '%' && argv[2][0] != '/') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	s = get_op_func(argv[2])(a, b);
	printf("%d\n", s);
	return (0);
}
