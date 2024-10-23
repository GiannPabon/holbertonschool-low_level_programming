#include <stdio.h>
/**
 *main - Prints the entire alphabet
 *Return: (0) success
 */
int main(void)
{
char letter;

    /* For loop to print the alphabet from A to Z */
for (letter = 122; letter >= 97; letter--)
{
putchar(letter); /*The zero coverts digit to ASCII equivalent*/
}
putchar('\n');
return (0);
}
