/**
*reverse_array - reverses a array
*@a: points to an array
*@n: integer representing number of things in an array
*Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int temp;
	int index;

	index = n - 1;

	while (index >= n / 2)
	{
		index--;
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
		n++;
	}
}
