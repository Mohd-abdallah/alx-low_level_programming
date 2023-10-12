#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * where separator is the string to be printed between the strings.
 * and n is the number of strings passed to the function.
 * You are allowed to use printf.
 * If separator is NULL, don’t print it.
 * If one of the string is NULL, print (nil) instead.
 * Print a new line at the end of your function
 * @separator: Pointer
 * @n: integer.
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
