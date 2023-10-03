#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that creates an array of chars /
 * and initializes it with a specific char.
 * Returns NULL if size = 0.
 * Returns a pointer to the array, or NULL if it fails.
 * @size: size of the array.
 * @c: character to initialize the array with.
 * Return: pointer to the array or null.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *) malloc(sizeof(c) * size);

	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	return (0);
}
