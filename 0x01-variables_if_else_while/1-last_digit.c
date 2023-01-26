/**
*main - print last digit of an integer
*Return: main always 0
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int n, LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
if (LastDigit == 0)
{
printf("Last digit of %d is 0\n", n);
}
else if (LastDigit > 5)
{
printf("Last digit of %d is %n and is greater than 5\n", n, LastDigit);
}
else if (LastDigit < 6 && LastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
return (0);
}
