/**
*rev_array - reverses a array
*@a: 
*@n:
*Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int temp;
	int index = n - 1;
	
	while (index >= n / 2)
	{
		index--;
		temp = a[n - index - 1];
		a[n - index - 1] = a[index--];
		a[index] = temp;
	}
	
}
