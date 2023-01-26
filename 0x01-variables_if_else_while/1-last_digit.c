/**
 * *main - words go here
*Return: main always 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
LastDigit = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
LastDigit = n % 10;
if (n == 0)
{
printf("Last digit of %d is 0\n", n);
}
else if (n > 5)
{
printf("Last digit of %d is %n and is greater than 5\n", n, LastDigit);
}
else if (> 0 && < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
return (0);
}
