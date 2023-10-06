#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function tested
 * @b: paraeter tested
 * Exit: 98 if allocation not successful
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
