#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append src to dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}

