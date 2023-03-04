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
	int (*op)(int, int);
	operator = argv[2];

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op = get_op_function(operator);
}
