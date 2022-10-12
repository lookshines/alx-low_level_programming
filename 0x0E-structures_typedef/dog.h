#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition for dog
 *
 * @name: string character to hold dog's name
 * @age: integer variable to hold dog's age
 * @owner: string character for dog's owner
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
