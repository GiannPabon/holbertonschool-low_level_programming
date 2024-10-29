#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			print_number(i);
		}
		if (i != 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

