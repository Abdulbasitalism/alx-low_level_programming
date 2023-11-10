#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int a;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	a = 0;
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'a':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				a++;
				continue;
		}
		separator = ", ";
		a++;
	}

	printf("\n");
	va_end(args);
}
