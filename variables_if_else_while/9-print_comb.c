#include <stdio.h>
/**
 * main - display single digit numbers followed by comma and space
 *
 * Return: (0) Success
 */

int main(void)
{

int digit;

for (digit = 0; digit <= 9; digit++)
{
	putchar(digit);
	if (digit != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

return (0);
}
