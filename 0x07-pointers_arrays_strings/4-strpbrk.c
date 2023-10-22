/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the bytes to search for
 *
 * Return: A pointer to the first matching byte in 's' from 'accept',
 *         or NULL if no matching byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *check_accept = accept;

		while (*check_accept)
		{
			if (*s == *check_accept)
				return s;
			check_accept++;
		}

		s++;
	}

	return NULL;
}
