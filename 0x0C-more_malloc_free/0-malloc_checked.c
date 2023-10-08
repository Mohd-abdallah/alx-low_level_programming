#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * Returns a pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should cause normal /
 * process termination with a status value of 98.
 * @b: integer.
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = malloc(sizeof(b));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);	
}
