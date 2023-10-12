#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 * You have to store a copy of name and owner.
 * Return NULL if the function fails.
 * @name: pointer to char.
 * @age: float
 * @owner: pointer to char.
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	n = malloc(sizeof(dog_t));
	if (n == NULL)
	{
		return (NULL);
	}
	n->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}
	n->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (n->owner == NULL)
	{
		free(n->name);
		free(n);
		return (NULL);
	}
	n->name = strcpy(n->name, name);
	n->age = age;
	n->owner = strcpy(n->owner, owner);
	return (n);
}
