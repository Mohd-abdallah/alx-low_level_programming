#ifndef DOG_H
#define DOG_H

/* Structures */

/**
 * struct dog - new struct
 * @name: char.
 * @age: float.
 * @owner: char.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};





/* Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
