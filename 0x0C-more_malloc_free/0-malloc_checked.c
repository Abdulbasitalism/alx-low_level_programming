#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - writing a function that allocates memory using malloc.
 * @b: The number of bytes to the allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);
	if (y == NULL)
	exit(98);
	return (y);
}
