#include <stdio.h>
/**
 * print_sign - function that checks sign
 * @n: parameter to be tested
 * Return: end of execution
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
			printf("-");
			return (-1);
	}
}

