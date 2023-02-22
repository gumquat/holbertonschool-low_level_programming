/**
 *main - adds two numbers
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: 0 as usual
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*this function passes two items in its parameter
 *the first is an integer that will act as the 
 *argument counter, and the second is a pointer to the
 *argument vector*/
int main(int argc, char *argv[])
{

	/*the following lines initialize three integers, the first
	 * will be used to count thru our loops, the second will
	 * hold the value of a variable, and the third will hold 
	 * the final result of our math*/
	int index;
	int var = 0;
	int sum = 0;

	/*the first for loop will iterate thru the amount of arguments
	 * that are inside argc, making sure we go thru all of them*/
	for (index = 1; index < argc; index++)
	{	
		/*the second for loop will iterate through the 2 dimensional 
		 * array hel by argv
		 * index will pass thru rows, and var will pass
		 * thru columns*/
		for (var = 0; argv[index][var]; var++)
		{
			/*this if statement will check if any value passing
			 * thru the above loop contains a symbol that is not
			 * a digit*/
			if (argv[index][var] < '0' || argv[index][var] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
