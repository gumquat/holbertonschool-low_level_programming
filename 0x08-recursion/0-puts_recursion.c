/**
 *_puts_recursion - function that prints a string on a new line
 *@s: string that gets passed thru
 *Return: returns a string
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}

}
