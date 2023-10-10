#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to a struct dog.
 */
void print_dog(struct dog *d)
{
	struct dog my_dog = *d;
	if (d == NULL)
	{
	printf("Pointer to struct dog is NULL\n");
	return;
	}

	printf("Name: %s\n", (my_dog.name != NULL) ? my_dog.name : "(nil)");
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", (my_dog.owner != NULL) ? my_dog.owner : "(nil)");
}
