#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements of /
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 * @nmemb: integer.
 * @size: integer.
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return ((void *)a);
}
