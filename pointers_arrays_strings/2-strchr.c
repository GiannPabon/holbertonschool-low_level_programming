#include "main.h"
#include <stddef.h>  /* for NULL */

/**
 * _strchr - Locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character `c`,
 * in the string `s` or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	/* Iterate through the string until the null terminator is reached */
	while (*s != '\0')
	{
		/* Check if the current character matches the target character */
		if (*s == c)
		{
			return (s);  /* Return a pointer to the character if found */
		}
		s++;  /* Move to the next character in the string */
	}

	/* If the character to locate is the null term. , return a pointer to it */
	if (c == '\0')
	{
		return (s);
	}

	/* If the character is not found, return NULL */
	return (NULL);
}

