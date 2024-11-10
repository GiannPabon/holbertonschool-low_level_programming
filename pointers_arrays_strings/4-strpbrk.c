#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first matching byte in a string
 * @s: The input string to search
 * @accept: The set of bytes to match
 *
 * Return: Pointer to the first match in `s`, or NULL if none found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

