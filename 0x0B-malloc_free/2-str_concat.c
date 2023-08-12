#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * if NULL is passed, treat it as an empty string.
 * The function should return NULL on failure.
 * @s1: strig input
 * @s2: string input
 * Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		str[j] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}