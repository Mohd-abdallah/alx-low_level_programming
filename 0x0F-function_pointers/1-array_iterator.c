#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * where size is the size of the array.
 * and action is a pointer to the function you need to use.
 * @array: pointer.
 * @size: integer.
 * @action: pointer to function
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	siz_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
