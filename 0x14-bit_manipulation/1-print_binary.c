#include "main.h"

/**
 * _powerr - a func that calculates (base ^ power).
 * @base: base of exponent.
 * @power: power of exponent.
 *
 * Return: value of (base ^ power).
 */
unsigned long int _powerr(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _powerr(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
