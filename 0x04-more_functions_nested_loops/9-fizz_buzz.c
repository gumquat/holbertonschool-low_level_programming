/**
*fizz_buzz - description HERE
*Return: 0
*/

#include "main.h"

void fizz_buzz(void)
{

int i;

for (i = 1; i <= 100; i++)
{
	if (n % 15 == 0)
		printf("FizzBuzz");
	else if (n % 3 == 0)
		printf("Fizz");
	else if (n % 5 == 0)
		printf("Buzz");
	else
		printf("%d", n);
	if (n != 100)
		printf(" ");
}
printf("\n");
}
