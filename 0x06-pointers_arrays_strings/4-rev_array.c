/**
*rev_array - reverses a array
*@a: points to an array
*@n: integer representing number of things in an array 
*Return: reversed array
*/

void rev_array(int *a, int n)
{
	int temp;
	int index;

	index = n - 1;

	while (index >= n / 2)
	{
		index--;
		temp = a[n - 1];
		a[n - 1] = a[index];
		a[index] = temp;
		n++;
	}
}
