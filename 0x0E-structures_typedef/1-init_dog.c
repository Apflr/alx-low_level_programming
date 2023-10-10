#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#incde <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    d->name = malloc((strlen(name) + 1) * sizeof(char));
    d->owner = malloc((strlen(owner) + 1) * sizeof(char));

    if (d->name == NULL || d->owner == NULL)
    {
        printf("Memory allocation failed\n");
        free(d->name);
        free(d->owner);
        return;
    }
    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}
