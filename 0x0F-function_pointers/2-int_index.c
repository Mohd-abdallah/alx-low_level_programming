#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * where size is the number of elements in the array array.
 * cmp is a pointer to the function to be used to compare values.
 * int_index returns the index of the first element for which
 * the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 * @array: pointer to array.
 * @size: integer.
 * @cmp: pointer to function.
 * Return: 0 or index of the 1st element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
