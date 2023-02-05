/**
*swap_int - swaps the values of two integers using pointers
*@a; integer
*@b: integer
*return: void
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}


