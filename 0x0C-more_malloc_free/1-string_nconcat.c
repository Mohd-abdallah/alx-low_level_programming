#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**i
 * string_nconcat - a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory, /
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string.
 * @s1: a string.
 * @s2: a string.
 * @n: integer.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i;
	unsigned int x = strlen(s1);
	unsigned int y = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = malloc((sizeof(char) * n) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		if (i < x)
		{
			a[i] = s1[i];
		}
		else if (n >= y)
		{
			a[i] = s2[i];
		}
		else
		{
			a[i] = s2[i - x];
		}
	}
	a[n] = '\0';
	return (a);
}
