#include "main.h"
/**
 * print_alphabet - will print the alphabet in lower cases
 *
 * Return: 0 success
 *
 */

void print_alphabet(void)
{
int letter;

for (letter = 97; letter <= 122; letter++)
	_putchar(letter);

_putchar('\n');

}
