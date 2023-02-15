/**
 *pow_recursion - returns the value x raised to the power y
 *@x: integer
 *@y: integer
 *Returns: sum of x to power of y
 */

int pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
