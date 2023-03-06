#include "3-calc.h"
/**
 *main - where it all comes together to do math stuff
 *@argc: counts the arguments in command line
 *@argv: this kills the crab
 *Return: at this point only god knows
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *poop;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	poop = argv[2];
	operator = get_op_func(poop);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(poop, "/") == 0 || (strcmp(poop, "%")) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}
