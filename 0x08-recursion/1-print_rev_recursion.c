#include <stdio.h>
/**
 * _print_rev_recursion - function tested
 * @s: parameter tested
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
