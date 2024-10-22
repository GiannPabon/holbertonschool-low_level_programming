#include <stdio.h>
/**
 *main - Prints the entire alphabet
 *Return: (0) success
 */
int main(void)
{
int i;

    /* For loop to print the alphabet from A to Z */
for (i = 97; i <= 122; i++)
{
putchar(i); /*The zero coverts digit to ASCII equivalent*/
}
putchar('\n');
return (0);
