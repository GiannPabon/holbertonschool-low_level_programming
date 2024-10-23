#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char hex;

	for (hex = '0'; hex <= '9'; hex++)  /* Loop that prints from 0 to 9 */
{
	putchar(hex);
}
	for (hex = 'a'; hex <= 'f'; hex++)  /* Loop that prints from a to f */
{
	putchar(hex);
}
putchar('\n');

return (0);
}

