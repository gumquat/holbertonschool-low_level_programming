#include "3-calc.h"
/**
 *main - where it all comes together to do math stuff
 *@argc: counts the arguments in command line
 *@argv: this kills the crab
 *@Return: at this point only god knows
 */

int main (int argc, int *argv[])
{
	int num1;
	int num2;
	int (*operator)(int, int);

	if(argv[2] == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (argc >= 5 || argc <= 3)
	{
		printf("Error\n");
		exit(99):
	}

	if ((*argv[2] == '/' || '%') && (b == 0))
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", operator(a, b));
	return (0):
}
