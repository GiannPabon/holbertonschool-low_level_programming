#include "main.h"
/**
 * _puts - Print a string followed by a new line
 * @str: The string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
