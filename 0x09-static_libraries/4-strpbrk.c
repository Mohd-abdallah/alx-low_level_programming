#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * Returns a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 * @s: input
 * @accept: input
 *
 * Return: accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
