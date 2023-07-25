#include "main.h"


/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: int to be swaped
 * @b: int to be swaped
 * Return: a, b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
