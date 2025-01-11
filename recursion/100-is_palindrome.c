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
	if (*s == '\0')  /* Base case: empty string is a palindrome */
		return 1;
	return check_palindrome(s, 0, _strlen_recursion(s) - 1);
}

/**
 * _strlen_recursion - Recursively calculates the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string */
		return 0;
	return 1 + _strlen_recursion(s + 1);  /* Recursive case: move to the next character */
}

