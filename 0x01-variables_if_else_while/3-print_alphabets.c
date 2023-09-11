#include <stdio.h>
/**
 * main - Prints all charactes
 *
 * Return: end of program ends
 */
int main(void)
{
	char upperCase;
	char lowerCase;
	for (upperCase = 'A', lowerCase = 'a'; upperCase <= 'Z' && lowerCase <= 'z'; upperCase++, lowerCase++)
	{
		putchar(lowerCase);
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}

