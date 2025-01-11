#include "main.h"

/**
 * check_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)  /* If all characters have been checked */
		return 1;
	if (s[start] != s[end])  /* If characters don't match */
		return 0;
	return check_palindrome(s, start + 1, end - 1);  /* Recurse with inner substring */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')  /* Base case: empty string is a pal

