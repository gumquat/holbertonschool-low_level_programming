/**
 *main - multiplies two numbers pulled from argv
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: itsaaa me, 0
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

	/*the next two lines initializes three integers
	 * that will act as holders for our values stored in
	 * the argv[] array
	 * the third variable will act as a holder for the sum after
	 * we multiply the two inegers var2 and var2*/
int var1 = 0;
int var2 = 0;
int sum = 0;

/*this line checks that there are at least 2 arguments 
 * passed through argv, otherwise we couldnt multiply two numbers, duh*/
if (argc < 3)
{
	printf("Error\n");
	return (1);
}
else
{

	var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);
	sum = var1 * var2;
	printf("%d\n", sum);
}
/*the above 'else' statement is performing the 
 * multiplication of var1 and var2, and plugging that value
 * into 'sum'. It then prints that value*/
return (0);
}
