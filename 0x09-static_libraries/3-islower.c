#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case
 * @c: character to be tested
 * Return: end of execution
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
