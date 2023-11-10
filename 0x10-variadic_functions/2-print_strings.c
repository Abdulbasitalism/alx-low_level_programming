#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *s;
	va_list strings;

	if (separator == NULL)
		Separator = "";

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(strings, char *);
	
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
