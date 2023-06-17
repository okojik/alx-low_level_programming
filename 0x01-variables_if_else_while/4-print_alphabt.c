#include <stdio.h>

/**
 * main - A C program that prints the alphabet except q and e in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;


		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			if (alphabet != 'q' && alphabet != 'e')
			{
				putchar(alphabet);
			}
		}

	putchar('\n');

	return (0);
}
