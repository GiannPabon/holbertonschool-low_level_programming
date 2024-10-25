#include "main.h"
/**
 * print_sign - will print the sign of number inputed
 * @n: will hold an int
 * Return: 0 success
 *
 */

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-');
	return (-1);
}
}
