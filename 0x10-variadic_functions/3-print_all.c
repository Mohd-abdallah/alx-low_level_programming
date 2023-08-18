#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * You are allowed to use printf.
 * print a new line at the end of your function.
 * @format: list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *str2 = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str2, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", str2, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", str2, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
					{
						str = "(nil)";
						printf("%s%s", str2, str);
					}
					break;
			default:
				i++;
				continue;
			}
			str2 = ", ";

			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
