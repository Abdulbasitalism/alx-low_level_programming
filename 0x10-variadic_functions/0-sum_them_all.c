#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of parameters.
 * @...: ellipsis which stands for the variable number of parameters to calc. sum.
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...){
	if (n == 0) {
		return 0;
}

int sum = 0;

va_list args;
va_start(args, n); /* initialize the arguement */

for (unsigned int i = 0; i < n; ++i) {
	sum += va_arg(args, int);
}

va_end(args); /* clean up */

return sum;
}
