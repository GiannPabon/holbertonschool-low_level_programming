#include <stdio.h>
/**
 *main - Prints single digit numbers 0-9
 *Return: (0) success
 */
int main(void)
{
int number;

	for (number = 0; number <= 9; number++)
{
	putchar(number + '0');
}
putchar('\n');

return (0);
}
