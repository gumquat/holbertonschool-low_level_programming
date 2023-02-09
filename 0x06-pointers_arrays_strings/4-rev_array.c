/**
*rev_array - reverses a array
*@a: 
*@n:
*Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int temp;
	int index = 0;
	
	index = n - 1;

	while (index >= n / 2)
	{	
		index--;
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index--];
		a[index] = temp;
	}
	
}
