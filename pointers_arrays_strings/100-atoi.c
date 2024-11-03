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
	int found_digit = 0;

	while (s[i] != '\0')
	{
		/* Handle signs */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;

		/* Convert characters to integer if they are digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
