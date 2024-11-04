#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n characters from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}

