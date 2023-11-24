#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes the character c to the stdout.
 * @c: The charater to print.
 *
 * Return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
