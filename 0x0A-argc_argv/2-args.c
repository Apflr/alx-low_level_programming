#include <stdio.h>
#include "main.h"
/**
 * main - program execution
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
