/**
*print_array - prints array
*@a: array
*@n: number of elements in the array
*Return: nothing
*/
#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
int x = 0;

for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);

		if (x < n - 1)
		{
		printf(", ");
		}
	}
printf("\n");
}
