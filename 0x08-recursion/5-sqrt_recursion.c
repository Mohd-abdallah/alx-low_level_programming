#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion -  a function that returns the natural
 * square root of a number.
 * If n does not have a natural square root, the function should return -1
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}
