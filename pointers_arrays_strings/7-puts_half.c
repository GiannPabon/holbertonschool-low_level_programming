#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
int length = 0;
int start;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine the starting point for printing */
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2 + 1;
}

/* Print the second half of the string */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}

