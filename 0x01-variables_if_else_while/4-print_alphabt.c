#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints out the alphabet without q and e.
 * Return: end of program
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter  <= 'z'; letter++)

	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
