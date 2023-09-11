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
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}

