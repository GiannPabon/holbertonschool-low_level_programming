#include "main.h"
/**
 * print_alphabet_x10 - will print the alphabet in lower case x10s
 *
 * Return: 0 success
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int letter;

while (i < 10)
{
	for (letter = 97; letter <= 122; letter++)
        _putchar(letter);

i++;
_putchar('\n');

}

}
