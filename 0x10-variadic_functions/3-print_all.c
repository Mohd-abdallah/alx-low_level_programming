#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * where format is a list of types of arguments passed to the function.
 * @format: list of types of arguments.
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *str2 = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str2, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", str2, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", str2, va_arg(args, double));
					break;
				case 's':
					va_arg(args, char *);
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
	va_end(args);
}
