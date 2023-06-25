#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz.
 * for the multiples of five print Buzz.
 * for multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (success)
 */

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else

			if (i % 5 == 0 && 3 != 0)
			{
				printf("Buzz");
			}
			else

				if (i % 3 == 0 && 5 == 0)
				{
					printf("FizzBuzz");
				}
				else
					if (i == 1)
					{
					printf("%d", i);
					}
					else
					{
						printf(" %d", i);
					}
	}
	printf("\n");
	return (0);
}
