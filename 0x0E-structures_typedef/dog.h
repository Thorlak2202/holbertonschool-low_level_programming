#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - data of a cute doggie.
 *
 * @name: the name of the pup!.
 * @age: the age in human of the doggie.
 * @owner: the owner of the pup.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
