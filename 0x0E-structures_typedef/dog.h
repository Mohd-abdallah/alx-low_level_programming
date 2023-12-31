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

/**
 * dog_t - typedef of struct
 */
typedef struct dog dog_t;


/*---------------------------------------------------------------------*/
/* Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
