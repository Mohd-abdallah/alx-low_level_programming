#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 0x01;
	char *c;

	c = (char *)&n;
	if (c[0] == 0x01)
	{
		return (1);
	}
	return (0);
}
