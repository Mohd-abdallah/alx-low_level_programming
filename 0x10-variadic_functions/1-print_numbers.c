#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * and n is the number of integers passed to the function.
 * You are allowed to use printf.
 * If separator is NULL, don’t print it.
 * Print a new line at the end of your function.
 * @separator: pointer.
 * @n: integer.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}
	else
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1 || separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
