#include <stdio.h>
/**
 *main - Prints the entire alphabet
 *Return: (0) success
 */
int main(void)
{
int i;

    /* For loop to print the alphabet from a to z */
for (i = 97; i <= 122; i++)
{
putchar(i);
}

    /* For loop to print the alphabet from A to Z */
for (i = 65; i <= 90; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}
