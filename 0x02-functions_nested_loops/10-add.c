#include "main.h"

/**
 * add - a function that adds two integers and returns the result
 * @a: int to be added to b.
 * @b: int to be added to a.
 * Return: Sum of a and b.
 */

int add(int a, int b)
{
	int sum = a + b;
	int result = 0;

	if (sum < 0)
	{

	_putchar('-');
	sum = -sum;
	}

	if (sum == 0)
	{

	_putchar('0');
	return (0);
	}

	while (sum > 0)
	{

	int digit = sum % 10;

	_putchar(digit + '0');
	sum /= 10;
	}

	return (result);
}

