/**
 *_putchar - writes characters
 *@c: character passed
 *Return: 1 is seuccessful
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
