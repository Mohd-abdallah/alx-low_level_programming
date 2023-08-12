#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @str: string input
 * Return: a string
*/
char *_strdup(char *str)
{
	char *str_cpy;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str_cpy = malloc(sizeof(char) * (i + 1));
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		str_cpy[j] = str[j];
	}
	return (str_cpy);
}
