/**
 * POOOWEEEER
 * @a: number to POOOWEEERR
 * @b: THE POOOOWEEER
 * Return: sum
 */

int _pow(unsigned int num1, unsigned int num2)
{
	unsigned int sum = num1, index = 1;

	if (num2 == 0)
		return (1);

	while (index < num2)
	{
		sum = sum * num1;
		index++;
	}

	return (sum);
}
