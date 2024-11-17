#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, initializes with a specific char
 * @size: Size of the array
 * @c: Character to initialize the array with
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

