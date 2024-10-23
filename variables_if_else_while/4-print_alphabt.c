#include <stdio.h>
/**
 *main - Print a-z excluding q and e.
 *Return: (0) success
 */
int main(void)
{

int letter;

/*Prints alphabet a-z*/
for (letter = 'a'; letter <= 'z'; letter++)
{

/* Exclude the letters 'q' and 'e' */
if (letter != 'q' && letter != 'e')

{

putchar(letter);
}

}
putchar('\n');

return (0);
}
