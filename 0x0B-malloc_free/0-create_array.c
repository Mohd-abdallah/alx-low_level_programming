#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input
 * @c: input
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *str = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (sizeof(str) == 0)
	{
		return NULL;
	}

	if (str == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	free(str);
	return (str);
}
