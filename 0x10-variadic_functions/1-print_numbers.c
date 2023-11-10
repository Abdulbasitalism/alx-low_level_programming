#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to be printed.
 * @n: number of intergers
 *
 * Return: void
 */

oid print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list numbers;

	va_start(numbbers, n);

	for (a 0; a <n; a++)
	{
		printf("%d", va_arg(numbers, int));
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
