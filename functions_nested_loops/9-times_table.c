#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
    int row, col, product;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;

            if (col > 0)
            {
                _putchar(',');
                _putchar(' ');
                /* Add extra space if product is a single digit */
                if (product < 10)
                    _putchar(' ');
            }

            /* Print each digit of the product */
            if (product >= 10)
            {
                _putchar((product / 10) + '0'); /* Print tens digit */
                _putchar((product % 10) + '0'); /* Print ones digit */
            }
            else
            {
                _putchar(product + '0');
            }
        }
        _putchar('\n');
    }
}

