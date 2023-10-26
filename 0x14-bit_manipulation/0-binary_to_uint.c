#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * where b is pointing to a string of 0 and 1 chars.
 * Return the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 / b is NULL.
 * @b: pointer to a string.
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		n <<= 1;
		if (b[i] == '1')
		{
			n += 1;
		}
		i++;
	}
	return (n);
}
