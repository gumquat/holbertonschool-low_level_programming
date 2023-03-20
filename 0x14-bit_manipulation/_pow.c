/**
 * POOOWEEEER
 * @a: number to POOOWEEERR
 * @b: THE POOOOWEEER
 * Return: sum
 */

int _pow(unsigned int a, unsigned int b)
{
	unsigned int sum = a, index = 1;

	if (b ==0)
		return (1);

	while (index < b)
	{
		num1 = num1 * a;
		index++;
	}

	return (sum);
}
