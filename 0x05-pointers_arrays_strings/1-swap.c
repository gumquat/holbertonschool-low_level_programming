/**
*swap - swaps the values of two integers using pointers
*@a; integer
*@b: integer
*return: void
*/

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}


