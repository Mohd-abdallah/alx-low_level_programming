#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * If n == 0, return 0.
 * @n: integer.
 * Return: integer or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		va_start(args, n);
		for (i = 0, i < n; i++)
		{
			sum = sum + va_args(args, int);
		}
	}
	return (sum);
}
