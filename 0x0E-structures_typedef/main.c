/**
 *main - uhhhhhh
 *
 *Return: 0
 */

#include <stdio.h>
#include "dog.h"

int main(void)
{
struct dog dog_t;

dog_t.name = "Poppy";
dog_t.age = 3.5;
dog_t.owner = "Bob";

printf("My name is %s, and I am %.1f :) - Woof!\n", dog_t.name, dog_t.age);

return (0);
}
