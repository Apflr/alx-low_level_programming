#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints anme using pointers
 * @name: pointer to string
 * @f: function pointer that returns null and takes char pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

