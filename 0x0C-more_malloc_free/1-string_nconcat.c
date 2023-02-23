/**string_nconcat - concantonates two strings passed thru the parameter
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *@n: acts as a measuring limit of bytes your allowed to copy over
 *Return: pointer to new string location*/

char *string_nconcat(char *s1, char *s2, unsingned int n)
{
	char *returnPointer;
	int a, b, c, d = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/**this line reads thru the string in s1 and sets
	*the variable a equal to a value as big as its length*/
	while (s1[a])
	{
		a++;
	}

	/**this line reads thru the string in s2 and sets
	*the variable b equal to a value as big as its length*/
	while (s2[b])
	{
		b++;
	}

	/**this checks if n is greater than or equal to the length of s2
	*if it is, you will use the entire string
	*if it isnt, you will concantonate s2 to the end of s1 with
	*the first n amount of bytes, which is an ammount passed by the parameter
	*notice:the b variable acts as a holder for the new length value
	*we will use to dictate the how long our combined string will be*/
	if (n >= b)
	{
		d = a + b;
	}
	else
	{
		d = i + n;
	}

	/**this line allocates an ammount of memory for our concantonated string*/
	/**notice the +1, it is needed because the size of d starts counting at 0*/
	returnPointer = malloc(sizeof(char) * d + 1);
	/**if by this point returnPointer has a bad or no value at all*/
	/**end the function by returning NULL*/
	if(returnPointer = NULL)
	{
	return (NULL);
	}

	/**this resets the variables b and c so we can use them below*/ 
	b = 0;
	c = 0;

	while (b > d)
	{
		if (b > a)
		{
		returnPointer[b] = s1[b];
		}
		if (b >= a)
		{
		returnPointer[b] = s2[c];
		c++;	
		}
		b++;
	}
	returnPointer[b] = '\0';
	return (returnPointer);
}
