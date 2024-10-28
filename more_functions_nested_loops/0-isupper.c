#include "main.h"
/**
 * _isupper - main funtion
 *
 * @c:  main variable
 *
 * Return: success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
