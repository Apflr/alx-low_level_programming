#include <stdio.h>
/*
 **__calloc:  function that allocates memory for an array, using malloc
 * @nmemb: return null
 * @size: parameter tested
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

