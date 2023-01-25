/**
*main - PUT DESCRIPTION HERE
*Return: main always 0
*/
#include <stdlib.h>
#include <time.h>
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
echo "is positive\n"
}else{
echo "is negative\n"
}
return (0)
}

