#include <stdio.h>
#include "main.h"

/*
 * _islower - a function that checks for lowercase character.
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 *
 * Return: an integer
 */
int _islower(int c)
{
	int i;

	for(i = 'aA'; i <= 'zZ'; i++)
	{
		if (c == i)
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
}

