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
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

