/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing the characters to be matched
 *
 * Return: The number of bytes in the initial segment of 's' consisting only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_match;

	while (*s)
	{
		is_match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				is_match = 1;
				break;
			}
			accept++;
		}

		if (!is_match)
			return count;

		s++;
		accept -= count;
	}

	return count;
}
