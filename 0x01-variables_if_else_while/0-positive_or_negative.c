/**
*main - prints the size of various types
*Return: main always 0
*/
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*better style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is positive\n");
}
else if
{
printf("%d is negative\n");	
}
else
{
printf("%d is zero\n");	
}
return (0);
}
