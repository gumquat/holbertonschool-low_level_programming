/**
*swap - swaps the values of two integers using pointers
*@i: an integer
*return: nothing
*/

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}


