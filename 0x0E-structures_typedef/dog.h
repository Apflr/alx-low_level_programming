#ifndef DOG_H
#define DOG_H
/*
 * struct dog - name and its members
 * @name - member
 * @age - member
 * @ owner - member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d)i;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s)

#endif
