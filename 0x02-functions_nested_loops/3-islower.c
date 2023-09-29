#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 * @c: charecter to be checked.
 * Return: an integer.
 */
int _islower(int c)
{
	int i, j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}

