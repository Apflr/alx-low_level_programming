#include <stdio.h>
/**
 * _puts_recursion - function test
 * @s: pointer to a string
 */
void _puts_recursion(char *s)
{
	if (*s == !'\0')
	{
		putchar(*s);
	}
	putchar('\n');
}
