#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of parameters.
 * @...: ellipsis which stands for the variable number of parameters to calc. sum.
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
