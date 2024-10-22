#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Determines the last digit of n.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

last_digit = n % 10; /*divides n by 10 to get last digit*/

if (last_digit > 5)
{
printf("Last digit of %d is %d\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d\n", n, last_digit);
}
return (0);
}
