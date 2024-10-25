#include "main.h"
/**
 * _isalpha - Output 1 if variable is char if not it will print 0
 * @c: will hold an int
 * Return: 0 success
 *
 */


int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
else
	return (0);
}
