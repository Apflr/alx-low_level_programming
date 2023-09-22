#include <stdio.h>
/**
 * print_last_digit -function for testing
 * @nambari: paramter
 * @mwisho: stores last digits
 * Return: returns the last digit
 */
int print_last_digit(int nambari)
{
	int mwisho;
	if (nambari < 0)
	{
		nambari = -nambari;
	}
	mwisho = nambari % 10;

	return (mwisho);
}

