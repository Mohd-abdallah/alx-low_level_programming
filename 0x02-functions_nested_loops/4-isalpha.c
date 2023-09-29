#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character.
 * Returns 1 if c is a letter, lowercase or uppercase.
 * Returns 0 otherwise.
 *
 * @c: charecter to be checked.
 * Return: an integer.
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (c == j || c == i)
			{
				return (1);
			}
		}
	}
	return (0);
}

