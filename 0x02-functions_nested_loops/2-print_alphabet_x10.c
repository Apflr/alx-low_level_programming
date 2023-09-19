#include <stdio.h>
/**
 * main - prints out alphabet from a to z 10 times
 * print_alphabet_x10 prints out alpahabets
 * Return: end of progragram
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			 putchar (j);
		}
	printf("\n");
	}
}

