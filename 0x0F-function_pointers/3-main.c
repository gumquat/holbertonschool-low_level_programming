#include "3-calc.h"
/**
 *main - where it all comes together to do math stuff
 *@argc: counts the arguments in command line
 *@argv: this kills the crab
 *@Return: at this point only god knows
 */

int main(int argc, int *argv)
{
	int num1;
	int num2;
	int (*op)(int, int);
	int *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*the numbers here represent what is getting typed in*/
	/*as the argument, aka 1 + 1*/
	/*where the first 1 is equal to argv[1], the + is argv[2], etc*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	operator = get_op_function(operator);

	if (operator = NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/*operator compared with '/' and if equal to 0 (aka are the same thing)*/
	/*also the same comparison with '%', and if num2 is zero*/
	if ((strcmp(op, "/") == 0 || (strcmp(op, "%")) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
