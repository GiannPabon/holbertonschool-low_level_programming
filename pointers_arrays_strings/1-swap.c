#include "main.h"
/**
 * swap_int - main function
 *@a: first pointer
 *@b: second pointer
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
