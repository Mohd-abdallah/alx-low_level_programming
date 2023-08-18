#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * If n == 0, return 0
 * @n: input
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, j = 0;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		j = j + va_arg(ls, int);
	}
	va_end(ls);
	return (j);
}
