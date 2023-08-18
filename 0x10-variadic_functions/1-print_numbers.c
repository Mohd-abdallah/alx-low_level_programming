#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * where separator is the string to be printed between numbers.
 * and n is the number of integers passed to the function.
 * You are allowed to use printf.
 * If separator is NULL, don’t print it.
 * Print a new line at the end of your function.
 * @n: input
 * @separator: string to be printed between numbers.
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
