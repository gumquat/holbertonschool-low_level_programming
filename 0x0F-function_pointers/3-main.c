#include "3-calc.h"
/**
 *main - where it all comes together to do math stuff
 *@argc: counts the arguments in command line
 *@argv: this kills the crab
 *Return: at this point only god knows
 */

int main(int argc, int *argv[])
{
	int num1;
	int num2;
	int (*operator)(int, int);
	char *poop;

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
	poop = argv[2];
	operator = get_op_function(poop);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/*operator compared with '/' and if equal to 0 (aka are the same thing)*/
	/*also the same comparison with '%', and if num2 is zero*/
	if ((strcmp(poop, "/") == 0 || (strcmp(poop, "%")) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));

	return (0);
}
