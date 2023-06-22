#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: The number to check the sign of.
 * Return: The value of int.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
