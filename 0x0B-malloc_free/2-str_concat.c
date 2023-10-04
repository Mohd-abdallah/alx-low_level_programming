#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory /
 * which contains the contents of s1, followed by the contents of s2, /
 * and null terminated.
 * if NULL is passed, treat it as an empty string.
 * The function should return NULL on failure
 * @s1: string
 * @s2: string
 * Return: pointer to a string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2);
	char *a = malloc((sizeof(char) * len) + 1);
	int i;
	int x = strlen(s1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (i < x)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[i - strlen(s1)];
		}
	}
	a[len] = '\0';
	return (a);
}
