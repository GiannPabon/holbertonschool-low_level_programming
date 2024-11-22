#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation function based on the operator
 * @s: The operator passed as argument to the program
 *
 * Return: Pointer to the appropriate operation function,
 *         or NULL if no match is found.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
