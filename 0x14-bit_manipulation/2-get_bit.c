#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * where index is the index, starting from 0 of the bit you want to get.
 * @n: integer
 * @index: index of number.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index <= size)
	{
		if ((n >> index) % 2 == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (-1);
}
