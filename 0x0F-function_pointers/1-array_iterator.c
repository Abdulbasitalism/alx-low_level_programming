#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a parameter on element of array.
 * @array: array of pointer.
 * @size: size of the array.
 * @action: a pointer to the function you need to use
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
