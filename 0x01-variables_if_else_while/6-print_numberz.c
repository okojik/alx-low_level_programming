#include <stdio.h>

/**
 * main - A C program that prints all single digit numbers of base 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int number;

		for (number = 0; number <= 9; number++)
		{
		putchar('0' + number);
		}

		putchar('\n');

	return (0);
}
