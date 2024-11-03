#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    /* Determine sign and move to the first number */
    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Process digits and check for overflow */
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (result > (2147483647 - (s[i] - '0')) / 10)
            return (sign == 1 ? 2147483647 : -2147483648);

        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
