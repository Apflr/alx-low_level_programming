#include <stdio.h>

/**
 * main - where the program begins
 *  prints the lowercase alphabet in reverse
 * Return: end of program
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
