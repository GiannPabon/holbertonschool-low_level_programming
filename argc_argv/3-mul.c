#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

