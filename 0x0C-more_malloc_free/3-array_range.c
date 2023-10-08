#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers.
 * The array created should contain all the values from min (included) /
 * to max (included), ordered from min to max.
 * Return: the pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL
 * @min: integer.
 * @max: integer.
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a = NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		a[j] = i;
	}
	return (a);
}
