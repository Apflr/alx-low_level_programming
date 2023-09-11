#include <stdio.h>

/**
 * main - where the program begins
 *  prints the lowercase alphabet in reverse
 * Return: end of program
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
