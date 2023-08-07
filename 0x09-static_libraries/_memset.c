#include "main.h"
#include <string.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s : pointer
 * @b : char
 * @n : unsined int
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
