#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: 0
 */

void print_number(int n)

	unsigned int n;

	num = n;

	if (num < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (num / 10 != 0)
	{
	print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
