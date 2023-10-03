#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space /
 * in memory, which contains a copy of the string given as a parameter.
 * The _strdup() function returns a pointer to a new string which is /
 * a duplicate of the string str. Memory for the new string is obtained /
 * with malloc and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 * @str: a pointer to a string
 * Return: Pointer or NULL.
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *a = malloc(sizeof(char) * len);
	int i;


	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			a[i] = str[i];
		}
		a[len] = '\0';
	}
	return (a);
}
