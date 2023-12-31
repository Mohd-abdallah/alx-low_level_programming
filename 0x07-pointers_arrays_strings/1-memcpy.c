#include "main.h"
#include <string.h>
/**
 * _memcpy - a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 * Returns a pointer to dest
 * @dest: pointer
 * @src: pointer
 * @n: intger
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
