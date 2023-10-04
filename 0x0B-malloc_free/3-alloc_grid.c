#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to /
 * a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL.
 * @width: width of the array.
 * @height: height of the array.
 * Return: Pointer to 2D array or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	 a = malloc(sizeof(*a) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(**a) * width);
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
