#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main entry point of the programm
*time.h-sets a seed to generate random values
*return is set to zero as success
*/
#include <stdlib.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negativne\n", n);
	}
	return (0);
}
