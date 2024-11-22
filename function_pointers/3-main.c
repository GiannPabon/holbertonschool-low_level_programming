#include "3-calc.h"
/**
 * main - Entry point for the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or exits with appropriate status code on error.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opr = get_op_func(argv[2]);
	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = opr(num1, num2);
	printf("%d\n", result);
	return (0);
}
