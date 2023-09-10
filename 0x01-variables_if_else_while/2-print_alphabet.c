#include <stdio.h>

/**
 * main - where the program starts
 *char 
 * Return: where program ends
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

