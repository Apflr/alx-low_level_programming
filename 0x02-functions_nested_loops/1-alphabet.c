#include <stdio.h>
/**
 * print_alphabet - function that prints characters
 * Return - end of execution
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
}
