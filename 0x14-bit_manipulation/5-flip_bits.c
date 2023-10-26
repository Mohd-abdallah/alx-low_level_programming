#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: integer.
 * @m: integer.
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int num = n ^ m;

	while (num)
	{
		i++;
		num &= (num - 1);
	}
	return (i);
}
