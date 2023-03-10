#include "3-calc.h"
#include <string.h>
/**
 *get_op_func - contain the function that selects the correct function
 *to perform the operation asked by the user
 *@s: operator passed as an argument
 *Return: pointer to the needed function or NULL if bad garbage doodoo
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

	if (strlen(s) != 1)
		return (NULL);

	while (ops[i].op != NULL && s[0] != ops[i].op[0])
		i++;

	return (ops[i].f);
}

